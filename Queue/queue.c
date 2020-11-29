#include "queue.h"

void initQueue(LinkQueue *q){                             //初始化链队列
        Node *node1= (Node*)malloc(sizeof(Node));
	Node *node2 = (Node*)malloc(sizeof(Node));
	q->before = node2;
        q->front = node1;
	q->rear = q->front;
}


int Empty(LinkQueue *q){                                  //判断队列是否为空
	return q->front == q->rear;
}

void pushback(LinkQueue *q,datatype x){                   //队尾插入元素
	Node *t = (Node*)malloc(sizeof(Node));
	t->data = x;
	t->next = NULL;
        q->before->next = q->rear;
        q->before->next = NULL;
	q->rear->next = t;
	q->rear = t;
}

void pushfront(LinkQueue *q,datatype x){                  //队头插入元素 
	Node *t = (Node*)malloc(sizeof(Node));
	t->data = x;
	t->next = NULL;
	t->next = q->front->next;
	q->front ->next = t;
	//q->front->next = t;
	//q->front = t;
	
}

void popfront(LinkQueue *q){                              //删除队头元素
	if(Empty(q)) exit(1);
	Node *p = q->front->next;
	q->front->next = p->next;
	free(p);
}
void popback(LinkQueue *q){                               //删除队尾元素
	if(Empty(q)) exit(1);
	Node *p = q->rear;
	q->rear=q->before;
        //q->rear = p;
	free(p);
}
datatype front(LinkQueue *q){                             //取队头元素的值
	return q->front->next->data;
}

datatype back(LinkQueue *q){                              //取队尾元素的值
	return q->rear->data;
}

datatype size(LinkQueue* q){                                   //求队列元素的个数
	Node *p = q->front->next;
	int k = 0;
	while (p){
	k++;
	p = p->next;
}
	return k;
}
