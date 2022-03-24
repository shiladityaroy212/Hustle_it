/*Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in 
the given array.
Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5. */   



//Code here for the function 
vector<int> find(int arr[], int n, int x)
   {
   list<int>l;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==x)
       {
           l.push_back(i);
       }
   }
   if(l.empty()==true)
   {
        v.push_back(-1);
        v.push_back(-1);
   }
   else
   {
        v.push_back(l.front());
        v.push_back(l.back());
       
   }
   return v;
   }
