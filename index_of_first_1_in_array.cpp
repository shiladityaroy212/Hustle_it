/*Given a sorted array consisting 0’s and 1’s. The task is to find the index of first ‘1’ in the given array.

Example:

Input : arr[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1}
Output : 6
Explanation: The index of first 1 in the array is 6. */


class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        // Your code goes here
        int s=0;
        int e=n-1;
        int res=-1;
      
        while(s<=e)
        {
          int mid=s+(e-s)/2;
          if(a[mid]==1)
          {
              res=mid;
              e=mid-1;
          }else if(a[mid]<1)
          {
              s=mid+1;
          }else
          {
              e=mid-1;
          }
        }return res;
    }
};
