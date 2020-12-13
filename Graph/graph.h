#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define maxSize 100

typedef char VertexType;

typedef struct edge_{
	int dest;
	struct edge_*next;
}edge;

typedef struct{
	VertexType data;
	edge *adj;
}vertex;

typedef struct {
	vertex vexs[maxSize];
	int n,e;
}Graph;

void Init();
VertexType GetValue();
void create();
void Print();
void showMatrix();

