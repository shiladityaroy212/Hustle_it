/*Given two integers a and b. Your task is to print the even number first and odd number next in individual lines.
Note: Must print end of the line at the end.

Example:

Input: a = 2, b = 3
Output: 
2
3 */

class Solution{
    public:
    void evenOdd(int a, int b){
        // Code here
        if(a%2==0)
        {
            cout<<a<<endl;
            cout<<b<<endl;
        }
        else if(b%2==0)
        {
            cout<<b<<endl;
            cout<<a<<endl;
        }
    }
};
