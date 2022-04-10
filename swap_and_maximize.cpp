/*Given an array a[ ] of N elements. Consider array as a circular array i.e. element after an is a1. The task is to find maximum sum of the absolute difference between 
consecutive elements with rearrangement of array elements allowed i.e. after any rearrangement of array elements find |a1 – a2| + |a2 – a3| + …… + |an-1 – an| + |an – a1|.

Example:
Input:
N = 4
a[] = {4, 2, 1, 8}
Output: 
18
Explanation: Rearrangement done is {1, 8, 2, 4}. Sum of absolute difference between consecutive elements after rearrangement = |1 - 8| + |8 - 2| + |2 - 4| + |4 - 1| = 
7 + 6 + 2 + 3 = 18.*/

// PROTIP ---> SORT THE ELEMENTS AND THEN FIND OUT THE DIFFERENCE OF THE TERMS FROM BACK TO THE FRONT ONES...I.E;FROM THE LAST NUMBERS 
//TO THE FIRST NUMBERS AS HERE THEY HAVE SAID TO FIND OUT THE DIFFERENCE AT ANY ARRANGEMENT

long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    int sum=0;
    int j=n-1;
    int i=0;
    while(i<n)
    {
        sum=sum+abs(arr[i]-arr[j]);
        j--;
        i++;
    }
    return sum;
}
