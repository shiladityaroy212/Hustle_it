/*Given a sorted array having N elements, find the indices of the first and last occurrences of an element X in the given array.

Note: If the number X is not found in the array, return '-1' as an array.

Example:

Input: N = 4 , X = 3 , arr[] = { 1, 3, 3, 4 }
Output: 1 2
Explanation: For the above array, first occurence of X = 3 is at index = 1 and last occurence is at index = 2.*/


class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
       vector<int> v;
       int first=firstOcc(arr,x,n);
       int last=lastOcc(arr,x,n);
       if(first==-1||last==-1)
           v.push_back(-1);
       else{
           v.push_back(first);
           v.push_back(last);
       }
       return v;
    }
    int firstOcc(vector<int> &arr,int x,int n){
       int low = 0,high = n-1,res = -1;
       while(low<=high){
           int mid = (low+high)/2;
           if(arr[mid]<x)
               low = mid+1;
           else if(arr[mid]>x)
               high = mid-1;
           else{
               res = mid;
               high = mid-1;
           }
       }
       return res;
   }
   int lastOcc(vector<int> &arr,int x,int n){
       int low = 0,high = n-1,res = -1;
       while(low<=high){
           int mid = (low+high)/2;
           if(arr[mid]<x)
               low = mid+1;
           else if(arr[mid]>x)
               high = mid-1;
           else{
               res = mid;
               low = mid+1;
           }
       }
       return res;
   }
};
