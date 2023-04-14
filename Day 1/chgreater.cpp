#include <iostream>
using namespace std;

int main(){

/*
    int a;
    
    cout << "Enter a value: ";
    cin >> a;
    
    // cout << " Value of a is " << a << endl; // this is te imple value printing statements.

    if(a>0){
        cout << " A is positive " << endl;
    }
    else{
        cout << " A is Negative " << endl;
    }
    */
   int a, b;

   //cin >> a >>b;
   // a = cin.get();  // this can be give the ASCII values

   cout << "Enter the value of a ";
   cin >> a;

   cout << "Enter the value of b ";
   cin >> b;

   if(a>b){
       cout << "A is Greater" << endl;
   }

   if(b>a){
       cout << "B is greater" << endl;
   }
}