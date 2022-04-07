/*Given an array of N positive integers where all numbers occur even number of times except one number which occurs odd number of times. Find the exceptional number.

Example:

Input:
N = 7
Arr[] = {1, 2, 3, 2, 3, 1, 3}
Output: 3 */

//PRO TIP : ALWAYS USE THE XOR FUNCTION FOR THIS TYPE OF PROBLEMS.

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        int res=0;
        for(int i=0;i<n;i++)
        {
            res = res ^ arr[i];
        }
        return res;
    }
};
