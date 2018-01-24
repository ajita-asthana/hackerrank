#include<stdio.h>
void main()
{
	int n;
	while(n--)
	{
		int N;
		scanf("%d",&N);

		for(int i=1;i<=N;i++)
		{
			if(i%3==0 && i%5==0)
				printf("FizzBuzzn\n");
			else if(i%3==0)
				printf("Fizzn\n");
			else if(i%5==0)
				printf("Buzz\n");
			else
				printf("%d\n",i);
		}
	}
}