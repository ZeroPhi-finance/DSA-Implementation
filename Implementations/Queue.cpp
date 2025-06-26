#include <iostream>
using namespace std;

// Queue
// Enqueue, Dequeue, Peek
// FIFO

class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push_back(int element)
    {
        // check if queue is full or not
        // front = 0, rear = size-1
        if ((front == 0) && (rear == size - 1))
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = element;
    }

    void pop_front()
    {
        // check if queue is empty or not
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        arr[front] = 0;
        front++;
    }

    void front_data()
    {
        // check if queue is empty or not
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[front] << endl;
    }
};

int main()
{
    Queue q(5);
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);
    q.pop_front();
    q.front_data();
    q.pop_front();
    q.front_data();

    return 0;
}