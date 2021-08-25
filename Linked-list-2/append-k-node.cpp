//
//  append-k-node.cpp
//  Linklist
//
//  Created by AYUSH MISHRA on 01/06/1943 Saka.
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

int length(Node* &head)
{
    Node* temp = head;
    int len = 0;
    while(temp!=NULL)
    {
        temp = temp -> next;
        ++len;
    }
    return len;
}

Node* append(Node* &head, int k)
{
    Node* temp = head;
    Node* newHead = NULL;
    Node* newTail = NULL;
    int len1 = length(head);
    //k = len1 % k;
    int count = 1;
    if(k<=len1)
    {
        while(temp->next != NULL)
        {
        if(count==len1-k)
        {
            newTail = temp;
        }
        if(count==len1-k+1)
        {
            newHead = temp;
        }
        temp = temp -> next;
        ++count;
    }
        newTail -> next = NULL;
        temp -> next = head;
    }
    else
    {
        cout << "can't append" << endl;
    }
    
    return  newHead;
}


Node* takeInput()
{
    int data;
    cin>>data;
    
    Node* head = NULL;
    Node* tail =NULL;
    
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
    
    int k;
    cin>>k;
    
    Node* newhead = append(head, k);
    display(newhead);
}
