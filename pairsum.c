#include<stdio.h>
void pairsum(int *a,int n)
{
	int sum,i,j;
	printf("\nEnter sum you want: ");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sum==a[i]+a[j] && i!=j)
			{	
				printf("\npair is (%d,%d)",a[i],a[j]);
			}
		}
	}
	printf("\n");
}
int main()
{
	int a[20],i,n;
	printf("Total number of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	pairsum(a,n);
}
/*OUTPUT
Total number of elements: 5
Enter array elements:2 4 5 3 1

Array is:
2	4	5	3	1	
Enter sum you want: 6

pair is (2,4)
pair is (4,2)
pair is (5,1)
pair is (1,5)
*/
