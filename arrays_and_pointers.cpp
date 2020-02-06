#include <iostream>
using namespace std;

// References are nicknames for other variables
// Modify variables that are outside the scope of a function
// Passed those variables by reference into other functions
// Pointers: similar to references, except 
// A pointer is a separate entity whereas reference is a nickname

// NEW TOPICS
// Arrays in C++: Python: Lists
// Arrays are related to pointers 
// char arrrays vs c-strings vs string

int main(){

    int x;
    int *p; // A different entity in memory
    p = &x; // p stores the address of x, so p is pointing to x
    *p = 5; // modifying x indirectly using p 
    // *p means to go to the thing p is pointing to
    // *p == x
    // Pointers can be thought of as mutable references 

    //Arrays
    // An array is a list of elements of the same type
    // Examples:
    int scores[10]; // In the [] you have to commit to the size
    // Array declaration ^
    char name[5]; // name can only store 5 characters

    int numArray[]={10,50,90,100}; // Declare and initialize

    cout<<numArray[2]<<endl; // 90
    cout<<numArray<<endl; // Gives you a memory location 
    // The name of the array is synonymous with address of element 0

    // Iterate through an array in two ways
    // First way, using older C++ notation
    for (int i = 0; i < 4; i++){
        cout<<numArray[i]<<" ";

    }
    // Second way, using range based for loop C++11
    for(int item: numArray){
        cout<<item<<" "; // prints each element of the array
    }
    
    return 0;
}