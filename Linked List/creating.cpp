#include <iostream>
using namespace std;

// defining a node - user defined data type
// no memory is allocated till now
struct Node
{
    // members of node
    int data;
    struct Node *next;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

// tc =O(n)+O(n)=O(2n)
void deleteNthNode(Node *head, int n)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    // delete the first node
    if (count == n)
    {
        head = head->next;
        // return head;
    }

    int steps = count - n - 1;
    Node *dummy = head;

    while (steps--)
    {
        if (dummy->next)
            dummy = dummy->next;
    }

    dummy->next = dummy->next->next;

    // return head;
}

Node *del(Node *head, int n)
{
    Node *start = new Node();
    start->next = head;
    Node *fast = start;
    Node *slow = start;

    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }

    while (fast->next!=NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;

    return start->next;
}

int main()
{

    // allocating memory
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printList(head);

    // Node *ans = reverse(head);
    // cout << endl;

    // printList(ans);

    // deleteNthNode(head, 2);

    Node *ans = del(head, 2);
    cout << endl;

    printList(ans);

    return 0;
}