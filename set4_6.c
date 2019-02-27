#include<stdio.h>
#include<string.h>

int main()
{
  int c,d=0,num=0;
  char a[100];
  gets(a);
  puts(a);
  for(c=0;a[c]!='\0';c++)
  {
    if(((a[c]>='a')&&(a[c]<='z'))||((a[c]>='A')&&(a[c]<='Z'))||((a[c]>='0')&&(a[c]<='9')))
    {
       num++;
    }
    else
    {
        d++;
    }
  }
  printf("the special characters including spaces are %d",d);
 }
