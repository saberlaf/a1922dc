#include "zhan.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	LinkStack *s = InitStack();
	Push(s,80);
	Push(s,90);
	Pop(s);
	Push(s,70);
	printf("%d\n",GetTop(s));
}
