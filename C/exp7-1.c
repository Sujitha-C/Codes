#include<stdio.h>
int main()
{
	int s[100],i,j,n,k,a[100],temp,flag[100],c;
    scanf("%d",&n);
    k=0;
    c=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		flag[i]=0;
	}	
	for(i=0;i<n;i++)
	{
		flag[i]=1;
		c=1;
		for(j=1;j<n;j++)
		{
			if((s[i]==s[j])&&(flag[j]==0))
			{
				c++;
				flag[j]=1;
			}
		}
		if(flag[i]==1)
		{
			printf("%d",c);
			a[k]=c;
			k++;
		}
	}
}
