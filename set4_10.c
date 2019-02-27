#include<stdio.h>

int main()
{
int a,f=1,s=1,t,h=0,num;
scanf("%d",&a);
for(t=2;t<=a;t++)
  {
  if(h==0)
      {
      printf("%d\t%d",f,s);
      f=1;
      h=1;
      }
      else
      {
      num=s+f;
      printf("\t%d",num);
      f=s,s=num;
      }
    }
}
