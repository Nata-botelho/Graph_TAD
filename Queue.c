/* Igor Guilherme Pereira Loredo - 11275071 */
/* Natã Silva Botelho            - 11275105 */

#include "Graph.h"
#include "Queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Queue *newQueue(){
    Queue *new = (Queue*)calloc(1,sizeof(Queue));
    new->tam =0;
    new->front  = 0;
    return new;
}

void push(Queue *queue,int val){
    queue->Queue = (int*)realloc(queue->Queue, sizeof(int)*(queue->tam+1));
    queue->Queue[queue->tam] = val;
    queue->tam += 1;
}

// retorna front, o primeiro item da fila
int pop(Queue *queue){
    int front = queue->Queue[queue->front];
    memcpy(queue, &queue[1], (queue->tam)*sizeof(int));
    queue->tam--;
    return front;
}

