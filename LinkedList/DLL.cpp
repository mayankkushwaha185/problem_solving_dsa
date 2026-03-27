#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *next;
    node *prev;

    node(int val1, node *next1, node *prev1)
    {
        val = val1;
        next = next1;
        prev = prev1;
    };

    node(int val1)
    {
        val = val1;
        next = nullptr;
        prev = nullptr;
    };
};

node *convertToDLL(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
node *deleteHead(node *head)
{
    node *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
    return head;
}
node *deleteTail(node *head)
{
    node *temp = head;
    node *track = NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    track = temp;
    temp = temp->prev;
    temp->next = NULL;
    track->prev = NULL;
    delete track;
    return head;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->val;
        cout << endl;
        head = head->next;
    }
}
int main()
{
    vector<int> arr = {12, 3, 4, 56};
    node *head = convertToDLL(arr);
    // head = deleteHead(head);
    head = deleteTail(head);
    print(head);
}