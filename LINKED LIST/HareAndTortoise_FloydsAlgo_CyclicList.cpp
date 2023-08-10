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

void makeCycle(node *head, int pos)
{
    node *temp = head;
    node *startNode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
            startNode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
    return;
}

bool detect(node *head)
{
    node *slow_tortoise = head;
    node *fast_hare = head;
    while (fast_hare != NULL && fast_hare->next != NULL)
    {
        fast_hare = fast_hare->next->next;
        slow_tortoise = slow_tortoise->next;
        if (slow_tortoise == fast_hare)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    node *head(NULL);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    insertAtTail(head, 10);
    insertAtTail(head, 11);
    insertAtTail(head, 12);
    insertAtTail(head, 13);
    makeCycle(head, 5);
    cout << detect(head);
}