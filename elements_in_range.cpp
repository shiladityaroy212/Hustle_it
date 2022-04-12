/*Given an array arr[] containing positive elements. ‘A’ and ‘B’ are two numbers defining a range. The task is to check if the array contains all elements in the given 
range.

Example :

Input: N = 7, A = 2, B = 5
arr[] =  {1, 4, 5, 2, 7, 8, 3}
Output: Yes
Explanation: It has elements between range 2-5 i.e 2,3,4,5 */

class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		 unordered_set<int> s;
         for(int i=0;i<n;i++)
         {
            if(arr[i]>=A && arr[i]<=B)
                s.insert(arr[i]);
         }
        if(s.size()==((B-A)+1))
            return true;
        return false;
	}
};
