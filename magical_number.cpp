/*Your friend loves magic and he has coined a new term - "Magical number". To perform his magic, he needs that Magic number. There are N number of people in the magic show, seated according to their ages in an ascending order. Magical number is that seat no. where the person has the same age as that of the given seat number.
Help your friend in finding out that "Magical number"

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, size of an array.
The second line of each test case contains N input A[]. */

int binarySearch(int arr[], int low, int high)
{
      //add code here.
      while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>mid)
           high = mid-1;
        else if(arr[mid]<mid)
           low = mid+1;
        else
           return mid;
    }
    return -1;
}
