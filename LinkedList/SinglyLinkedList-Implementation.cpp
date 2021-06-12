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

// this fuction is used to revers our singly linked list...
//and this is a irrtrative mathod
node* reverse(node* &head) {
    node* prevptr = NULL;
    node* curptr = head;
    node* nextptr;
    while(curptr != NULL){
        nextptr = curptr ->next;
        curptr -> next = prevptr;
        prevptr = curptr;
        curptr = nextptr;
    }
    return prevptr;
}

//this is recursive method to reverse singly linke list
node* reverseRecursive(node* &head) {
    if(head == NULL || head -> next == NULL){
        return head;
    }
    node* newhead = reverseRecursive(head -> next);
    head -> next ->next = head;
    head -> next = NULL;
    return newhead;
}


//this function is used to solve K-node problem in linked list
node* reversek(node* &head,int k){
    node* curptr = head;
    node* prevptr = NULL;
    node* nextptr;
    int count = 0;
    while(curptr != NULL && count < k){
        nextptr = curptr -> next;
        curptr ->next = prevptr;
        prevptr = curptr;
        curptr = nextptr;
        count++;
    }
    if(nextptr!= NULL){
        head ->next = reversek(nextptr,k);
    }
    return prevptr; 
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
    int k=2;
    node* newhead = reversek(head,k);
    display(newhead);
    
    return 0;
}
