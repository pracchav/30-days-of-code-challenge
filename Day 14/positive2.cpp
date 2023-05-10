# include <iostream>
using namespace std;

int main(){

    int a, b;
    
    cout << "Enter the value of a: ";
    cin >> a;

    if(a>0){
        cout << "A is Positive " << endl;
    }

    else{
        if(a<0){
            cout << "A is Negative " << endl; 
        }
        
        else{
            cout << "A is 0" << endl;
        }
    }
}