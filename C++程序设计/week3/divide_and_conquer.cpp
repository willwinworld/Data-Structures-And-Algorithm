//#include <bits/stdc++.h>
//using namespace std;
//
//// INT_MIN INT_MIN is a macro that expands to the smallest (most negative) value that can be stored in a variable of type int.
//// INT_MAX INT_MAX is a macro that expands to the largest (most positive) value that can be stored in an int.
//int maxsubarray(int arr[], int low, int high){
//	if (low == high){
//		return arr[low];
//	}
//	else{
//		int mid = (low + high) / 2;
//		
//		int leftMax = INT_MIN;
//		int sum = 0;
//		for(int i=low; i<=mid; i++){
//			sum += arr[i];
//			if (sum > leftMax){
//				leftMax = sum;
//			}
//		}
//		
//		int rightMax = INT_MIN;
//		sum = 0; // reset sum to zero
//		for(int i=mid+1; i<=high; i++){
//			sum += arr[i];
//			if (sum > rightMax){
//				rightMax = sum;
//			}	
//		}
//		
//		int maxLeftRight = max(maxsubarray(arr, low, mid), maxsubarray(arr, mid+1, high));
//		return max(maxLeftRight, leftMax+rightMax);
//	}
//}
//
//int main(){
//	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
//	int n = sizeof(arr) / sizeof(arr[0]);
//	
//	cout << "The Maximum sum of the subarray is " << maxsubarray(arr, 0, n -1);
//	
//	return 0;
//}


#include <bits/stdc++.h>
using namespace std;
 
// Function to find Maximum subarray sum using 
// divide and conquer
int MaximumSum(int A[], int low, int high)
{
	// If array contains only one element
	if (high == low)
		return A[low];
 
	// Find middle element of the array
	int mid = (low + high) / 2;
 
	// Find maximum subarray sum for the left subarray 
	// including the middle element
	int leftMax = INT_MIN;
	int sum = 0;
	for (int i = mid; i >= low; i--) 
	{
		sum += A[i];
		if (sum > leftMax)
			leftMax = sum;
	}
	/*
	为什么不是:这种写法结果是错的 
	for (int i = low; i <= mid; i++)
	{
		sum += A[i];
		if (sum > leftMax)
			leftMax = sum;
	}
	*/

	// Find maximum subarray sum for the right subarray 
	// excluding the middle element
	int rightMax = INT_MIN;
	sum = 0;	// reset sum to 0
	for (int i = mid + 1; i <= high; i++) 
	{
		sum += A[i];
		if (sum > rightMax)
			rightMax = sum;
	}
 
	// Recursively find the maximum subarray sum for left subarray 
	// and right subarray and tale maximum
	int maxLeftRight = max(MaximumSum(A, low, mid), 
			MaximumSum(A, mid + 1, high));
 
	// return maximum of the three
	return max(maxLeftRight, leftMax + rightMax);
}
 
int main()
{
	int arr[] = { -2,1,-3,4,-1,2,1,-5,4 };
	int n = sizeof(arr) / sizeof(arr[0]);
 
	cout << "The Maximum sum of the subarray is " << 
			MaximumSum(arr, 0, n - 1);
 
	return 0;
}
