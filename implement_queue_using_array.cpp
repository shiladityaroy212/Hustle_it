/*Implement a Queue using an Array. Queries in the Queue are of the following type:
(i) 1 x   (a query of this type means  pushing 'x' into the queue)
(ii) 2     (a query of this type means to pop element from queue and print the poped element)

Example 1:

Input:
Q = 5
Queries = 1 2 1 3 2 1 4 2
Output: 2 3
Explanation:
In the first test case for query 
1 2 the queue will be {2}
1 3 the queue will be {2 3}
2   poped element will be 2 the 
    queue will be {3}
1 4 the queue will be {3 4}
2   poped element will be 3 */


//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
        // Your Code
        arr[rear]=x;
        rear++;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code  
        if(front==rear)
        {
            return -1;
        }
        int temp=arr[front];
        front++;
        return temp;
}
