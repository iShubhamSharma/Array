import java.lang.*;
import java.util.*;

public class KthSmallestElement{

public static int kthSmallest(int arr[], int n, int k)
{
	Arrays.sort(arr);	
	return arr[k-2];
}

public static void main(String[] args)
{
	int arr[] = {10,30,7,43,90};
	int n = arr.length;
	int k = 3;
	System.out.print("\n The Third Smallest Element Is: "+kthSmallest(arr,n,k));
	kthSmallest(arr,n,k);
	
}	
}
