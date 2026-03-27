#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;

    ListNode(int data1, ListNode *next1)
    {
        data = data1;
        next = next1;
    }
    ListNode(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

ListNode *AddTwoLL(ListNode *l1, ListNode *l2)
{
    ListNode *temp1 = l1;
    ListNode *temp2 = l2;
    ListNode *dummyHead = new ListNode(-1);
    ListNode *curr = dummyHead;
    int carry = 0;
    while (temp1 != NULL || temp2 != NULL)
    {
        int sum = carry;
        if (temp1)
        {
            sum = sum + temp1->data;
        }
        if (temp2)
        {
            sum = sum + temp2->data;
        }
        ListNode *newListNode = new ListNode(sum % 10);
        carry = sum / 10;
        curr->next = newListNode;
        curr = curr->next;
        if (temp1)
        {
            temp1 = temp1->next;
        }
        if (temp2)
        {

            temp2 = temp2->next;
        }

        if (carry)
        {
            ListNode *newListNode = new ListNode(carry);
            curr->next = newListNode;
        }
    }
    return dummyHead->next;
}
ListNode *convertArr2LL(vector<int> &arr)
{
    ListNode *head = new ListNode(arr[0]);
    ListNode *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        ListNode *temp = new ListNode(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp)
    {
        cout << temp->data;
        temp = temp->next;
        cout << endl;
    }
}
int main()
{

    vector<int> arr1 = {2, 5, 8};
    vector<int> arr2 = {2, 3};
    ListNode *l1 = convertArr2LL(arr1);
    ListNode *l2 = convertArr2LL(arr2);

    ListNode *head = AddTwoLL(l1, l2);
    print(head);
}