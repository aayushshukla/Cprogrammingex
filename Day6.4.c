#include<stdio.h>

void  main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	if(n%2==0 || n%5==0){
		printf("number is divisble by 2 or 5");
	}else{
		printf("number is not divisible");
	}
}
