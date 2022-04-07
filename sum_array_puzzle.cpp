/*Given an array A of size N, construct a Sum Array S(of same size) such that S is equal to the sum of all the elements of A except A[i]. Your task is to complete the 
function SumArray(A, N) which accepts the array A and N(size of array).

Example:
Input:
5
3 6 4 8 9
Output: 27 24 26 22 21
Explanation: For the sum array S, at i=0 we have 6+4+8+9. At i=1, 3+4+8+9. At i=2, we have 3+6+8+9. At i=3, we have 3+6+4+9. At i = 4, we have 3+6+4+8. 
So S is 27 24 26 22 21. */

void SumArray(int arr[], int n)
{
    // you code here
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(j==i)
                continue;
            sum = sum+arr[j];
        }
        arr2[i] = sum;
    }
    for(int k=0;k<n;k++)
    {
        arr[k]=arr2[k];
    }
}
