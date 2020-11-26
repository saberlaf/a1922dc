#include "paixu.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int a[N] = {1,5,6,85,4,9};
	for (i=0;i<N;i++){
	printf("%d",a[i]);
}
	printf("\n");
	buddle1(a,N);
	//buddle2(a,N);
	//buddle3(a,N);
	//InsertSort(a,N);
	//SelectSort(a,N);
	//QuickSort(a,N);
	//MergeSort2(a,N);
	printf("排序后数据:");
	for (i=0;i<N;i++) printf("%d\n",a[i]);
}
