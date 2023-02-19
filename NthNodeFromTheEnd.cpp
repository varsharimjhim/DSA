//Find the Nth Node from the end of the LinkedList
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
void nthNodefromend(int n)
{
    if(head == NULL)
    {
        cout<<"\n No element in the list";
    }
    else{
        Node* ptr1 = head;
        Node* ptr2 = head;
        for(int i =0; i<n;i++)
        {
            if(ptr2 == NULL) return;
            ptr2 = ptr2->next;
        }
        while(ptr2!= NULL)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        cout<<"\n Required Data is : ";
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

    nthNodefromend(5);

}