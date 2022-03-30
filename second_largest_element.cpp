/*Given an array of elements. Your task is to find the second maximum element in the array.

Example:

Input:
N=5
arr[] = { 2, 4, 5, 6, 7 }
Output:  6
Explanation:
The largest element is 7 and 
the second largest element is 6.*/



int print2largest(int arr[], int arr_size)
    {
    	//code here.
    	int i,n;
    	sort(arr,arr+arr_size);
    	for(i=0;i<arr_size;i++)
        {
           if(arr[arr_size-1-i]!=arr[arr_size-2-i])
           break;
        }
        if(arr[0]!=arr[arr_size-1])
        {
           return arr[arr_size-2-i];
        }
        else
        return -1;
    }
