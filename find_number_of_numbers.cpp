/*Given an array A[]  of n elements. Your task is to complete the Function num which returns an integer denoting the total number of times digit k appears in the whole 
array.

For Example:
Input:
A[]={11,12,13,14,15}, k=1
Output:6

Explanation: Here digit 1 appers the whole array 6 times. */

int num(int a[], int n, int k)
{
     //add code here.
   int r, count = 0;
   for(int i = 0; i < n; i++)
   {
       int q = a[i];
       while(q!=0)
       {
           r = q%10;
           if(r==k){
               count++;
           }
           q = q/10;
       }
   }
   return count;
}
