/* Given an array of integers, your task is to find the smallest and second smallest element in the array. If smallest and second smallest do not exist, print -1.

Example:

Input :
5
2 4 3 5 6
Output : 2 3 
Explanation: 2 and 3 are respectively the smallest and second smallest elements in the array.*/



vector<int> minAnd2ndMin(int a[], int n) 
{
    vector<int> v{-1,-1};
    int min=INT_MAX,secMin=INT_MAX;
    for(int i=0;i<n;i++)
    {
       if(a[i]<min)
       {
           secMin=min;
           min=a[i];
       }
       else if(a[i]<secMin && a[i]!=min)
       {
           secMin=a[i];
       }
    }

/* If there is only one element in the array or all the elements are same then secMin = INT_MAX */
    if(secMin == INT_MAX)
       return v;
    v={min,secMin};
    return v;
}
