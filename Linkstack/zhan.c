# include "zhan.h"


//初始化链表
LinkStack* InitStack(){
	LinkStack *t=(LinkStack*)malloc(sizeof(LinkStack));
	t->next = NULL;
	return t;
}

//判断栈是否为空
int Empty(LinkStack *s){
	return s->next == NULL;
}

//元素x进栈
void Push(LinkStack *s,Datatype x){
	struct node *t = (struct node*)malloc(sizeof(struct node));
	t->data = x;
	t->next = s->next;
	s->next = t;
}

//出栈
void Pop(LinkStack *s){
	if(Empty(s)) exit(1);
	struct node *p = s->next;
	s->next = p->next;
	free(p);
}

//取栈顶元素的值
Datatype GetTop(LinkStack *s){
	return s->next->data;
}

