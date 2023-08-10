#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int value){
        data = value;
        next = NULL;
    }
};

void reverseList(node* &head,node* prevptr, node* currptr){
    if(currptr == NULL){
        head = prevptr;
        return;
    }
    node* nextptr = currptr->next;
    currptr->next = prevptr;
    reverseList(head,currptr,nextptr);
}

void insertAtTail(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next=n;
    return;
}

node* reverseListApnaCollege(node* head){
    // Base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    // Recursive case
    node* newhead = reverseListApnaCollege (head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}

int main(){
    node* head(NULL);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    reverseList(head,NULL,head);
    display(head);
    node* newhead = reverseListApnaCollege(head);
    display(newhead);
}