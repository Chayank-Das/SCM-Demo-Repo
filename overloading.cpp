#include <iostream>
using namespace std;


int min(int a,int b,int c){
    if(a<=b && a<=c){
        return a;
    }else if(b<=c){
        return c;
    }else{
        return c;
    }
}
float min(int x,int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}


int main(){
    int a,b,c;
    float x,y;
    cout<<"enter 3 integers :";
    cin>>a>>b>>c;
    cout<<"enter 2 float numbers :";
    cin>>x>>y;

    cout<<"min of first 2 integers :"<<min(a,b,c)<<endl;
    cout<<"min of 3 integers is :"<<min(a,b,c)<<endl;
    cout<<"min of 2 floats is :"<<min(x,y)<<endl;



    return 0;
}