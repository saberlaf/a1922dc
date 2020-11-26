#include "sy1.h"
#include <stdio.h>
#include <stdlib.h>
#define n 11
#define m 3
int main(){
	List* list = (List*)malloc(sizeof(list));
InitList(list);
Insert(list,1,10);
Insert(list,1,20);
Delete(list,2);
Insert(list,1,30);
Insert(list,1,40);
Display(list);

int k = 0;
	Node *p,*q,*r;
	p = q = (Node*)malloc(sizeof(Node));        //创建第一个节点
	p->data = 1;
	for (int i=2;i<=n;i++){                     //建立链表
	r = (Node*)malloc(sizeof(Node));
	r->data = i;
	q->next = r;
	q = r;
	}
	q->next = p;				    //构成一个环

	q = p;
	while (q->next != q){
	k++;                                        //k为1、2、3..报数
	if (k == m){                                //报到m时，删除q所指节点
		p->next = q->next;
		free(q);
		q = p->next;
		k = 0;
	}else{
	p = q;
	q = q->next;
	}
	}
	printf("最后一个获胜者的编号是:%d\n",q->data);

return 0;
}
