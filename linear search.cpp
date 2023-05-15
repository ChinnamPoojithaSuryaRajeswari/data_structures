#include<stdio.h>
int linear_search(int *a,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
		{
			return i;
			break;
		}
	}
	return -1;
}
int main()
{
	int n,se,i,k;
	scanf("%d",&n);
	scanf("%d",&se);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k=linear_search(a,n,se);
	printf("%d",k);
}
