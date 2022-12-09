#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
       int data;
       Node* next;

    Node(int data)  //constructor
    {
        this->data = data;
        this->next = NULL;
    }   

    ~Node()  //destructor
     {
         int value =  this->data;

         if(this->next != NULL)
         {
             delete next;
             this->next = NULL;
         }

         cout <<" Memory is free for Node with data "<< value <<endl;

     }
};     

     void InsertAtHead(Node* &head,int d)
     {
         Node* temp = new Node(d);
         temp->next = head;
         head = temp;

     }

     void InsertAtTail(Node* &tail, int d)
    {
        Node* temp = new Node(d);
        tail->next = temp;
        tail = tail->next;

     }


     void Print(Node* &head)
     {
         Node* temp = head;

         while(temp != NULL)
         {
             cout << temp->data <<" ";
             temp = temp->next;
         }
     }

   
int main()
{
    
    Node* head = NULL;
    Node* tail =head;

    InsertAtHead(head,10);
    InsertAtHead(head,12);
    InsertAtHead(head,89);
    InsertAtTail(tail,45);
    Print(head);
    Print(tail);
     

}