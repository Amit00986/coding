// It is the redifination of base class function in its derived class,
// with same return type and same perimeter. It achived during run time

#include<bits/stdc++.h>
using namespace std;

class Car {
    private:
       int gearNo ;
    public:
       void change_gear(int gear) {
            gear++;
       }   
};

class  SportsCar : public Car {
    void change_gear(int gear) {
        if(gear>5) {
            gear++;
        }
    }
};


int main() {
    SportsCar sc;
    sc.change_gear(4);

}

