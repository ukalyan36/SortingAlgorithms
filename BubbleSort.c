#include<stdio.h>
void BubbleSort(int *a,int n)
{
	int i,j,temp;
	for( i=0;i<n-1;i++)
	{
	    for(j=0;j<n-i-1;j++)
	    {
	        if(a[j]>a[j+1])
	        {
	            temp=a[j];
	            a[j]= a[j+1];
	            a[j+1]=temp;
	        }
	    }
	}
}
int main()
{
	int i,n=4,a[]={4,3,2,1};
	
	printf("Before Sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	BubbleSort(a,n);
	
	printf("\nAfter Sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 1;
}

