#include <iostream>
using namespace std;

/*int main(){
    int n;   
    int i=1;

    cout<<"Enter the value: ";
    cin>>n;
 

    while(i<=n){
    cout<<i<<" ";
    i = i+1;
    }
}*/


int main(){
    int n;

    cout<<"Enter the Number: ";
    cin>>n;

    int i = 1;
    int sum = 0;
    cout<<"\n";
    cout<<"\n";
    while(i<=n){

        sum = sum + i;
        i = i + 1;
        cout<<i;
        cout<<"  ";

    }
    cout<<"\n";
    cout<<"\n";
    cout<<"The value of sum is:  "<<sum<<endl;
    cout<<"\n";
}