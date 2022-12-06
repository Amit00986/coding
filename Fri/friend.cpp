// A friend class can access the private and protected numbers of other class in which it is
// declared as friend;

#include<bits/stdc++.h>
using namespace std;

class Box {
    private:
      double width;
    public:
      friend void printWidth(Box box);
      void setWidth(double wid);   
};

void Box :: setWidth(double wid) 
{
    width = wid;
}

void printWidth(Box box) {
    cout << box.width;
}

int main() {
    Box box;
    box.setWidth(14);
    printWidth(box);
}

