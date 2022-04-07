/*Given a positive integer n. Your task is to check if it divisible as given below:
1. If it is divisible by 2, print "Two".
2. If it is divisible by 3, print "Three".
3. If it is divisible by 11, print "Eleven".
4. If not follow above three rules, print "-1".
Note: If nis divisible by more than one of the above given numbers, print the one which is largest.

Example:
Input:n = 3
Output:Three */

void isDivisibleByPrime(int n){
    
    // HERE A NUMBER CAN BE DIVISIBLE BY MANY PRIMES FACTORS..SO TAKING ALL THE CONDITIONS TO PASS ALL THE TEST CASES
    if(n%2==0 && n%3==0 && n%11==0){
       cout<<"Eleven";
   }else if(n%3==0 && n%11==0){
       cout<<"Eleven";
   }else if(n%2==0 && n%11==0){
       cout<<"Eleven";
   }
   else if(n%2==0 && n%3==0){
       cout<<"Three";
   }
   else if(n%2==0){
       cout<<"Two";
   }else if(n%3==0){
       cout<<"Three";
   }else if(n%11==0){
       cout<<"Eleven";
   }else{
       cout<<"-1";
   }
   cout<<endl;
}
