#include<stdio.h>

void main()
  {
  	char idtype[8];
  	char idno[16];
  	printf("enter PAN for pan cards \n");
  	printf("enter ADHAAR for adhaar card \n");
  	scanf("%s",&idtype);
  	if(strcmp(idtype,"")=="PAN"|| idtype=="ADHAAR")
  	  { 
  	     printf("enter id  no \n");
  	     scanf("%s",idno);
  	     printf("%s no is %s",idtype,idno);
  	  	  
		}
		else{
			printf("invalid id proof");
		}
  }
