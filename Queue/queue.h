#ifndef _queue_H
#define _queue_H
#include <stdio.h>
#include <stdlib.h>

typedef int datatype;
typedef struct node_{
	datatype data;
	struct node_ *next;
}Node;

typedef struct{
	Node *front,*rear,*before;
}LinkQueue;

void initQueue();
int Empty(LinkQueue *q);
void pushback(LinkQueue *q,datatype x);
void pushfront(LinkQueue *q,datatype x);
void popfront(LinkQueue *q);
void popback(LinkQueue *q);
datatype front(LinkQueue *q);
datatype back(LinkQueue *q);
datatype size(LinkQueue* q);
#endif
