#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

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
Node *convertArr2LL(vector<int> &arr)
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
int length(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int main()
{

    vector<int> arr = {2, 5, 8, 7, 5, 34, 56, 65, 8, 3};
    Node *head = convertArr2LL(arr);

    // Node *temp;
    // temp = head;
    // while (temp != nullptr)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    cout << length(head);
    // Node *y = new Node(arr[0], nullptr);
    // cout << y;
    // Node x = Node(2, nullptr);
    // cout << x.next;

    return 0;
}