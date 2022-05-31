#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int * ptr;
    ptr = &a;
    cout<<"address"<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;

    cout<<"value"<<endl;
    *ptr=200;
    cout<<*ptr<<endl;
    cout<<a<<endl;
}