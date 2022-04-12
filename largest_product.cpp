/*Given an array consisting of N positive integers, and an integer k .You have to find the maximum product of k contiguous elements in the array. Your task is to complete the function which takes three arguments .The first argument  is the array A[ ] and second argument is an integer N denoting the size of the array A[ ] and the third argument  is an integer k.The function will return and value denoting the largest product of sub-array of size k.

Input:
The first line of input is an integer T denoting the no of test cases. Then T test casesfollow . The first line of each test case are two integer N and K separated by space .The next line contains N space separated values of the array A[ ].

Output:
Output of each test case will be an integer denoting the largest product of subarray of size k. */

long long findMaxProduct(int A[], int n, int k)
{
//Your code here
long long max_pdt=1;
for(int i=0;i<n;i++)
{
    int index = i,temp=0;
    long long pdt=1;
    while(index<n && temp<k)
    {
        pdt=pdt*A[index];
        index++;
        temp++;
    }
    if(pdt>max_pdt)
    {
        max_pdt=pdt;
    }
}
return max_pdt;
}
