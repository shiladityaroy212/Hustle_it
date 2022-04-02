/*Given a string S consisting only '0's and '1's,  find the last index of the '1' present in it.

Example:

Input:
S = 00001
Output:
4
Explanation:
Last index of  1 in given string is 4. */



class Solution{
    public:
    int lastIndex(string s) 
    {
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s.compare(i,1,"1")==0)
                return i;
        }
        return -1;
    }

};
