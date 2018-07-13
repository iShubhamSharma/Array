#include<stdio.h>
#include<stdlib.h>

void array(int arr[], int n);
 
void rightRotate(int arr[], int d, int n)
{
  int i;
  for (i = 0; i < d; i++)
{
	//printf("%d d= %d",arr[i],d);
    array(arr, n);
}
}
 
void array(int arr[], int n)
{
  int temp = arr[n-1], i;
  // To Check The Dry Run: uncomment the below printf 
  // printf("\n The Value of Temp is %d :  ",temp);
  for (i = n-1; i > 0; i--)
	{
     		arr[i] = arr[i-1];
	}
	// printf("\n i = %d",i);  	
	arr[i] = temp;
	

}
 

void printArray(int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
}
 

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7};
   int n = sizeof(arr)/sizeof(arr[0]);  
   printf("\n Before Rotation Array is: ");
   printArray(arr,n);	
	
   rightRotate(arr, 2, n);
// By Initilizing d = 2, we rotate the Array Clockwise by 2 Positions
   printf("\n After Rotation Array is : ");	
   printArray(arr, n);
   return 0;
}
 
