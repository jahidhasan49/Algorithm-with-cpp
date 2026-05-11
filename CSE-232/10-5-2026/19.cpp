#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    
    int arr[n];
    cout << "Enter array elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Unique elements are: " << endl;
    for(int i=0; i<n; i++){
        int duplicate = 0;
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                duplicate=1;
                break;
            }
        }
        if(duplicate==0){
            cout << arr[i] << " ";
        }
    }
}