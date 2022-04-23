#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	scanf("%d",&a);
	c=(a-a/100*100)/10*10;
	b=a%10*100+c+a/100;
	printf("%d\n",b);
	
	return 0;
}
