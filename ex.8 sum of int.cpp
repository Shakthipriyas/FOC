#include<stdio.h>
using namespace std;
int main()
{
	int n,sum=0;
	printf("enter the n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum-=i;
		}
		else{
			sum+=i;
		}
	}
	printf("The sum of series is: %d",sum);
	return 0;
}
