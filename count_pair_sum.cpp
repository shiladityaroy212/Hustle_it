/*Given two sorted arrays(arr1[] and arr2[]) of size M and N of distinct elements. Given a value Sum. The problem is to count all pairs from both arrays whose sum 
is equal to Sum.
Note: The pair has an element from each array.

Example:
Input: M=4, N=4 , Sum = 10
arr1[] = {1, 3, 5, 7}
arr2[] = {2, 3, 5, 8} 
Output: 2
Explanation: The pairs are: (5, 5) and (7, 3).  */

//naive soltuion .......WILL TAKE MORE TIME..HIGH TIME COMPLEXITY
int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
        //code here.
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr1[i]+arr2[j]==x)
                count++;
                else
                continue;
            }
        }
        return count;
    } 

// OPTIMIZED SOLUTION
int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
        unordered_set<int> s1;
        unordered_set<int> s2;
        for(int i=0; i<m; i++){
            s1.insert(arr1[i]);
        }
        for(int i=0; i<n; i++){
            s2.insert(arr2[i]);
        }
        int c = 0;
        for(int it:s1){
            if(s2.count(x-it)){
                c++;
            }
        }
        return c;   
    } 
