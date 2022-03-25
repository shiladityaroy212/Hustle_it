long long int product(int ar[], int n, long long int mod)
 {
     
     //code here
     long long int mul=1;
     for(int i=0;i<n;i++)
     {
         mul=mul*ar[i]%mod;
     }
     return mul;
 }
