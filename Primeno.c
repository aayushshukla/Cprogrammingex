#include<stdio.h>

void main()
  {
  	int n,status=0,i=2;
  	printf("enter number to check prime or not");
  	scanf("%d",&n);
  	
  	while(i<n){
  		if(n%i==0){
  		    status=1;
  			break;
		  }
		
  		
  		i=i+1;
	  }
   if(status==0){
   	  printf("number is prime no");
   }
   else{
   	  printf("number is not prime");
   }
  	
  }
