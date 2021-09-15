//
//  Queue-Using-Array.cpp
//  Stack
//
//  Created by AYUSH MISHRA on 21/06/1943 Saka.
//

#include<iostream>
using namespace std;

template <typename T>

class Queue
{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    
public:
    
    
    Queue(T q)
    {
        data = new T[q];
        nextIndex = 0;
        firstIndex -1;
        size = 0;
        capacity = q;
    }
    
    int getSize()
    {
        return  size;
    }
    bool isEmpty()
    {
        return  size == 0;
    }
    
    void enqueue(T element)
    {
        if(size == capacity)
        {
            cout << "Queue is Full !" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex+1) % capacity;
        if(firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }
    
    T fornt()
    {
        if(isEmpty())
        {
            cout << "Queue is empty !" << endl;
            return 0;
        }
        return data[firstIndex];
    }
    
    T dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty !" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex+1) % capacity;
        size--;
        if(size == 0)
        {
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    }
};


int main()
{
    Queue<int> q(5);
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    
    cout << q.fornt() << endl;
    
    cout << q.isEmpty() << endl;
    
    cout << q.getSize() << endl;
    
    cout << q.dequeue() << endl;
    
    cout << q.dequeue() << endl;
    
    cout << q.dequeue() << endl;
    
    cout << q.fornt() << endl;
    
}
