#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	int i, j, tmp;

	for(i=0;i<n;i++)
		scanf("%d", &a[i]);

	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
	//for(i=0;i<n;i++)
		//printf("%d ", a[i]);

	//printf("\n");
	int min;
	min=a[0];
	i=0;
	if(n==1)
	{
		printf("NO");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>min)
		{
			min=a[i];
			break;
		}
	}
	if(min==a[0])
	{
		printf("NO");
		return 0;
	}

	printf("%d", min);

}