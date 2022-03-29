/* 
    CH-230-A
    a7_p2.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// declare struct dlist
struct dlist {
    char info;
    struct dlist *next;
    struct dlist *prev;
};
// declare my linked list which is to be built
struct dlist *my_list = NULL;

// function for inserting an element at the beginning
struct dlist *insert_front(struct dlist *my_list, char ch) {
    struct dlist *el1;
    // dynamically allocate memory
    el1 = (struct dlist *) malloc(sizeof(struct dlist));
    if (el1 == NULL)
        return my_list;

    if (my_list == NULL)
        return el1;

    // initialization
    el1->info = ch;
    el1->prev = NULL;
    el1->next = my_list;
    my_list->prev = el1;
    return el1;
}

// remove all elements
void remove_ch(struct dlist *my_list, char ch) {
    if (my_list == NULL)
        return;

    struct dlist *temp;
    struct dlist *tmp;
    tmp = my_list;
    
    while (tmp != NULL) {
        temp = tmp;
        if (tmp->info == ch)
            free(temp);
        tmp = tmp->next;
    }
}

// function for printing the list
void print_list(struct dlist *my_list) {
    struct dlist *temporary;
    temporary = my_list;

    // temporary goes through the whole list 
    // and prints each of them one by one 
    while (temporary != NULL) {
        printf("%c ", temporary->info);
        temporary = temporary->next;
    }
    printf("\n");
}

// function for freeing the dynamically allocated memory
void free_list(struct dlist *my_list) {
    struct dlist *nextel;
    // going through the whole list and freeing
    // memory of each element one by one
    while (nextel != NULL) {
        nextel = my_list->next;
        free(my_list);
        my_list = nextel;
    }
}

void print_reverse(struct dlist *my_list) {
    if (my_list == NULL)
        return;
    struct dlist *temp;
    temp = my_list;

    while (temp != NULL) {
        temp = temp->next;
    }

    temp = temp->prev;
    while (temp->prev != NULL) {
        printf("%c ", temp->info);
        temp = temp->prev;
    }
}

int main() {
    char ch;
    int x; 

    while (1) {
        scanf("%d", &x); // input int
        // which action to take depending on int input
        switch (x) {
            case 1:
                scanf("%c", &ch);
                my_list = insert_front(my_list, ch);
                break;
            case 2:
                remove_ch(my_list, ch);
                break;
            case 3:
                print_list(my_list);
                break;
            case 4:
                print_reverse(my_list);
                break;
            case 5:
                free_list(my_list);
                return 0;
                // when input is w5 along with freeing memory
                // also end the program
        }
    }

    return 0;
}