#include<stdio.h>
using namespace std;
int main()
{
	int n,i;
	printf("enter the n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);	
		}
		
	}
	return 0;
}
