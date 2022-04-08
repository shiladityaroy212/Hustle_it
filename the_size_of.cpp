/*You will be given four different variables of different data types: a (int), b (float), c (double), l (long long), d (string). Your task is to do step-wise 
operations as given below:
1. Divide b by c.
2. Divide b by a.
3. Divide c by a.
4. Add result at step 3 with l.
5. Print the sizeof(result) of each step in a single line. The outputs should be separated by spaces.
6. Print the sizeof(d) and sizeof(d[3]) separated by a space.

Example:
Input:
a = 1 
b = 2
c = 3
l = 5
d = gfgc
Output:
4 8 4 8
32 1
Explanation:
b/c = 2/3 =>sizeof(2/3)=>float size is 4 bytes.
b/a = 2/1 =>sizeof(2/1)=>double size is 8 bytes.
c/a = 3/1 =>sizeof(3/1)=>integer size is 4 bytes.
(c/a)+l =3+5= 8 =>sizeof(8)=>long long size is 
8 bytes.
sizeof(gfgc) = 32 => It is not 4 because of 
the reason listed here.
sizeof(c) = 1 as it is just a character.*/


void dataTypes(int a, float b, double c, long long l, string d){
    float p = b/c;
    double q = b/a;
    int r = c/a;
    l = l+r;
    cout<<sizeof(p)<<" "<<sizeof(q)<<" "<<sizeof(r)<<" "<<sizeof(l)<<endl;
    cout<<sizeof(d)<<" "<<sizeof(d[3])<<endl;
}
