// References, pointers, passing parameters to functions
/*
void swapValue(int x, int y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int a = 30, b = 40;
    cout<<a<<" "<<b<<endl;
    swapValue(a,b);
    cout<<a<<b<<endl;
}

// this function does not swap a and b because it passes copies
// of a and b rather than a and b themselves
*/

// References in C++
// A type of variable that is a nickname for another variable

#include <iostream>
using namespace std;

/*
int main(){
    int d = 5;
    int &e = d;
    // &e, the & says that e is just another name for d
    // They are essentially the names of the same box in memory
    // That's how you declare and initialize a reference
}
*/

void swapValue(int &x, int &y){
    int tmp = x;
    x = y;
    y= tmp;
}

/*
void foo (int &x){
    x = 42;
}
*/

int main(){

    /*
    int y = 0;
    foo (y);
    int &x = y;
    cout<<y;
    */
    int a = 30; b =40;
    swapValue(a,b);
    cout<<a<<" "<<b<<endl; 
    // After putting the ampersands in the swapValue function definition, it works!

    return 0;
    // Will return 0 not 42 because x is a copy of y 
    // Only changing the copy of y not y
    // You have to make x a reference variable
    // Then if you do anything to x, it changes y and vice versa
    // Passing information to functions: pass by reference
}

// Use reference to pass a large amount of data, a huge object into a function

// 1: solved a problem: needed to access local variables without using the name of
// the variables
// 2: efficiency
// These are the two reasons for using references

// Pointer - a variable that contains the address of another variable 
// Declaration: type* pointer_name;
// Example: int* p;
// Declaring p to be a kind of variable that stores the memory location of an int
// Only if you cannot solve the problem with references do you use pointers
// P will store the memory location of an integer

// The value of p is the address of another integer
// P doesn't contain the address of an integer when you declare it
// You have to set the value or you'll have a junk value

// int* p;
// int y = 3;
// To get the location of a variable use &
// p = &y;
// Assign the address of an integer to p
// After you make a pointer point to another thing
// You can access it through the pointer
// *p is the same as y 
// cout << p; is 112
// cout &y; is 112
// cout << &p is 100
// cout << *p; is 3
// Called de-referencing a pointer
// References are stuck, but pointers are not

/*
int *p;
p = &y;  // get the address and intialize p to point to y
*/

/*
int *p, y;
y =3;
p = &y;
*p = 5;  // changes the value of y 
// To get to y you need to access the pointer of p using *p because p gives the address
*/

/*
void swapValue(int* x, int* y){
    int tmp = x;
    x = y;
    y =tmp;
}

int main(){
    int a = 30, b = 40;
    swapValue (&a, &b);
    cout<<a<<" "<<b<<endl;

}

*/