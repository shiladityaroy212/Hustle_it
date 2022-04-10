/*Given an array Arr of size N with all elements greater than or equal to zero. Return the maximum product of two numbers possible.

Example:
Input: N = 6 ; Arr[] = {1, 4, 3, 6, 7, 0}  
Output: 42 */

class Solution{
public:

	int maxProduct(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    return arr[n-1]*arr[n-2];
	}
};
