#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int a[100];
	int i,j,temp=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n-i-1;j++)
	 {
	   if(a[j]>a[j+1])
	   {
	   	temp=a[j];
	   	 a[j]=a[j+1];
	   	 a[j+1]=temp;
	    }
	 }
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
