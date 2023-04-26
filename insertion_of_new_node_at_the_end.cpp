#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void append(node**head_ref, int new_data)
{
    node *new_node = new node();
    node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref = NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

void display(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    append(&third, 70);
    display(head);
    return 0;
}