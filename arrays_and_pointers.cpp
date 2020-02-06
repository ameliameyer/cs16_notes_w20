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
    cout<<endl;
    // Second way, using range based for loop C++11
    for(int &item:numArray){
        item = 10;
        // if you change item, you won't change anything in the array unless you
        // put an ampersand in front of item
        // otherwise it's just a copy 
    }

    for(int item:numArray){
        cout<<item<<" "; // prints each element of the array

    // Need to know how to iterate through arrays
    // More difficult when dealing with arrays of characters 

    string name = "Diba"; initializing a strings
    // you'll have an extra character called the null terminator in the case of the string
    for (int i = 0; i <= name.length(); i++){
        cout<<name[i];
        if (name[i] == 0){
            cout<<"\nReached the end of the string"<<endl;
        }
    // if you initialize char like the following
    // char country[] = "USA"; // a c-string  - char array where the last element is a null
    // it's easier but you have a null terminator so it has a length of 4 because double quotes
    
    }
    cout<<endl;

    char pet [] = {'D','i','b','a'};
    // could do
    name = name + " Mirza";
    // but you cannot do
    // pet = pet + " Mirza"; 
    // because you're adding a string to a char

    cout<<"Length of "<<name<<" "<<name.length()<<endl;

    // Useful for h06
    cout<<"Size of pet "<<sizeof(pet)<<endl; // Gives the size of the array in bites
    // number of elements in your char array
    // if it was integers, it would be multiplied by 4 because an integer is 4 bytes
    cout<<"Size of pet "<<sizeof(pet)/sizeof(char)<<endl;
    // because pet is the address of element 0, it acts as a pointer
    *pet = 'A'; // Change element 0 of pet to 'A'
    // Cannot change the pointer itself
    char *q = &pet[1];
    // q is a pointer of a character and making it point to a particular character in the array
    // so q is pointing to i 
    cout<<*q<<endl; // would print out 'D'
    q = pet; // pet is a pointer, take that address and store it in q, now q is pointing to element 0
    // cannot say pet = something else cause it'll always be the adress of element 0

    return 0;
}