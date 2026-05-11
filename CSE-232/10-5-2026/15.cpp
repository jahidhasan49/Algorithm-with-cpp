#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter a number: " << endl;
    cin >> n1;
    cout << "Enter a number: " << endl;
    cin >> n2;

    int sum=n1+n2;
    int sub=n1-n2;
    int mul=n1*n2;
    int div=n1/n2;

    cout <<"Sum: " << sum << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multification: " << mul << endl;
    cout << "Divide is " << div << endl;
    
}