//   this pointer -> Every function in c++ has access to its own address through an  
//  important pointer is called this pointer

#include<bits/stdc++.h>
using namespace std;

class Box {
    private:
       int l, b , h;
    public:
       void set(int l, int b, int h) 
       {
            this->l = l;
            this->b = b;
            this->h = h;

       }  
};
int main() {
    Box b;
    b.set(5, 10, 4);
}
