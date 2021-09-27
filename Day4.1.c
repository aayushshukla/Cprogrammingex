#include<stdio.h>

void main(){
	int n1,n2;
	printf("enter number 1");
	scanf("%d",&n1);
	printf("enter number 2");
	scanf("%d",&n2);
	if(n1==n2){
		printf("Number are equal");
	}
	if(n1>n2){
		printf("Number1  %d is greater than number 2 %d",n1,n2);
	}
	else{
		printf("Number 2 %d is greater than number 1 %d",n2,n1);
	}
}
