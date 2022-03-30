/*Given an array arr of N integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2, otherwise false.

Example 1:

Input:
N = 5
Arr[] = {3, 2, 4, 6, 5}
Output: Yes
Explanation: a=3, b=4, and c=5 forms a
pythagorean triplet.*/

class Solution
{
public:
long long find_multiplication(int a[], int b[], int n, int m)
    {
        // Complete the function
        int max =*max_element(a,a+n);
        int min =*min_element(b,b+m);
        return max*min;
    }
};
