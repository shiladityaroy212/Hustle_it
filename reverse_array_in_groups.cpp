/*Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.
Ex.
Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.*/


class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        // code here
        int i = 0, j = k;
        while(j<n)
        {
           reverse(arr.begin()+i,arr.begin()+j);
           i = j;
           j += k;
        }
        if(i != n-1)
        {
           reverse(arr.begin()+i,arr.end());
        }
    }
};
