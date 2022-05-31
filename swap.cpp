#include<iostream>
using namespace std;

void swap(int *x ,int *y );

int main()
{

    int a,b;
    cout<<"Enter Two Numbers To Swap: ";
    cin>>a>>b;
    
    swap(&a,&b);
    
    cout<<"\nAfter Swapping Two Numbers: ";
    cout<<a<<" "<<b<<" \n";
    
    return 0;
}
void swap(int *x,int *y)
{
int z;
z=*x;

 *x=*y;

 *y=z;

}