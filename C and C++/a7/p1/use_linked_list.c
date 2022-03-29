#define LINK

#ifdef LINK

    #include "linked_list.h"
    #include "linked_list.c"

#endif

int main() {
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
        }
    }

    return 0;
}
