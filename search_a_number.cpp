/*Given an array Arr of N elements and a integer K. Your task is to return the position of first occurence of K in the given array.
Note: Position of first element is considered as 1.

Example:

Input:
N = 5, K = 16
Arr[] = {9, 7, 2, 16, 4}
Output: 4
Explanation: K = 16 is found in the
given array at position 4.*/


int search(int arr[], int n, int k) {
	    // code here
	    int place=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==k)
	        {
	            place=i+1;
	            break;
	        }
	    }
	    if(place==0)
	        place=-1;
	    return place;
	}
