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
        prev = NULL;
        next = NULL;
    }
};

int length(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void insertAtTail(node *&head, int value)
{
    node *n = new node(value);
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
    n->prev = temp;
    return;
}

node *appendKNode(node *&head, int pos)
{
    node *tail = head;
    node *newhead;
    node *newtail;
    int l = length(head);
    int count = 1;
    while (tail->next != NULL)
    {
        if (count == l - pos)
            newtail = tail;
        if (count == l - pos + 1)
            newhead = tail;
        tail = tail->next;
        count++;
    }
    newtail->next = NULL;
    tail->next = head;
    return newhead;
}

void display(node *head)
{
    node *temp = head;
    cout << "Start ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "Over" << endl;
    return;
}

int main()
{
    node *head(NULL);
    for (int i = 1; i <= 10; i++)
    {
        insertAtTail(head, i);
    }
    display(head);
    node *newhead = appendKNode(head, 5);
    display(newhead);
    return 0;
}