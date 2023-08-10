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
        temp=temp->next;
    }
    temp->next = n;
}

void insertAtHead(node* &head, int value){
    node* n = new node(value);
    n->next=head;
    head = n;
    return;
}

bool searchInList(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;   // Updating the temp variable
    }
    return false;
}

int main(){
    node* head(NULL);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);
    cout<<searchInList(head,5);
}