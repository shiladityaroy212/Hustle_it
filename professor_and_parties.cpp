/*A professor went to a party. Being an erudite person, he classified the party into two categories. He proposed that if all the persons in the party are wearing 
different colored robes, then that is a girl’s only party. If we even get one duplicate color, it must be a boy’s party. The colors of the robes are represented by 
positive integers.
 
Example 1:
Input
N = 5
A[] = {1, 2, 3, 4, 7}
Output
GIRLS
Explanation: All the colors are unique so it's a GIRLS party. */

class Solution{
    public:
    
    string PartyType(long long int a[], int n)
    {
        // Your code goes here
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
                return "BOYS";
        }
        return "GIRLS";
    }
};
