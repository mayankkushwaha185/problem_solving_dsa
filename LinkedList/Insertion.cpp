#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *
InsertionAtBegin(Node *head, int val)
{
    Node *newNode = new Node(val, head);

    return newNode;
};

Node *InsertAtEnd(Node *head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    while (temp->next != NULL)
    {
        // cout << temp->data;
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

Node *arrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *InsertionKth(Node *head, int k, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    int cnt = 1;

    while (temp != NULL)
    {
        if (cnt == k - 1)
        {
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
        cnt++;
    }
    return head;
}

Node *ReverseLL(Node *head)
{
    Node *current = head;
    Node *back = NULL;
    Node *forward = head;
    while (current != NULL)
    {
        forward = current->next;
        current->next = back;
        back = current;
        current = forward;
    }
    head = back;
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data;
        temp = temp->next;
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {12, 3, 4, 56};
    Node *head = arrToLL(arr);
    // head = InsertionAtBegin(head, 45);
    head = InsertionAtBegin(head, 45);
    // head = InsertAtEnd(head, 13);
    // head = InsertionKth(head, 2, 78);
    head = ReverseLL(head);
    print(head);
}