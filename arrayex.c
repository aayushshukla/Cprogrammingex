#include<stdio.h>

void main(){
	int runs[5],matches[5],avg[5];
	int m , r,i;
	for(i=0;i<5;i++){
		printf("enter runs");
		scanf("%d",&r);
		runs[i]=r;
	}
	for(i=0;i<5;i++){
		printf("enter matches");
		scanf("%d",&m);
		matches[i]=m;
	}
	for(i=0;i<5;i++){
		
		avg[i]=runs[i]/matches[i];
	}
	printf("enter avg is ");

	
}
