#include <iostream>
using namespace std;

const int MAX = 1000;

// Create a queue class
class Queue
{
    private:
        int arr[MAX];    
        int front;   
        int rear;    
        int capacity;   
    public:
        // Constructor to initialize queue
        Queue(int size)
        {
            arr[size];
            capacity = size;
            front = 0;
            rear = -1;
        }

        // function to insert an element
        // at the rear of the queue
        void enqueue(int);

        // function to delete an element
        // from the front of the queue
        int dequeue();

        // function to return the front element
        int peek();

        // function to return the size of the queue
        int size();

        // function to check if the queue is empty
        bool isEmpty();

        // function to check if the queue is full
        bool is
