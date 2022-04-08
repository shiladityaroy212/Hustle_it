/*Given an array of N integers. Find the first element that occurs K number of times. 

Example:

Input :
N = 7, K = 2
A[] = {1, 7, 4, 3, 4, 8, 7}
Output : 4
Explanation: Both 7 and 4 occur 2 times. But 4 is first that occurs 2 times.*/

class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int> x;
        for(int i=0;i<n;i++)
        {
           x[a[i]]++;
           if(x[a[i]]==k)
           return a[i];
        }
        return -1;
    }
};
