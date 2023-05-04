#include<stdio.h>
void selectionsort(int *a,int n)
{
	int i,p,k,m,t;
	for(p=0;p<n-1;p++)
	{
		k=a[0];
		m=0;
		for(i=0;i<n-p;i++)
		{
			if(a[i]>k) 
     	   {
	          k=a[i];	
	          m=i;
	       }	
		}
		t=a[m];
		a[m]=a[i-1];
		a[i-1]=t;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
    }
    printf("\n");
}
}
int main()
{                           
	int n,i;                      
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selectionsort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
/*
5  1  2  7  6  3  4  8
5  1  2  4  6  3  7  8
5  1  2  4  3  6  7  8
3  1  2  4  5  6  7  8
3  1  2  4  5  6  7  8
2  1  3  4  5  6  7  8
1  2  3  4  5  6  7  8

5  1  2  7  6  3  4  8        p1
5  1  2  4  6  3  7  8        p2
5  1  2  4  3  6  7  8        p3
3  1  2  4  5  6  7  8        p4
3  1  2  4  5  6  7  8        p5 ---- no change  
2  1  3  4  5  6  7  8        p6
1  2  3  4  5  6  7  8        p7
*/

