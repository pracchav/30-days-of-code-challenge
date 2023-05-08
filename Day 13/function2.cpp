#include <iostream>

using namespace std;

void sayHi(string user, int age){

    cout << " Your name is " << user << " you are " << age << " Years old" << endl;
}

int main(){

    sayHi("mike" , 35);

    sayHi("sam" , 21);

    sayHi("nat" , 12);

    sayHi("nathon" , 42);
    
    sayHi("tom" , 25);
}