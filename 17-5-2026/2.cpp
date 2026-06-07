#include<iostream>
using namespace std;

int main(){
   int n;
   cout << "Enter number of employees: " << endl;
   cin >> n;

   int salary[n];

   cout << "Enter salaries: " << endl;
   for(int i=0; i<n; i++){
      cin >> salary[i];
   }

   for(int i=0; i<n-1; i++){
      int maxIndex = i;
      for(int j=i+1; j<n; j++){
         if(salary[j] > salary[maxIndex]){
            maxIndex = j;
         }
      }
      swap(salary[i], salary[maxIndex]);

   }

   cout << "Sorted salaries: ";
   for(int i=0; i<n; i++){
      cout << salary[i] << " ";
   }
}