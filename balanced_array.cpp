/*Given an array of even size N, task is to find minimum value that can be added to an element so that array become balanced. An array is balanced if 
the sum of the left half of the array elements is equal to the sum of right half.

Example:

Input:
N = 4
arr[] = {1, 5, 3, 2}
Output: 1
Explanation: 
Sum of first 2 elements is 1 + 5  = 6, 
Sum of last 2 elements is 3 + 2  = 5,
To make the array balanced you can add 1. */


int minValueToBalance(int a[], int n)
    {
       //code here.
       int sum1=0,sum2=0;
       for(int i=0;i<n/2;i++)
       {
           sum1=sum1+a[i];
       }
       for(int j=n/2;j<n;j++)
       {
           sum2=sum2+a[j];
       }
       int diff=sum2-sum1;
       int nd=0;
       if(diff<0)
       {
           nd=(-1)*diff;
       }
       else
       {
           nd=diff;
       }
       return nd;
    }
