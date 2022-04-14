"""Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.

 

Example 1:

Input:
N = 7
Arr = {1, 2, 3, 5, 4, 7, 10}
Output:
7 5 3 1 2 4 10
Explanation:
Array elements 7 5 3 1 are odd
and sorted in descending order,
whereas 2 4 10 are even numbers
and sorted in ascending order. """

class Solution:
    def sortIt(self, arr, n):
        #code here.
       odd=[i for i in arr if i%2>0]
       odd.sort(reverse=True)
       even=[i for i in arr if i%2==0]
       even.sort()
       for i ,v in enumerate(list(odd+even)):
           arr[i]=v
