#include<iostream>
using namespace std;

int main(){
    int n, key;

    cout << "Enter the size of array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter array elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element to search: " << endl;
    cin >> key;

    int found = false;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout << "Element found at position: " << i+1 << endl;
            found = true;
            break;
        }
    }
    if(found == false){
        cout << "Element is not found" << endl;
    }
}