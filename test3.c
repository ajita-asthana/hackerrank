#include<stdio.h>
void main()
{
	int n,d,t,s=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		d=n%10;
		s=s+(d*d*d);
		n=n/10;
	}
	if(t==s)
		printf("Armstrong Number ");
	else
		printf("Not Armstrong Number");
}