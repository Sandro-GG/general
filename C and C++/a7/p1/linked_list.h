/* 
    CH-230-A
    a7_p1
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

/* 
    if some macro is defined, then do all that's here.
    in this file macro is not defined. I did this to avoid
    multiple function definitions / declarations after 
    including this in another file.
*/

#ifdef LINK
    
    // declare struct list
    struct list {
        int info;
        struct list *next;
    };
    // declare my linked list which is to be built
    struct list *my_list = NULL;
    char c;
    int val; // value to be inserted

    struct list *insert_front(struct list *my_list, int value);
    struct list *insert_back(struct list *my_list, int value);
    struct list *remove_first(struct list *my_list);
    void print_list(struct list *my_list);
    void free_list(struct list *my_list);

#endif