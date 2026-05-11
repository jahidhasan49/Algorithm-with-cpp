#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter a number: " << endl;
    cin >> n;

    if(n>0){
        cout << n << " is a positive number" << endl;
    }
    else if(n<0){
        cout << n << " is a negative number" << endl;
    }
    else{
        cout << "zero" << endl;
    }
}