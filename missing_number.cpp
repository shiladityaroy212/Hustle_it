/*Vaibhav likes to play with numbers and he has N numbers. One day he was placing the numbers on the playing board just to count that how many numbers he have. He was 
placing the numbers in increasing order i.e. from 1 to N. But when he was putting the numbers back into his bag, some numbers fell down onto the floor. He picked up all 
the numbers but one number, he couldn't find. Now he have to go somewhere urgently, so he asks you to find the missing number.

NOTE: Don't use Sorting

Example:
Input: N = 4 , A[] = {1, 4, 3}
Output: 2     
Explanation: Vaibhav placed 4 integers but he picked up only 3 numbers. So missing number will be 2 as it will become 1,2,3,4. */


//PROTIP -----> USE THE FORMULA OF ARITHMETIC PROGRESSION (A.P SERIES) FOR THIS AS IT WILL GIVE THE SUM OF N NATURAL NUMBERS AND SUBTRACTING THE NUMBERS IN THE ARRAY 
//              WILL GIVE US THE MISSING NUMBER AT THE END


int missingNumber(int A[], int N)
{
    // Your code goes here
    int sum=(N*(N+1))/2;
    for(int i=0;i<N-1;i++)
    {
        sum=sum-A[i];
    }
    return sum;
}
