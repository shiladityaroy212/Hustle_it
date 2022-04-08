/*There are times when your answer is a floating point that contains undesired amount of digits after decimal. Here, we'll learn how to get a precise answer out of a 
floating number. You are given two floating numbers a and b. You need to output a/b and decimal precision of a/b upto 3 places after the decimal point.

Note: Check out this link https://stackoverflow.com/questions/22515592/how-to-use-setprecision-in-c

Example:

Input: a = 5.43 , b = 2.653
Output: 2.04674 2.047
Explanation: Value of a/b is printed with and without decimal precision. */

// ABOUT SET PRECISION AND FIXED--------------> setprecision(n) -> it is used to create a certain target for the number of digits right after the decimal point......
// fixed -> used to fix that particular precision so that the number would give that output


void precise(float a, float b)
{
    //perform a/b
    float r = a/b;
    
    cout<<r;
    cout<<" "<<setprecision(3)<<fixed<<r;
    cout<<endl;
}
