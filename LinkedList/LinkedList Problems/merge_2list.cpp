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


void insertAtTail(node* &head,int data){
    node* temp1 = new node(data);
    if(head == NULL){
        head = temp1;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = temp1;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

// this is iterative method to solve.....merge two sorted lists

node* merge(node* &head1,node* &head2){
    
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    node* result;
    if(head1 -> data < head2 ->data){
        result = head1;
        result -> next = merge(head1 -> next, head2);
    }
    else{
        result = head2;
        result -> next = merge(head1, head2 -> next);
    }
    return result;
}

// this is recursive method to solve.....merge two sorted lists
node* mergeRecursive(node* &head1, node* &head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    node* result;if (head1->data<head2->data)
    {
        result=head1;
        result->next=mergeRecursive(head1->next,head2);
    }
    else
    {
        result=head2;
        result->next=mergeRecursive(head2->next,head1);
    }
    return result;
}

int main(){

    node* head1 = NULL;
    int arr1[] = {1,4,5,7};
    for(int i = 0; i< *(&arr1 + 1) - arr1; i++){
        insertAtTail(head1,arr1[i]);
    }
    node* head2 = NULL;
    int arr2[] = {2,3,6};
    for(int i = 0; i< *(&arr2 + 1) - arr2; i++){
        insertAtTail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    node* newhead = mergeRecursive(head1,head2);
    display(newhead);
    return 0;
}
