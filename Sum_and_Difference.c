#include<stdio.h>
#include<math.h>
int main()
{
  int a,b;
  float c,d;
  scanf("%d %d %f %f",&a,&b,&c,&d);
  int sum=a+b;
  int diff=a-b;
  float fsum=a+b;
  float fdiff=a-b;
  printf("%d %d
 %0.1f  %0.1f",sum,diff,fsum,fdiff);
  
}