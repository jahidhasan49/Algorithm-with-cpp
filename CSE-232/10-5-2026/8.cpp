#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int firstElement = 0;
    int secondElement = 1;
    int next;

    for(int i=1; i<=n; i++){
        if(i==1){
            cout << firstElement << " ";
        }
        else if(i==2){
            cout << secondElement << " ";
        }
        else{
            next=firstElement + secondElement;
            cout << next << " ";

            firstElement = secondElement;
            secondElement = next;
        }
    }
}