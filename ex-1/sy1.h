#ifndef _Link_H
#define _Link_H

#include <stdio.h>
#include<stdlib.h>
typedef int Datatype;
typedef struct node_{
	Datatype data;
	struct node_*next;
}Node;

typedef struct List_{
	Node*head;
	Node*tail;
	Node*current;
}List;

List* InitList(List*);
int Isempty(List*);
Node* Get(List*,int);
void addhead(List*,Datatype);
void addtail(List*,Datatype);
void Insert(List*,int,Datatype);
Datatype Delete(List*,int);
void Display(List*);
void Clear(List*);
#endif
