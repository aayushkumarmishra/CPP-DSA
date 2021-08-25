//
//  reverslist.cpp
//  Linklist
//
//  Created by AYUSH MISHRA on 31/05/1943 Saka.
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
Node* ReversList(Node* &head)
{
    Node* preptr = NULL;
    Node* currptr = head;
    Node* nextptr = NULL;
    
    while(currptr!=NULL)
    {
        nextptr = currptr -> next;
        currptr -> next = preptr;
        
        preptr = currptr;
        currptr = nextptr;
        
    }
    return  preptr;
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
    return  head;
}

void display(Node* &head)
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
    Node* newnode = ReversList(head);
    display(newnode);
}
