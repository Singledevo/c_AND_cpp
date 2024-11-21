/*find the number of triplets count in the array whoes 2 element sum equal to 3rd
example  A[]={1,5,3,2}
3 +2=5  ----->1
2+1 =3 -------2
TOTAL 2 triplets*/
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
