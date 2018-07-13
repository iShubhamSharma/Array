#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void largestThreeNo(int arr[], int n)
{
	int i;
	int first,second,third;
	first = second = third = INT_MIN;
	
	for(i = 0;i < n;i++)
	{
	
	if(arr[i] > first)
	{
		third = second;
		second = first;	
		first = arr[i];
	}
	else if(arr[i] > second)
	{
		printf("\n The value of i is: %d",i);
		third = second;
		second = arr[i];
	}
	
	else if(arr[i] > third)
	{
		third = arr[i];
	}

	}
	printf("\n The Largest Elements Are: %d %d %d",first,second,third);
}

int main()
{
	int arr[] = {43,10,32,21,65,78};
	int n = sizeof(arr)/sizeof(arr[0]);
	largestThreeNo(arr,n);	
	return 0;
}
