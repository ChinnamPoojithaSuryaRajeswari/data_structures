#
include<stdio.h>
void merge(int *a,int l,int h,int m)
{
	int res[h-l+1],i=l,j=m+1,k=0;
	while(i<=m && j<=h)
	{
		if(a[i]>a[j])
		{
			res[k++]=a[j++];
		}
		else
		{
			res[k++]=a[i++];
		}
	}
	while(i<=m)
	{
		res[k++]=a[i++];
	}
	while(j<=h)
	{
		res[k++]=a[j++];
	}
	k=0;
	for(i=l;i<=h;i++)
	{
		a[i]=res[k++];
	}
}
void merge_sort(int *a,int l,int h)
{
	if(l<h)
	{
		int m;
		m=(l+h)/2;
		merge_sort(a,l,m);
		merge_sort(a,m+1,h);
		merge(a,l,h,m);
	}
}
int main()
{
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1); 
	 for (i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
    }
	return 0;	
}

