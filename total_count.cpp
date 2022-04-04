/*Given an array Arr of N positive integers and a number K where K is used as a threshold value to divide each element of the array into sum of different numbers. 
Find the sum of count of the numbers in which array elements are divided.

Example:

Input:
N = 4, K = 3
Arr[] = {5, 8, 10, 13}
Output: 14
Explanation: Each number can be expressed as sum  of different numbers less than or equal to K as 5 (3 + 2), 8 (3 + 3 + 2), 10 (3 + 3 + 3 + 1), 13 (3 + 3 + 3 + 3 + 1). 
So, the sum of count of each element is (2+3+4+5)=14. */


class Solution{   
public:
    int totalCount(int arr[], int n, int k) {
        // code here
       int sum = 0;
       for(int i=0;i<n;i++){
           if(arr[i]==0)
               sum += 1;
           else if(arr[i]%k==0)
               sum += arr[i]/k;
           else
               sum += arr[i]/k+1;
       }
       return sum;
    }
};
