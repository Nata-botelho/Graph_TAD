/* Igor Guilherme Pereira Loredo - 11275071 */
/* Natã Silva Botelho            - 11275105 */

#include "Graph.h"
#include "Queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*create a new queue*/
Queue *newQueue(){
    Queue *new = (Queue*)calloc(1,sizeof(Queue));
    return new;
}

/*add a new item in the queue*/
void push(Queue *queue, int value){
    queue->Queue = (int*)realloc(queue->Queue, sizeof(int)*(queue->size+1));
    queue->Queue[queue->size] = value;
    queue->size++;
}

/*check if the queue is empty*/
int empty(Queue *queue){
    if(queue->size == 0)    return 1;
    else                return 0;
}

/*returns and remove the first item of queue*/
int pop(Queue *queue){
    int first = ERROR, i;

    if(!empty(queue)){
        first = queue->Queue[0];
        for(i=0; i<queue->size-1; i++)
            queue->Queue[i] = queue->Queue[i+1];
        queue->size--;
    }
    return first;
}