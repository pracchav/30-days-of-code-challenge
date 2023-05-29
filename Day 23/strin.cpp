#include <iostream>

using namespace std;

int main(){

    // this is basically for storing strings.
    string name;

    cout << " Enter Your Name Please : ";

    getline(cin, name);

    cout << " Hello " << name <<" You are a good programmer." << endl;
}