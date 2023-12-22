#include<stdio.h>


int main(){
       
	   int tempcity1[] = {25,34,23,33,23,15,34}
	   int tempcity2[] = {23,32,26,27,34,26,24}
       int *temp[] = {tempcity1,tempcity2};      
      int i =0; int j =0;
	  for(i=0;i<7;i++)
	  {
		  printf("\n");
		  for(j=0;j<7;j++)
			  
printf("%d\t",temp[j][i]);	
	  }
      	  
	   return 0;  
}	  