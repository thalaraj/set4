#include<stdio.h>

int main() 
{
  char a[100];
  int b=0,i;
  for(i=0;a[i]<=20;i++)
  {
    scanf("%c",&a[i]);
    if((a[i]=='.'))
    b=b+1;
  }
  printf("%d",b);
}
