/*Given an array A[] of N elements. The task is to count number of even and odd elements in the array.

Example:

Input:
N = 5
A[] = 1 2 3 4 5
Output:
3 2
Explanation:
There are 3 odd elements (1, 3, 5)
and 2 even elements (2 and 4).*/

class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    void countOddEven(int arr[], int sizeof_array)
    {
        
        // your code here
        int count1=0,count2=0;
        for(int i=0;i<sizeof_array;i++)
        {
            if(arr[i]%2==0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        cout<<count2<<" "<<count1<<endl;
    }
};
