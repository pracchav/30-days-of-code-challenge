# include <iostream>
using namespace std;

int main(){
    
    int LuckyNames[20] = {4, 8, 23, 45, 23, 42, 15};
    
    cout << LuckyNames[3] << endl;
    
    LuckyNames[0] = 15; // asign a different values.

    LuckyNames[10] = 100; // adding alues is given array.

    cout << LuckyNames[0] << endl;

    cout << LuckyNames[10] << endl;
}