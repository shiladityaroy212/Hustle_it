/*Input Format:
First line of input contains T,  number of testcases. For each testcase, there will be three lines of input. First line contains string, second line contains integer,
and third line again contains string.

Output Format:For each testcase, print the variables in same order as taken in input.

User Task: Your task is to complete the function getLineAndIgnore() to take input of strings and learn how and when to use cin.ignore().

Example:
Input:
1
hello world
5
hello

Output:
hello world
5
hello */

void getLineAndIgnore(){
    
    string a, d;
    int b;
   
    // Your code here.....HERE WE NEED TO USE THE getline(),cin.ignore()...FUNCTIONS SO THAT WE CAN FIND WHY THEY ARE USED MUCH
    getline(cin,a);
    cin>>b;
    cin.ignore();
    getline(cin,d);
    
   
    cout << a << endl;
    
    cout << b << endl;
        
    cout << d << endl;
}
