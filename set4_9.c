#include<stdio.h>

int main()
{
  int a[10],i,max;
  scanf("%d",&a[0]);
  max=a[0];
  for(i=1;i<10;i++)
  {
    scanf("%d",&a[i]);
    if(max<a[i])
    max=a[i];
  }
  printf("%d",max);
}
