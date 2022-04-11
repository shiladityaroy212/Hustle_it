/*Given an array Arr[], write a program that segregates even and odd numbers. The program should put all even numbers first in sorted order, and then odd numbers in 
sorted order.

Example:
Input:  N = 7
Arr[] = {12, 34, 45, 9, 8, 90, 3}
Output: 8 12 34 90 3 9 45
Explanation: Even numbers are 12, 34, 8 and 90. Rest are odd numbers. After sorting even numbers 8 12 34 90 and after sorting odd numbers 3 9 45. Then concat both. */

class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    vector<int>brr;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++)      //PARSING THE ARRAY FOR THE EVEN NUMBERS
	    {
            if(arr[i]%2==0)
            brr.push_back(arr[i]);
        }
        for(int i=0;i<n;i++)     //PARSING THE ARRAY FOR THE ODD NUMBERS
        {
            if(arr[i]%2!=0)
            brr.push_back(arr[i]);
        }
        for(int i=0;i<n;i++)     //CONCATENATING THE ARAY ELEMENTS AT A SINGLE PLACE
            arr[i]=brr[i];
	    
	}
};
