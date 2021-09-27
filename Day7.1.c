#include<stdio.h>

void main(){
	int n1,n2;
	printf("enter number 1 \n");
	scanf("%d",&n1);
	printf("enter number 2 \n");
	scanf("%d",&n2);
	
	printf("enter 1 to add \n");
	printf("enter 2 to sub \n");
	printf("enter 3 to mul \n");
	printf("enter 4 to div \n");
	int ch;
	scanf("%d",&ch);
	// switch case choice can character or int
	switch(ch){
		case 1:
			printf("sum is %d",(n1+n2));
			break;
		case 2:
			printf("sub is %d",(n1-n2));
			break;
		case 3:
			printf("mul is %d",(n1*n2));
			break;
		case 4:
			printf("div is %d",(n1/n2));
			break;
		default:
			printf("not a valid option selected");
			
	}
	
	
}
