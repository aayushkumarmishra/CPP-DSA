//
//  find-mid-without-lenght.cpp
//  Linklist
//
//  Created by AYUSH MISHRA on 02/06/1943 Saka.
//

#include<iostream>
using namespace std;

class Node
{
    
public:
    
    int data;
    Node* next;
    
    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

Node* mid(Node* head)
{
    Node* slow = head;
    Node* fast = head -> next;
    
    
    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
Node* takeInput()
{
    int data;
    cin>>data;
    
    Node* head = NULL;
    Node* tail = NULL;
    
    while(data!=-1)
    {
        Node* newNode = new Node(data);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = tail -> next;
        }
        cin>>data;
    }
    return head;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp -> data << "->";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* head = takeInput();
    display(head);
    
    Node* midNode = mid(head);
    cout<<midNode->data<<endl;
}
