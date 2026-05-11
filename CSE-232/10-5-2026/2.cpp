#include<iostream>
using namespace std;

int main(){
    int n1, n2, max;
    cout << "Enter a number: " << endl;
    cin >> n1;
    cout << "Enter a number: " << endl;
    cin >> n2;

    if(n1>n2){
        cout << n1 << " is maximum" << endl; 
    }
    else {
        cout << n2 << " is maximum" << endl;
    }

}