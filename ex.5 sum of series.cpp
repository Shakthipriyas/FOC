#include<stdio.h>
using namespace std;
int main()
{
	int n,sum=0;
	printf("enter the n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("%d " ,sum);
	return 0;
}
