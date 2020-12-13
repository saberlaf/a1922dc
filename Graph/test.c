#include "graph.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	Graph g,*pg=&g;
	create(pg);
	showMatrix(pg);
	system("pause");
}
