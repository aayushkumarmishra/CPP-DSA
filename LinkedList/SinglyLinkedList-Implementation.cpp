#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
//this is fuction to add node on had
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}
// this function use for delete only head
void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}
//and this fuction we use to delete at tail and mid element of linked list
void deleteAtTail(node* &head,int val){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else if(head->next == NULL){
        cout<<"List is now empty"<<endl;
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data != val){
        temp = temp ->next;
    }
    node* todelete = temp -> next;
    temp -> next = temp -> next -> next;
    delete todelete;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

//this is function for searching key using linearSearch

bool linearSearch(node* head,int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){
    node* head = NULL;        
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head,);
    display(head);
    
    return 0;
}
