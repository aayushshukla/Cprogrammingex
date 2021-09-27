#include<stdio.h>

void main(){
	int n,i=1,fact=1;
  	printf("enter number to calculate factorial \n");
  	scanf("%d",&n);
  	
  	while(n>1){
  		fact=fact*n;
  		n=n-1;
  		
	  }
	printf("factorial is %d",fact);
}
