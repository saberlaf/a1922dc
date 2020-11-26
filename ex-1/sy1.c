#include "sy1.h"

List* InitList(List*list)                           //初始化链表
{
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;

}
int Isempty(List*list)                             //判断链表是否为空
{
	if(list->head == NULL&&list->tail ==NULL)
		return 1;
	else{
		return 0;}
}
Node* Get(List*list,int i)                         
{
	if(Isempty(list)&&i<=0)
		exit(1);
	int x = 1;
	Node*node;
	node = list->head;
	if(i == 1);
	return node;
	while(x<i)
	{
		x++;
		node = node->next;
	}
	return node;
}
void Insert(List*list,int i,Datatype x)            //在链表的第i的位置插入元素x
{
	if(Isempty(list)&&i>1)
		exit(1);
	if(i<1) exit(1);
	Node *node= (Node*)malloc(sizeof(Node));
	node->data = x;
	node->next = NULL;
	if(i==1)
	{node->next = list->head;
	 list->head = node;
	}
	if(i>1)
	{
		Node*prev = Get(list,i-1);
		node->next = prev->next;
		prev->next = node;
	}
}
Datatype Delete(List*list,int i)                   //删除链表的第i的元素
{
	int x;
	if(Isempty(list))
		exit(1);
	if(i==1)
		list->head = list->head->next;
	else{ 
		Node*node = Get(list,i-1);
		x = node->next->data;
		node->next = node->next->next;
		return x;}
}
void Clear(List*list)                              //清空链表
{
	Node *p = list->head;
	Node *x = list->head->next;
	while(!Isempty(list))
	{
		free(p);
		p = x->next;
		free(x);
		x = p->next;
	}
}
void Display(List*list)                            //打印
{
	Node*node;
	node = list->head;
	int num = 1;
	while(node!=NULL)
	{
		printf("%d\n",node->data);
		node = node->next;
	}
}
void addhead(List*list,Datatype x)
{
	Node*node = (Node*)malloc(sizeof(Node));
	node->data = x;
	node->next = NULL;
	if(Isempty(list))
	{list->tail = node;
		list->head = node;}
	else{
		node->next = list->head;
		list->head = node;}
}
void addtail(List*list,Datatype x)
{
	Node*node = (Node*)malloc(sizeof(Node));
	node->data =x;
	node->next = NULL;
	if(Isempty(list))
	{list->tail = node;
	 	list->head = node;}
	else{
		list->tail->next = node;
		list->tail = node;}
}
