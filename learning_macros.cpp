/*Macro is one of the most important part of CPP preprocessors. It allows us to define variables and functions and it basically works by substituting the value or 
function during the preprocessing stage of code conversion(High level to Low level). So, let's dive into preprocessors!

You are given two inputs: a(integer),and b(integer). You need to print a * b .
Input Format: First line of input conatins number of testcases T. For each testcase, there will be one line of input containing a and b.

Output Format: For each testcase, print a*b. */


// MACROS, IN THIS CASE IS THE "MULTI(a,b)" FUNCTION PRESENT...WJEN IT IS CALLED IN ANY FUNCTION INSIDE IT'S SCOPE IT DOES THE MULTIPLICATION OPERATION

#include<bits/stdc++.h>
#define MULTI(a,b) (a*b)
using namespace std;

void macros(int a,int b)
{
    //See the macro defined at the top of the code. Use that macro to find a*b
    //Use only macro to complete this task
    int multi = MULTI(a,b);
    cout<<multi<<endl;
}
