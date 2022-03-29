/* 
    CH-230-A
    a6_p9.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// declare struct list
struct list {
    int info;
    struct list *next;
};
// declare my linked list which is to be built
struct list *my_list = NULL;

// function for inserting an element at the beginning
struct list *insert_front(struct list *my_list, int value) {
    struct list *el1;
    // dynamically allocate memory
    el1 = (struct list *) malloc(sizeof(struct list));
    if (el1 == NULL)
        return my_list;

    // initialization
    el1->info = value;
    el1->next = my_list;

    return el1;
}

// function for inserting an element in the back
struct list *insert_back(struct list *my_list, int value) {
    struct list *cursor;
    cursor = my_list;

    struct list *el2;
    // dynamically allocate memory
    el2 = (struct list *) malloc(sizeof(struct list));
    if (el2 == NULL)
        return my_list;
    
    // initialization
    el2->info = value;
    el2->next = NULL;
    
    if (my_list == NULL)
        return el2;
    
    // go to the end of the list with cursor
    while (cursor->next != NULL)
        cursor = cursor->next;

    // join the list with the new element
    cursor->next = el2;
    
    return my_list;
}

// function for removing the first element of the list
struct list *remove_first(struct list *my_list) {
    // if the list is empty do nothing to it
    if (my_list == NULL)
        return my_list;

    // let the list start from the next element    
    my_list = my_list->next;
    
    return my_list;
}

// function for printing the list
void print_list(struct list *my_list) {
    struct list *temporary;
    temporary = my_list;

    // temporary goes through the whole list 
    // and prints each of them one by one 
    while (temporary != NULL) {
        printf("%d ", temporary->info);
        temporary = temporary->next;
    }
    printf("\n");
}

// function for freeing the dynamically allocated memory
void free_list(struct list *my_list) {
    struct list *nextel;
    // going through the whole list and freeing
    // memory of each element one by one
    while (nextel != NULL) {
        nextel = my_list->next;
        free(my_list);
        my_list = nextel;
    }
}

// function for inserting an element at a specific position
struct list *insert_pos(struct list *my_list, int pos, int value) {
    struct list *tmp;
    tmp = my_list;

    struct list *elpos;
    // dynamically allocate memory
    elpos = (struct list *) malloc(sizeof(struct list));
    if (elpos == NULL)
        return my_list;
    
    // go to the specified position with tmp
    for (int i = 1; i < pos; i++) 
        tmp = tmp->next;

    // set the new element between tmp and the next one
    elpos->next = tmp->next;
    tmp->next = elpos;
    elpos->info = value;

    // go to the end of the list with tmp
    while (tmp != NULL)
        tmp = tmp->next;
    my_list = tmp;
    
    return my_list;
}

// function for reversing the order of the list
struct list *reverse_list(struct list *my_list) {
    // declare variables needed to perform the reversing
    struct list *prev;
    struct list *next;
    struct list *current;
    // and initialize them
    prev = NULL;
    next = NULL;
    current = my_list;
    
    // do the reversing
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    my_list = prev;

    return my_list;
}

int main() {
    char c;
    int val; // value to be inserted

    // needed for insert_pos() function
    int pos;
    int num = 0;
    struct list *temp;

    while (1) {
        scanf("%c", &c); // input char
        // which action to take depending on char input
        switch (c) {
            case 'a':
                scanf("%d", &val);
                my_list = insert_back(my_list, val);
                break;
            case 'b':
                scanf("%d", &val);
                my_list = insert_front(my_list, val);
                break;
            case 'r':
                my_list = remove_first(my_list);
                break;
            case 'p':
                print_list(my_list);
                break;
            case 'q':
                free_list(my_list);
                return 0;
                // when input is 'q' along with freeing memory
                // also end the program
            case 'i':
                // count number of elements in the list
                num = 0;
                for (temp = my_list; temp != NULL; temp = temp->next)
                    num++;

                scanf("%d", &pos);
                scanf("%d", &val);

                // check if input position is valid
                if (pos < 0 || pos > num) {
                    printf("Invalid position!\n");
                    break;
                }
                // inserting in pos 0 is the same as insert_front()
                else if (pos == 0)
                    my_list = insert_front(my_list, val);
                // with valid position perform the function
                else
                    insert_pos(my_list, pos, val);
                break;
            case 'R':
                my_list = reverse_list(my_list);
                break;
        }
    }

    return 0;
}