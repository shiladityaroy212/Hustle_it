/*Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array. */



pair<long long, long long> getMinMax(long long a[], int n) 
{
    sort(a,a+n);
    return {a[0],a[n-1]};
}
