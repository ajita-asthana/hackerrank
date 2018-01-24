#include<stdio.h>
void main()
{
	int n,d,t,sum=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		d=n%10;
		sum=sum+(d*d*d);
		n=n/10;
	}
	if(t==sum)
		printf("Armstrong Number ");
	else
		printf("Not Armstrong Number");
}