#include<iostream>
using namespace std;

int main(){
    int a, b, temp=0;

    cout << "Enter a number: " << endl;
    cin >> a;
    cout << "Enter a number: " << endl;
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swap: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}