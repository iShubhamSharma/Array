// Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i
import java.util.*;
import java.lang.*;
public class RearrangeArray{

public static void reArrange(int arr[], int n)
{
	int evenPosition = n/2;
	int oddPosition = n - evenPosition;
	int i;
 	// Initialize a Temporary Array and store Array Elements in it

	int[] tempArr = new int[n];
	for(i = 0; i < n;i++)
	tempArr[i] = arr[i];

	Arrays.sort(tempArr);

	int j = oddPosition - 1;
	// Now fill Even Positions of Original Array
	for(i = 0; i < n;i=i+2)
	{
	arr[i] = tempArr[j];
	j--;	
	}
	
	j = oddPosition;	
	// Now Fill odd Position of Original Array
	for(i = 1;i < n;i = i+2)
	{
	arr[i] = tempArr[j];
	j++;	
	}	
	
	
}
public static void printArray(int arr[],int n)
{
	int i;
	for(i=0;i < n;i++)
	System.out.print("["+arr[i]+"]");
}
public static void main(String[] args)
{
	int arr[] = {1,2,3,4,5,6,7};
	int n = arr.length;
	
	System.out.print("Array Elements Before Rearrangement: ");
	printArray(arr,n);	
	reArrange(arr,n);
	
	System.out.print("\nArray Elements After Rearrangement: ");
	printArray(arr,n);
}
}
