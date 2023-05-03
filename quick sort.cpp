#include<stdio.h>
void swap(int *a,int i,int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int partition(int *a,int L,int H)
{
	int p=H,i,j,temp;
    for(i=L,j=L;i<p;i++)
    {
    	if(a[i]<a[p])
    	{
    		swap(a,i,j);
    		j++;
		}
	}
    swap(a,j,p);
	return j;
}
void quicksort(int *a,int L,int H)
{
	if(L<H)
	{
		int par;
		par=partition(a,L,H);
		quicksort(a,L,par-1);
		quicksort(a,par+1,H);
	}
}
int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

