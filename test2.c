#include<stdio.h>
void main()
{
	int n,d,x,res=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		d=n%10;
		res=res*10+d;
		n /= 10;
	}
	if(x==n)
		printf("Palindrome\n");
	else
		printf("Not Palindrome\n");

}