#include<stdio.h>

int main()
{
		int	count=0;
		int A[]={1,5,3,2,6};
		int index[100000]={0};
		for(int i=0;i<5;i++)
		{
				index[A[i]]=1;
		}
		for(int i=0; i<4;i++)
		{
				for(int j=i+1;j<5;j++)
				{
						if (index[A[i]+A[j]]==1)
						{
							count++;
						}
				}
		}		
		printf("count:%d",count);
		return 0;
}		
