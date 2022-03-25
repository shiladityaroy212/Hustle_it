/*You are given an integer N. You need to convert all zeroes of N to 5.

Example 1:

Input:
N = 1004
Output: 1554
Explanation: There are two zeroes in 1004
on replacing all zeroes with "5", the new
number will be "1554".*/




int convertFive(int n) {
    // Your code here
    int newnum=0;
    int original=n;
    int mul=1;
    while(n!=0)
    {
        int m=n%10;
        if(m==0)
        {
            newnum=newnum+5*mul;
        }
        mul=mul*10;
        n=n/10;
    }
    return newnum+original;
}
