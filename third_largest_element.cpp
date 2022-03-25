/*Given an array of distinct elements. Find the third largest element in it.

Suppose you have A[] = {1, 2, 3, 4, 5, 6, 7}, its output will be 5 because it is the 3 largest element in the array A.
 */



class solution{
  public:
  int thirdlargest(int a[], int n)
  {
      if(n==1 || n==2){
           return -1;
       }
        sort(a,a+n);
        return a[n-3];
  }
};
