#include<iostream>
using namespace std;

int main(){
  int n;
  bool isPrime= 1;

  cout << "Enter a number: "<< endl;
  cin >> n;
  for(int i=2; i<n-1; i++){
    if(n%i==0){
        isPrime=false;
        break;
    }
    
  }
  if(isPrime==true){
    cout << "prime number" << endl;
  }
  else{
    cout << "Non prime number" << endl;
  }
}