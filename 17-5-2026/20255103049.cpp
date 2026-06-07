#include<iostream>
using namespace std;

void selectionSort(int n, int arr[], int k){
   for(int i=0; i<k; i++){
     int smallestindex=i;
   for(int j=i+1; j<n; j++){
    if(arr[j]<arr[smallestindex]){
        smallestindex = j;
     }
   }
    swap(arr[i], arr[smallestindex]);
  }
}

void showselectionsort(int n, int arr[], int k){
for(int i=0; i<n; i++){
      cout << arr[i] << " ";
   }

}

void insertionsort(int n, int arr[]){
   for(int i=1; i<n; i++){
     int currentValue=arr[i];
     int preValue=i-1;

   while(preValue>=0 && arr[preValue] > currentValue){
      arr[preValue+1]=arr[preValue];
      preValue--;
   }

   arr[preValue+1]= currentValue;

   }

}

void showinsertionsort(int n, int arr[]){
   for(int i=0; i<n; i++){
    cout << arr[i] << " ";
   }
   cout << endl;
}


int main(){

  int n, k;
  cout << "Enter number: " << endl;
  cin >> n;

  int* arr= new int[n];

  for(int i=0; i<n; i++){
      cin >> arr[i];
  }
  cin >> k;

  selectionSort(n, arr, k);
  cout << "After selection sort: ";
  showselectionsort(n, arr, k);

  cout << endl;

  insertionsort(n, arr);
  cout << "after final sorted array: " << endl;
  showinsertionsort(n, arr);

}
