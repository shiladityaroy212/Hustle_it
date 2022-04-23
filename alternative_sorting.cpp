/*Given an array arr[] of N distinct integers, output the array in such a way that the first element is first maximum and the second element is the first minimum, 
and so on.
 
Example 1:

Input: N = 7, arr[] = {7, 1, 2, 3, 4, 5, 6}
Output: 7 1 6 2 5 3 4
Explanation:The first element is first maximum and second element is first minimum and so on. */

class Solution{
	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    sort(arr, arr+N);
        vector<int> vec;
   
        int i=0 , j=N-1 ;
   
        while(i<j)
        {
          vec.push_back(arr[j]), j--;
          vec.push_back(arr[i]), i++;
        }
   
        if(N&1) // condition to check whether the number was an even number or odd and does the following work when the number is odd..basically adds the mid element
            vec.push_back(arr[j]);
    return vec;
	}

};
	
