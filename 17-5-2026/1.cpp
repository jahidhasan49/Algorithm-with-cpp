#include<iostream>
using namespace std;

void gradePoint(int n, int arr[]){
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

void showgradepoint(int n, int arr[]){
   for(int i=0; i<n; i++){
    cout << arr[i] << " ";
   }
   cout << endl;
}

int main(){
  int n;
  cout << "Enter number: " << endl;
  cin >> n;

  int arr[n];

  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  gradePoint(n, arr);
  showgradepoint(n, arr);
}
