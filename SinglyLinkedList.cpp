// Singly Linkedlist Operations
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

Node* Insertatbeg(Node*head,int data)
{
    Node* temp = new Node(data);
    if(head == NULL)
    {
        return temp;
    }
    temp->next = head;
    head = temp;
    return head;
}
Node* Insertatend(Node*head,int data)
{
    Node* temp = new Node(data);
    if(head == NULL)
    {
        return temp;
    }
    Node* curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
Node* InsertatanyPos(Node*head, int data,int pos)
{
    int count =0;
    Node* temp = new Node(data);
    if(pos == 1)
    {
       temp->next = head;
       return temp;
    }
    else
    {
        Node *curr=head;
    for(int i=1;i<pos-1;i++)
    {
        curr=curr->next;
        if(curr==NULL){
            cout<<"Position out of range"<<endl;
            return head;
        }
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
    }
}
Node* Delatbeg(Node*head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node* Delatend(Node*head)
{
   if(head == NULL)
    {
        return NULL;
    }

    Node* curr = head;
    while(curr->next->next != NULL)
    {
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = NULL;
    delete temp;
    return head;
}
Node* DeleteatanyPos(Node*head, int pos)
{
    int count =0;
    if(pos == 1)
    {
       Delatbeg(head);
       return head;
    }
   Node *curr=head;
   Node* t = NULL;
    for(int i=1;i<pos-1;i++)
    {
        curr=curr->next;
        if(curr==NULL){
            cout<<"Position out of range"<<endl;
            return head;
        }
    }
    t = curr->next;
    curr->next = t->next;
    delete t;
    return head;

}
Node* search(Node* head, int data)
{
    int pos=1;
    Node *curr=head;
    while(curr!=NULL){
        if(curr->data == data)
        {
           cout<<"Record Found at : "<<pos;
           return head;
        }
            
        else{
            pos++;
            curr=curr->next;
        }
    }
    return head;
}
void display(Node* head)
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
    int data,pos;
    Node *head = NULL;
     int x = 0;
    cout<<"\n **************************************************WELCOME**************************************************"<<"\n";
    while(x != 9)
    {
    cout<<"\n Enter 1 to Insert a record at the beginning";
    cout<<"\n Enter 2 to Insert a record at the end";
    cout<<"\n Enter 3 to Insert a record at the given position";
    cout<<"\n Enter 4 to Delete a record from beginning";
    cout<<"\n Enter 5 to Delete a record from end";
    cout<<"\n Enter 6 to Delete a record from given position";
    cout<<"\n Enter 7 to Search a record";
    cout<<"\n Enter 8 to Display all the record";
    cout<<"\n Enter 9 to Exit";
    cout<<"\n Enter Your Choice:";
    cin>>x;
    switch(x)
    {
        case 1:
        {
            cout<<"\n Enter data to insert at beginning : ";
            cin>>data;
            head = Insertatbeg(head, data);
            cout<<"\n Record Inserted Successfully";
            break;
        }
        case 2:
        {
            cout<<"\n Enter data to insert at end : ";
            cin>>data;
            head = Insertatend(head, data);
            cout<<"\n Record Inserted Successfully";
            break;
        }
        case 3:
        {
           cout<<"\n Enter data to insert  : ";
           cin>>data;
           cout<<"\n Enter the required position to insert the data  : ";
           cin>>pos;
           head = InsertatanyPos(head,data,pos);
           cout<<"\n Record Inserted Successfully";
            break;
        }
        case 4:
        {

           head = Delatbeg(head);
           cout<<"\n Record Deleted Successfully";
            break;
        }
        
        case 5:
        {
           head = Delatend(head);
           cout<<"\n Record Deleted Successfully";
            break;
        }
        case 6:
        {
           cout<<"\n Enter the required position to delete the data  : ";
           cin>>pos;
           head = DeleteatanyPos(head,pos);
           cout<<"\n Record Deleted Successfully";
           break;
        }
        case 7:
        {
           cout<<"\n Enter Data to search";
           cin>>data;
           head = search(head,data);
           break;
           
        }
        case 8:
        {
          cout<<"\n Displaying all the records : ";
          display(head);
          break;
        }
        case 9:
        {
            x =9;
            break;
        }

    }
    
    }

}
