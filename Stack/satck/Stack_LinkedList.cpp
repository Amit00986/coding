// stack Implementaion using Linked list
// operation 1. push 
// 2.pop
// 3.peek(top element)
// 4. Is Empty()
#include<bits/stdc++.h>

using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node* top = NULL;

    Node(int data ) { // constructor
        this -> data = data;
        this -> next = NULL;
    }

    void push(int element) { // push
        Node* temp = new Node(element);

        if(temp == NULL )
        {
            cout << " Stack Overflow " << endl;
            return;
        }
        temp -> data  = element;
        temp -> next = top;
        top = temp; 

    }

    int pop() { // pop element
        Node* temp ;
        int element;
        if(top == NULL )
        {
            cout << " Stack UnderFlow " << endl;
            return 0;
        }
        else {
            temp = top;
            element = top -> data;
            top = top -> next;
            free(temp);
            return element;
        }
    }

    int peek() // top elemnt
    {
        if(top == NULL )
        {
            cout << " Stack UnderFlow  " << endl;
        }
        return top -> data ;
    }
};

int main()
{
    Node* ptr = new Node(10);
    ptr->push(80);
    ptr->push(39);
    ptr->push(56);
    ptr->pop();
    ptr->push(78);
    cout << ptr->peek();


 return 0;
}
