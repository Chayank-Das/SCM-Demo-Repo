#include <iostream>
using namespace std;

class Binary{
    private:
    int a,b,c;

    public:
    void read(int x, int y, int z){
        a =x ; b =y; c =z;
    }
    void display(){
        cout << a << " "<< b << " " << c;
    }

    Binary operator + (Binary b2){
        Binary b3;

        b3.a= a+b2.a;
        b3.b= b+b2.b;
        b3.c= c+b2.c;
        return b3;
    }
};

int main(){
    Binary b1, b2, b3;
    b1.read(1,2,3);
    b2.read (4,5,6);
    b3 = b1.operator+(b2);
    b3.display();
    return 0;
}