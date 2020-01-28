#include <iostream>
using namespace std;

void bar (int x){
    x = x + 5;
}

int main(){
    int y = 0   // y is a local variable of main so you cannot refer to y outside of the main function
    bar(y);
    cout<<y;
    return 0;
}

// What is printed by this code?
// 0 because it didn't reset the value of y ]