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

void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
    return;
}

void deletion(node *&head, int key)
{
    node *temp = head;
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
    }
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next; // The element after the element to be deleted is being shifted from (temp->next->next) to (temp->next)
    delete todelete;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
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

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
    return;
}

int main()
{
    node *head(NULL);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    deletion(head, 3);
    display(head);
}