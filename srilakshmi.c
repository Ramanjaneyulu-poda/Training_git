// ********* find largest and smallest in an array ********
#include<stdio.h>
int main()
{
	int arr[10],i,small,large,n;
	printf("enter the sizeof array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	small=arr[0];
	large=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>large)
			large=arr[i];
		if(arr[i]<small)
			small=arr[i];
	}
	printf("%d is large\n %d is small\n",large,small);

}

added some thing
