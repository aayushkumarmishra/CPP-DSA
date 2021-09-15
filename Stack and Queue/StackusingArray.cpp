//
//  StackusingArray.cpp
//  Stack
//
//  Created by AYUSH MISHRA on 07/06/1943 Saka.
//

#include<iostream>
#include<climits>

using namespace std;

class StackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;
    
    
public:
    
    StackUsingArray(int totalsize)
    {
        data = new int[totalsize];
        nextIndex = 0;
        capacity = totalsize;
    }
    
    
    int size()
    {
        return nextIndex;
    }
    
    bool empty()
    {
        return nextIndex == 0;
    }
    
    void push(int element)
    {
        if(nextIndex == capacity)
        {
            cout << "Stack full " << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    
    int pop()
    {
        if(empty())
        {
            cout << "Stack is empty " << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    
    int top()
    {
        if(empty())
        {
            cout << "Stack is empty " << endl;
            return INT_MIN;
        }
        return  data[nextIndex-1];
    }
};

int main()
{
    StackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    cout << s.top() << endl;
    
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    
    
    cout << s.size() << endl;
    
    cout << s.empty() << endl;
}
