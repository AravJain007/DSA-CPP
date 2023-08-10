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

void insertAtTail(node *&head, int value)
{
    node *n = new node(value);
    if (head = NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    return;
}

void OddEvenNode(node *head)
{
    node* odd=head;
    node* even=head->next;
    node* evenStart = head->next;
    while(odd->next != NULL && even->next != NULL){
        odd = even->next;
        odd = odd->next; //Here we have taken a double jump as odd was made even->next first
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    if(odd->next==NULL){
        odd->next=NULL;
    }
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "Over\n";
}

int main()
{
    node *head(NULL);
    for (int i = 1; i <= 10; i++)
    {
        insertAtTail(head, i);
    }
    display(head);
    OddEvenNode(head);
    display(head);
    return 0;
}