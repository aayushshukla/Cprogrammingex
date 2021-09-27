#include<stdio.h>

void main(){
	int pin =1234,upin,amount=10000,choice;
	
	printf("enter user pin");
	scanf("%d",&upin);
	if (pin==upin){
		printf("press 1 to withdraw \n");
		printf("press 2 deposite \n");
		printf("press 3 to check balance \n ");
		printf("enter your operation \n");
		scanf("%d",&choice);
		if(choice==1){
			int wamt;
			printf("enter amount to withdraw");
			scanf("%d",&wamt);
			if(wamt<=amount){
				if(wamt%100==0){
				
				amount=amount-wamt;
				printf(" amount withdraw is %d",wamt);
				printf(" balance amount is %d",amount);
			    }else
			      {
			      	printf("Amount should be multiple of 100, 200 or 500");
				  }
			}else{
				printf("Insufficient amount ");
			}
			
		}
			elif(choice==2){
				printf("");
		}
	
	}
	else{
		printf("Invalid pin");
	}
}
