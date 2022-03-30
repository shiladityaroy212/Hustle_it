/*Given an array arr of N integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2, otherwise false.

Example :

Input:
N = 5
Arr[] = {3, 2, 4, 6, 5}
Output: Yes
Explanation: a=3, b=4, and c=5 forms a pythagorean triplet. */



bool checkTriplet(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            for(int k=i+1;k<n;k++)
	            {
	                int x=arr[i]*arr[i];
	                int y=arr[j]*arr[j];
	                int z=arr[k]*arr[k];
	                if(x==y+z||y==x+z||z==x+y)
	                    return true;
	            }
	        }
	    }
	    return false;
	}
