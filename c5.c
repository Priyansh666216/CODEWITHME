
	#include<stdio.h>
	#include<math.h>
struct cord 
{
  int x,y,l,m; 
};
int main()
{
    int x,y,l,m; 
    struct cord p1,p2 ;
    scanf("%d",&p1.x);
    scanf("%d",&p1.y);
    scanf("%d",&p2.x);
    scanf("%d",&p2.y);
    p1.l=p2.x-p1.x;
     p1.m=p2.y-p1.y;
    int dis = sqrt(abs(p1.l,2)+ abs(p1.m,2)) ;
    printf("%d",dis);
}