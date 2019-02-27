#include<stdio.h>

int main() 
{
  char a[100];
  int b=1,i;
  for(i=0;a[i]<=20;i++)
  {
    scanf("%c",&a[i]);
    if((a[i]==' ')&&((a[i+1]>='a')||(a[i+1]<='z')))
    b=b+1;
  }
  printf("%d",b);
}
