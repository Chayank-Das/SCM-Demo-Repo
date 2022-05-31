#include <iostream>
using namespace std;
int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int main(){
    int a = 35, b = 18, c = 25;
    int left_max = max(a, b);
    int right_max = max(b,c);
    int final_max = max(left_max, right_max);
    cout << final_max;
}