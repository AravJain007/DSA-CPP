#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next; // Here the next variable is pointing to the 'next node' so we use node star as it becomes a pointer to the whole node.
    // Constructor
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Here we are taking head by reference(matlab orignal will change if we change it) and not by value.
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    { // If our Linked List is empty then we do this.
        head = n;
        return;
    }
    // Here we put val in the bracket coz this is a parameterised constructor. We use node* n to save the address of the value.
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n; // Since temp is a pointer we use -> instead of the period(.) operator
}

// Here we are taking our value by value and not by refernce coz we dont need to modify our linked list.
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
    node* head(NULL);  // This is a pointer of data type node which points at the very first node which is null since we initailized ntg.
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    return 0;
}