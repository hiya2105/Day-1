#include <stdio.h>
int main()
{
	int f1,f2,c1,c2;
	scanf("%d",&f1);
	c1=(f1-32)*5/9;
	printf("%d",c1);
	scanf("%d",&c2);
	f2=(c2*9/5)+32;
	printf("%d",f2);
	return 0;
}