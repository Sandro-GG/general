/* 
    CH-230-A
    a8_p3.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq) {
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq) {
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq) {
	return pq->items == 0;
}

int queue_item_count(const Queue *pq) {
	return pq->items;
}

int enqueue(Item item, Queue *pq) {
    // create a new node and dynamically allocate it
	Node *new;
    new = (Node *) malloc(sizeof(Node));
    if (new == NULL)
        exit(1);
    
    // initialize the item in the node
    new->item = item;
    // point the node to NULL because it's the last one in the queue
    new->next = NULL;
    
    // if true then both front and rear become the new node
    if (queue_is_empty(pq)) {
        pq->front = new;
        pq->rear = pq->front;
    }
    // otherwise the next of the last node is the new one
    // and new rear is the next of current rear
    else {
        pq->rear->next = new;
        pq->rear = pq->rear->next;
    }

    // increase the number of items
    pq->items++;

    return 0;
}

int dequeue(Item *pitem, Queue *pq) {
    // create a waiting variable to put the front node in
    Node *wait;
    wait = pq->front;
    *pitem = pq->front->item;
    
    // making the new front the next of current front
    pq->front = pq->front->next;
    
    // free memory
    free(wait);
    
    // if true make the nodes NULL
    if (queue_is_empty(pq)) {
        pq->front = NULL;
        pq->rear = NULL;
    }

    // decrease number of items
    pq->items--;
    
    return 0;
}

void printq(Queue *pq) {
    // declare a node that goes through the queue and prints it
    Node *temp;
    for (temp = pq->front; temp != NULL; temp = temp->next)
        printf("%d ", temp->item);


}

void empty_queue(Queue *pq) {
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}