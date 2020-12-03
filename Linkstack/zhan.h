#ifndef _zhan_h
#define _zhan_h
#include <stdio.h>
#include <stdlib.h>

typedef int Datatype;
typedef struct node{
	Datatype data;
	struct node*next;
}LinkStack;

LinkStack* InitStack();
int Empty(LinkStack *s);
void Push(LinkStack *s,Datatype x);
void Pop(LinkStack *s);
Datatype GetTop(LinkStack *s);


#endif
