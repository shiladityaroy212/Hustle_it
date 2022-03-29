/*Given a binary array A[] of size N. The task is to arrange the array in increasing order.

Note: The binary array contains only 0  and 1.

Example 1:

Input:
N = 5
A[] = {1,0,1,1,0}
Output: 0 0 1 1 1 */


vector<int> SortBinaryArray(vector<int> binArray)
    {
        // Your code goes here 
        int c=0;
        for(int i=0;i<binArray.size();i++)
        {
           if(binArray[i]==0)
           {
               c++;
               binArray[i]=1;
           }
        }
        for(int i=0;i<c;i++)
        {
           binArray[i]=0;
        }
        return binArray;
    }
