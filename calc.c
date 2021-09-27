#include<stdio.h>
void main()
 {
 	int n1,n2,choice;
	printf("enter number 1");
	scanf("%d",&n1);
	printf("enter number 2");
	scanf("%d",&n2);
	printf("enter 1 to add \n");
	printf("enter 2 to sub \n");
	printf("enter 3 to mul \n");
	printf("enter 4 to div \n");
	scanf("%d",&choice);
	if (choice==1){
		printf("sum is %d",(n1+n2));
     }
	else if (choice==2){
		printf("sub is %d",(n1-n2));
	}
	else if (choice==3){
		printf("mul is %d",(n1*n2));
	}
	else if(choice==4){
		printf("div is %f",(n1/n2));
	}
	else 
	  {
	  	printf("invalid option selected");
	  }
	
	
 }
