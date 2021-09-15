//
//  LinkList-Using-Stack.cpp
//  Stack
//
//  Created by AYUSH MISHRA on 21/06/1943 Saka.
//

#include<iostream>
using namespace std;

template <typename T>

class Node
{
    
public:
    
    T data;
    Node <T> *next;
    
    Node(T data)
    {
        this -> data = data;
        next = NULL;
    }
};


template <typename T>


class Stack
{
    Node<T> *head;
    int size;
    
public:
    
    Stack()
    {
        head = NULL;
        size = 0;
    }
    
    int getSize()
    {
        return size;
    }
    
    bool isEmpty()
    {
        return size == 0;
    }
    
    void push(T element)
    {
        Node<T> *newNode = new Node<T> (element);
        newNode -> next  = head;
        head = newNode;
        size++;
    }
    
    T pop()
    {
        if(isEmpty())
        {
            cout << "Stack is Empty !" << endl;
            return 0;
        }
        T ans = head -> data;
        Node <T> *temp = head;
        head = head -> next;
        delete temp;
        size--;
        return ans;
    }
    T top()
    {
        if(isEmpty())
        {
            cout << "Satck is Empty !" << endl;
            return 0;
        }
        return head -> data;
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
    
    cout << s.isEmpty() << endl;
    
    cout << s.getSize() << endl;
    
    cout << s.pop() << endl;
    
    cout << s.pop() << endl;
    
    cout << s.top() << endl;
}
