// To merge two lists in ascending order iteratively
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* prev;
    node* next;
    node(int value){
        data = value;
        next = NULL;
        prev = NULL;
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

void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }cout<<"NULL\n";
}

node* merge(node* head1, node* head2){
    node* temp1 = head1;
    node* temp2 = head2;
    node* newhead = new node(-1);
    node* temp3 = newhead;
    while (temp1 != NULL && temp2 != NULL){
        if(temp1->data > temp2->data){
            temp3->next = temp2;
            temp3 = temp3->next;
            temp2 = temp2->next;
        }else{
            temp3->next = temp1;
            temp3 = temp3->next;
            temp1 = temp1->next;
        }    
    }
    while(temp1 != NULL){
        temp3->next = temp1;
        temp3 = temp3->next;
        temp1 = temp1->next;
    }
    while(temp2 != NULL){
        temp3->next = temp2;
        temp3 = temp3->next;
        temp2 = temp2->next;
    }
    return newhead->next;
}

int main(){
    node* head1(NULL);
    node* head2(NULL);
    for(int i=1; i<=6 ; i++)
        insertAtTail(head1,i);
    for(int i=0; i<=4; i++)
        insertAtTail(head2,i);
    display(head1);
    display(head2);
    node* newhead = merge(head1,head2);
    display(newhead);
    return 0;
}