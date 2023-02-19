#include<bits/stdc++.h>
using namespace std;
struct Node{
    
    string name;
    int reg;
    Node *next;
    Node(string Name, int Reg)
    {
        name = Name;
        reg = Reg;
        next = NULL;
    }
};
bool check(Node *head, int Reg)
{
   if(head == NULL)
   {
       return false;
   }
    Node* ptr = head;
    while(ptr!= NULL)
    {
        if(ptr->reg == Reg)
        {
            return true;
        }
        ptr = ptr->next;
    }
    return false;

}
Node* InsertaRecord(Node*head,string name, int reg)
{
    if(check(head,reg))
    {
        cout<<"----------------------------Student with this Record already exist-------------------------------";
        return head;
    }
    Node* temp = new Node(name, reg);
    if(head == NULL)
    {
        cout<<"\n---------------------------Record Inserted Scuccessfully--------------------------------------";
        return temp;
    }
    Node* curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    cout<<"\n---------------------------------Record Inserted Scuccessfully------------------------------------";
    return head;
}
Node* DeleteaRecord(Node* head, int Reg)
{
    if(check(head,Reg) == false)
    {
        cout<<"--------------------------------Student with this Record not exist-------------------------------";
        return head;
    }
    //Delete at begin
    Node* temp = head;
    Node* curr = NULL;
    if(temp != NULL && temp->reg == Reg)
    {
        head = temp->next;
        delete temp;
        cout<<"\n------------------------------Record Deleted Successfully--------------------------------------";
        return head;
    }
    while(temp!= NULL && temp->reg != Reg )
    {
        curr = temp;
        temp = temp->next;
    }
    if(temp == NULL)
    {
        cout<<"\n -----------------------------Record does not exist--------------------------------------------";
        return head;
    }
    else
    {
        curr->next = temp->next;
        delete temp;
        cout<<"\n -----------------------------Record Deleted Successfully---------------------------------------";
        return head;
    }
    
}
Node* Searcharecord(Node* head, int Reg)
{
    if(head == NULL)
    {
        cout<<"---------------------------------No Record To search----------------------------------------------"<<"\n";
        return NULL;

    }
    Node* curr = head;
    while(curr!= NULL )
    {
        if(curr->reg == Reg )
        {
              cout<<"Result Found :"<<"\n";
              cout<<"Student Name : "<<curr->name<<"\n";
              cout<<"Student Registration Number : "<<curr->reg<<"\n";
              return head;
        }
        curr = curr->next;
    }
    cout<<"----------------------------------------No Result Found------------------------------------"<<"\n";
    return head;
}

void display(Node* head)
{
    Node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<"Student Name : "<<ptr->name<<"\n";
        cout<<"Student Registration Number : "<<ptr->reg<<"\n";
        ptr = ptr->next;
    }
    cout<<"\n";
}

int main()
{
    int choice,reg;
    string name;
    Node*head =NULL;
    int x = 1;
    cout<<"\n **************************************************WELCOME**************************************************"<<"\n";
    while(x != 5)
    {
    cout<<"\n Enter 1 to Insert a record";
    cout<<"\n Enter 2 to Delete a record";
    cout<<"\n Enter 3 to Search a record";
    cout<<"\n Enter 4 to Display all the record";
    cout<<"\n Enter 5 to Exit";
    cout<<"\n Enter Your Choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"\n Enter Name of the Student : ";
            cin>>name;
            cout<<"\n Enter Registration No of the Student : ";
            cin>>reg;
            head = InsertaRecord(head, name,reg);
            break;
        }
        case 2:
        {
            cout<<"\n Enter Registration number of the Student to delete its record : ";
            cin>>reg;
            head = DeleteaRecord(head, reg);
            break;
        }
        case 3:
        {
           cout<<"\n Enter Registration number of the Student to search its record : ";
           cin>>reg;
           head = Searcharecord(head,reg);
           break;
        }
        case 4:
        {
            cout<<"Displaying Students Records : "<<"\n";
            display(head);
            break;
        }
        case 5:
        {
            x =5;
        }

    }
    }


}