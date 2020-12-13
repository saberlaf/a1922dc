#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxSize 100

typedef char dataType;
typedef struct TreeNode_{
	dataType data;
	struct TreeNode_ *left,*right;
}TreeNode;

void CreateTree(TreeNode *t,dataType x);
void PreOrder(TreeNode *t);
void InOrder(TreeNode *t);
void PostOrder(TreeNode *t);
void LevelOrder(TreeNode *t);
