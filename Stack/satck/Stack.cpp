// stack is work on LIFO mechanism in which last in first out
// operation 1. push 
// 2.pop
// 3.peek(top element)
// 4. Is Empty()
#include<bits/stdc++.h>

using namespace std;

class Stack { // in c++ class name was in always first letter in upper case
    // proprties
    public:
      int *arr;
      int top;
      int size;

    // Behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int [size];
        top = -1;
    }  


void push(int element) { // t.c - 0(1);
    if(size - top > 1)
    {
        top++;
        arr[top] = element;
    }
    else {
        cout << "Stack overFlow" << endl;

    }
}

void pop() // t.c - 0(1);
{
    if(top >= 0) {
        top--;

    }
    else {
        cout <<"Stack underFlow " << endl;
    }
}

int peek() { // t.c - 0(1);
    if(top >= 0)
    {
        return arr[top];
    }
    else{
        cout <<" Stack is empty " << endl;
        return -1;
    }
}

bool isEmpty() { // t.c - 0(1);
    if(top == -1) {
        return true;
    }
    else  {
        return false;
    }

}
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.pop();
    cout << st.peek() << endl;
}
