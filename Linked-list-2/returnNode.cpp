//
//  returnNode.cpp
//  Linklist
//
//  Created by AYUSH MISHRA on 31/05/1943 Saka.
//

#include<iostream>
using namespace std;

class Node {
    
public:
    
    int data;
    Node* next;
    
    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

int ReturnNode(Node* &head, int key)
{
    Node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return count;
        }
        else
        {
            temp = temp -> next;
            ++count;
        }
    }
    return -1;
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
    int key;
    cin>>key;
    int ans = ReturnNode(head, key);
    cout << ans << endl;
}
