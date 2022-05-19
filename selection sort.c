#include<stdio.h>
int selection_sort(int *arr,int n)
{
	int i,j,maxind,temp;
	for(i=n-1;i>=0;i--)
	{
	   maxind=0;
	   for(j=0;j<=i;j++)
	   {
	   	  if(arr[j]>arr[maxind])
	   	  {
	   	  	maxind=j;
		  }
	   }
	temp=arr[i];
	arr[i]=arr[maxind];
	arr[maxind]=temp;
	}
}
int main()
{
	int n,i,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}