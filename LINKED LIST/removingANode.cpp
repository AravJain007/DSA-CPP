#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void insertAtTail(node *&head, int value)
{
    node *n = new node(value);
    if (head == NULL)
    {
        n->prev = NULL;
        head = n;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    n->next = NULL;
    return;
}

void removeNode(node *&head, int pos)
{
    node *temp = head;
    node *todelete = head;
    if (pos == 1)
    {
        head = temp->next;
        temp->prev = NULL;
        delete todelete;
        return;
    }
    int count = 2; // Have to keep count 2 because we already have taken for pos == 1
    while (count != pos)
    {
        temp = temp->next;
        count++; // Remember to update everytime in while loop
    }
    todelete = temp;
    temp->prev->next = temp->next;
    if(temp->next != NULL)
        temp->next->prev = temp->prev;
    delete todelete;
    return;
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
    return;
}

int main()
{
    node *head(NULL);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    removeNode(head, 3);
    display(head);
    return 0;
}