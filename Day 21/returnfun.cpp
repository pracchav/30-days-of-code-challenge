#include <iostream> 

using namespace std;

double cube (double num){

    double result = num * num * num;

    return result; // this can be return to the main function.
}

int main(){

    cout << cube(5.0); 

    return 0;
}