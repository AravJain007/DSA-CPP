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

void insertAtTail(node* &head, int value){
    node* n = new node(value);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    return;
}

void makeCycle(node* head){
    node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = head;
    return;
}

void insertInCycle(node* head, int value){
    node* temp = head;
    node* n = new node(value);
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    return;
}

void deleteAtHead(node* &head){
    node* temp = head;
    node* todelete = head;
    while (temp->next != head){
        temp = temp->next;
    }
    head = head->next;
    temp->next = head;
    delete todelete;
    return;
}

void deletion(node* &head, int pos){
    node* n = new node(pos);
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    int count = 2;
    node* temp = head;
    while (count != pos){
        temp = temp->next;
        count ++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    return;
}

void display(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<"NULL\n";
    return;
}

int main(){
    node* head(NULL);
    for(int i=1;i<7;i++){
        insertAtTail(head,i);
    }
    makeCycle(head);
    insertInCycle(head,7);
    display(head);
    deletion(head,3);
    display(head);
}