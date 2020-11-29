#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	LinkQueue queue,*q = &queue;
	initQueue(q);
	pushback(q,70);
	pushfront(q,90);
	popback(q);
	pushback(q,100);
	printf("队列的元素的个数为: %d\n",size(q));
	printf("队头元素为: %d\n",front(q));
	printf("队尾元素为: %d\n",back(q));
}
