#include<stdio.h>
void InsertionSort(int *a,int n)
{
  int i,hole,value;
  for(i=1; i<n;i++)
  { 
     hole=i;
     value=a[i];
    while(hole>0 && a[hole-1]>value)
     {
	        a[hole]=a[hole-1];
	        hole= hole-1;
	  }
	    a[hole]= value;
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
	InsertionSort(a,n);
	
	printf("After Sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 1;
}

