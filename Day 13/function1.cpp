#include <iostream>

using namespace std;

void sayHi(){
    string user;
    int age;
    cout << "Enter Your Name : ";
    cin >> user;

    cout << "enter your age";
    cin >> age;

    cout << " Your name is " << user << " you are " << age << " Years old";
}

int main(){

    sayHi();
}