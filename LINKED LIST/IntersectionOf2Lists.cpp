#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;
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
    n->prev = temp;
    return;
}

int length(node* head){
    node* temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

int intersectionPointOf2list(node* head1 , node* head2){
    node* temp1; // Remember to not initialize them with head1 or head2. Do so only after you check which one is of bigger length.
    node* temp2;
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    if(l1>l2){
        temp1 = head1;
        temp2 = head2;
        d = l1-l2;
    }
    else{
        temp1 = head2;
        temp2 = head1;
        d = l2-l1;
    }
    while(d){ // Here we just kept d coz in the updation we are doing d--. So eventually at one point it will reach 0 which also means false hence terminated.
        temp1 = temp1->next;
        d--;
    }
    while (temp1 != NULL && temp2!= NULL){
        if(temp1 == temp2)
            return (temp1->data);
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return -1;
}

int main(){
    node* head1(NULL);
}