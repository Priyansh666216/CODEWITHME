
#include <stdio.h>
#include <stdlib.h>
struct complex
{
 int real;
 int img;
};
int main()
{
 struct complex*p=(struct complex*)(malloc(10*sizeof(struct complex)));
 int x;int r;int c;
 for(x=0;x<10;x++)
 {
  printf("\nElement %d",x+1);
  printf("Real part:");
  scanf("%d",&r);
  p[x].real=r;
  printf("\tImaginary part:");
  scanf("%d",&c);
  p[x].img=c;
 }
 return 0;
}