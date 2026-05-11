#include<iostream>
using namespace std;

int main(){
      int n,temp,reverse=0,remainder;

      cout<<"Enter a number: ";
      cin>>n;

      temp=n;

      while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
      }

      if(temp==reverse){
        cout<<"Palindrome";
      }
      else {
        cout<<"Not Palindrome";
      }

    return 0;
}