/*Given an array arr of n integers, task is to print the array in the order – smallest number, largest number, 2nd smallest number, 2nd largest number, 
3rd smallest number, 3rd largest number and so on.

Example 1:
Input:
n = 9
arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5}
Output:
1 9 2 8 3 7 4 6 5
Explanation: Smallest number is 1. Largest number is 9. 2nd smallest number is 2. Then 2nd largest number is 8. And so on. */


class Solution{
  public:
    void rearrangeArray(int arr[], int n) {
        // code here
        vector <int> v;
       sort(arr, arr+n);
      
       for(int i=0; i<=n/2; i++){
         v.push_back(arr[i]);
         v.push_back(arr[n-1-i]);
       }
       for(int i=0; i<n; i++){
          arr[i]=v[i];
       }
    }
};
