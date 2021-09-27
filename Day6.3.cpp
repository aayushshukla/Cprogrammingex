#include<stdio.h>

void main()
  {
  	char idtype[8];
  	char idno[16];
  	printf("enter PAN for pan cards");
  	printf("enter ADHAAR for adhaar card");
  	scanf("%s",&idtype);
  	if(idtype=="PAN"|| idtype=="ADHAAR")
  	  { 
  	     printf("enter id  no");
  	     scanf("%s",idno);
  	     printf("%s no is %s",idtype,idno);
  	  	  
		}
		else{
			printf("invalid id proof");
		}
  }
