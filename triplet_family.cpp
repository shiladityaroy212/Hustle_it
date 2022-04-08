/*Given an array A of integers. Find three numbers such that sum of two elements equals the third element and return the triplet in a container result, if no such 
triplet is found return the container as empty.

Input: First line of input contains number of testcases. For each testcases there will two lines. First line contains size of array and next line contains array 
elements.

Output: For each test case output the triplets, if any triplet found from the array, if no such triplet is found, output -1.

Your Task: Your task is to complete the function to find triplet and return container containing result.

Constraints:
1 <= T <= 100
1 <= N <= 103
0 <= Ai <= 105

Example:
Input:
3
5
1 2 3 4 5
3
3 3 3
6
8 10 16 6 15 25

Output:
1
-1
1*/


vector<int> findTriplet(int arr[], int n)
{
    vector<int> result;
    // code here
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
	    {
	        for(int j=i+1;j<n-1;j++)
	        {
	            for(int k=j+1;k<n;k++)
	            {
	                if(arr[i]+arr[j]==arr[k])
	                {
	                    result.push_back(arr[i]);
                        result.push_back(arr[j]);
                        result.push_back(arr[k]);
                        return result;
	                }
	            }
	        }
	    }
	    return result;
}
