
#include<iostream>
using namespace std;

int main(){
    int n, i, sum=0;
    cout << "Enter a number: " << endl;
    cin >> n;
    int currentNumber;
    for(i=1; i<=n; i++){
        cin >> currentNumber;
        sum=sum+currentNumber;
    }
    cout << "Average is: "<< sum/n << endl; 
}