/*Given a struct array of type Height, having two elements feet and inches. Find the maximum height among n heights, where height is calculated sum of feet and inches 
after converting feet into inches.

Example 1:
Input:
n = 2
h1 -> 1 2
h2 -> 2 1
Output: 
25
Explanation:
(1, 2) and (2, 1) are respective given heights. After converting both heigths in to inches, we get 14 and 25 as respective heights.So, 25 is the maximum height. */


int findMax(Height arr[], int n)
{
    // Code here
    int ans[n];
    for(int i=0;i<n;i++)
    {
        ans[i]=(arr[i].feet*12)+arr[i].inches;
    }
    return *max_element(ans,ans+n);
}
