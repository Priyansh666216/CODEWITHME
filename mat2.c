#include<stdio.h>
int main(){
         
		 int A[3][3]={
		              {1,2,3},
		              {4,5,6},
                      {7,8,9},
					 };
		int B[3][2]={
                     {1,4},
					 {2,5},
					 {3,6},
						};
						
		int C[3][2];
			
       	     for(i=0,i<3,i++){
			      for(j=0,j<2,j++){
				   C[i][j]=0;
				   
				   for(k=0,k<3,k++){
				      C[i][j] += A[i][j]*B[i][j];
					}
				}
			}
//Resultant matrix
printf("Resultant matrix C:\n");
       for(i=0,i<3,i++){
		 for(j=0,j<2,j++){
printf("%d",c[i][j]);
		 }
printf("\n");

	   }
return 0;
}	   
			 