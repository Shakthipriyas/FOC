#include<iostream>
using namespace std;
int main()
{
	int r,n1,n2,n3,i;
	n1=0;
	n2=1;
	printf("enter the range: ");
	scanf("%d",&r);
	printf("%d %d ",n1,n2);
	for(i=1;i<r;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d ",n3);
	}
	return 0;
}
