#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	int b=0,i,h;
	scanf("%s",&a);
	h=strlen(a);
	for(i=0;i<=h;i++)
	{
    if((a[i]>='0')&&(a[i]<='9'))
      b++;
	}
	printf("%d",b);
}
