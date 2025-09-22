#include <iostream>
using namespace std;
int main()
{
    int n, remainder, original;
    int result = 0;
    cout << "Enter A Number:" << endl;
    cin >> n;
    original = n;
    while (original != 0)
    {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }
    if (result == n){
        cout <<n<<" Is An Armstrong Number"<<endl;
    }
    else{
        cout<<n<<" Is Not An Armstrong Number"<<endl;
    }
    return 0;
}