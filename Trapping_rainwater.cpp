/* Given an array arr[] of N non-negative integers representing the height of blocks. 
If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
*/


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int lb[n], rb[n];
        lb[0] = arr[0];
        rb[n-1] = arr[n-1];
        for(int i = 1; i < n; i++)
            lb[i] = max(lb[i-1], arr[i]);
            
        for(int i = n-2; i >= 0; i--)
            rb[i] = max(rb[i+1], arr[i]);
            
        long long sum = 0;
        for(int i = 0; i < n; i++)
            sum += min(lb[i], rb[i]) - arr[i];
            
        return sum;

    }
};
