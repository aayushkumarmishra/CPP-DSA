#include<iostream>
using namespace std;

template <typename T>

class Stack
{
    T *data;
    int nextIndex;
    int capacity;
    
    
public:
    
    
    Stack()
    {
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }
    
    int size()
    {
        return nextIndex;
    }
    
    bool isEmpty()
    {
        return nextIndex == 0;
    }
    
    void push(T element)
    {
        if(nextIndex == capacity)
        {
            T *newData = new T[2*capacity];
            for(int i=0;i<capacity;i++)
            {
                newData[i] = data[i];
            }
                capacity*=2;
                delete [] data;
                data = newData;
        }
            data[nextIndex] = element;
            nextIndex++;
    }
    
    T pop()
    {
        if(isEmpty())
        {
            cout << "Stack is Empty !" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    
    T top()
    {
        if(isEmpty())
        {
            cout << "Stack is Empty !" << endl;
            return 0;
        }
        return data[nextIndex-1];
    }
    
};

int main()
{
    Stack<int> s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    cout << s.top() << endl;
    
    cout << s.size() << endl;
    
    cout << s.isEmpty() << endl;
    
    cout << s.pop() << endl;
    
    cout << s.pop() << endl;
    
    cout << s.pop() << endl;
    
    cout << s.top() << endl;
}
