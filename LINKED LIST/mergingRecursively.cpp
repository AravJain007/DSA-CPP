#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "NULL\n";
}

node *mergeRecursively(node *head1, node *head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeRecursively(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecursively(head1, head2->next);
    }
    return result;
}

int main()
{
    node *head1(NULL);
    node *head2(NULL);
    for (int i = 1; i <= 6; i++)
        insertAtTail(head1, i);
    for (int i = 0; i <= 4; i++)
        insertAtTail(head2, i);
    display(head1);
    display(head2);
    node *newhead = mergeRecursively(head1, head2);
    display(newhead);
    return 0;
}