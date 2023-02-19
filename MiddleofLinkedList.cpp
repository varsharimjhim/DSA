//Find the middle element of a Singly LinkedList
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data =x;
        next = NULL;
    }
   
};
Node* head = NULL;
void Insert(int data)
{
    Node* temp = new Node(data);
    if(head == NULL)
    {
      head = temp;
    }
    else{
        Node* ptr = head;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void Middle()
{
    if(head == NULL)
    {
        cout<<"\n No element in the list";
    }
    else{
    Node* ptr1 = head;
    Node* ptr2 = head;
    while(ptr2 != NULL && ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
    }
    cout<<"\n Middle element found : ";
    cout<<ptr1->data;
    }
}
void display()
{
    Node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}
int main()
{
    int data;
    Node*head = NULL;
    Insert(7);
    Insert(0);
    Insert(4);
    Insert(9);
    Insert(3);
    Insert(1);
    Insert(10);
    display();
    Middle();

}