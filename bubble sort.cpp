#include<stdio.h>
void bubblesort(int *a,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		int c=0,k=0;
		for(j=0;j<n-i;j++)
		{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			c++;
		}
     	}
		if(c==0)
	break;
//	for(k=0;k<n;k++)
//	{
//		printf("%d",a[k]);
//	}
//	printf("\n");
	}
	
}
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

