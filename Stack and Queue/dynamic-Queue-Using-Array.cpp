//
//  dynamic-Queue-Using-Array.cpp
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
        firstIndex = -1;
        size = 0;
        capacity = q;
    }
    
    int getSize()
    {
        return size;
    }
    
    bool isEmpty()
    {
        return size == 0;
    }
    
    void enqueue(T element)
    {
        if(size == capacity)
        {
            T *newData = new T[2*capacity];
            int j = 0;
            for(int i=firstIndex;i<capacity;i++)
            {
                newData[j] = data[i];
                j++;
            }
            for(int i=0;i<firstIndex;i++)
            {
                newData[j] = data[i];
                j++;
            }
            delete [] data;
            data = newData;
            firstIndex = 0;
            nextIndex = capacity;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex+1) % capacity;
        if(firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }
    T front()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty !" << endl;
            return  0;
        }
        return  data[firstIndex];
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
            firstIndex = 0;
            nextIndex = 0;
        }
        return  ans;
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
    q.enqueue(60);
    
    
    cout << q.front() << endl;
    
    cout << q.isEmpty() << endl;
    
    cout << q.getSize() << endl;
    
    cout << q.dequeue() << endl;
    
    cout << q.dequeue() << endl;
    
    cout << q.dequeue() << endl;
    
    cout << q.front() << endl;
}
