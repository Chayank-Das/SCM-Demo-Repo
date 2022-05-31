//This is a dummy text
//
#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << " Input the value for nth term: ";
    cin >> n;

    for (i = 1; i <= n; i++) 
	{
        sum += i * i;
        cout << i << "*" << i << " = " << i * i << endl;
    }
    cout << " The sum of the above series is: " << sum << endl;
}
