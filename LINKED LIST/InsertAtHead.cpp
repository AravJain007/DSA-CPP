#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){  // If the linked list has no values then this will get executed;
        head = n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    return;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next=head;
    head = n;
    return;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head(NULL); // Head is just a pointer.
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,6);
    insertAtHead(head,5);
    display(head);
}