#include <iostream>
using namespace std;

/*
- C++ datatypes and variables
*/

int main() {
    
    int x = 10; // Declare the variable, hence specify what type of variable is going to be stored
    char c = 'a'; // Letters from the alphabet, has to be in single quotes because double quotes are use for strings
    bool var; // True or false
    double z; // floating point numbers
    string name = "Seinfeld"; // Declaring and initializing a variable in one go;
    // If you don't initialize a varible it will contain a junk value
    cout << z; // would print out a junk value, whatever it has stored in memory
    // int 1var=5; is not a useable name because you have to start with a letter or an _ and you can't use keywords
    int year = 2020;  
    z = 1/10; // If all of the things involved are integers, c++ rounds the result to be an integer
    // so the value of 1/10 is actually 0, not 0.1
    // However, if you say 
    z = 1.0/10; // then your value would be 0.1 
    bool w = true; 
    w = x==10; // A boolean expression because you call == a relational operator
    // other operators are >=,<=,!=,<,> 
    // x==10 would be true rn because we've established that x=10
    w = x;
    /* What result you would you get from this? true or false?
    it would be true because x!=0
    int is a higher precedecne than boolean so if you store int in bool, that int will be interpreted as a boolean value
    anything that evaluates to 0 is considered false
    if you wrote w=0, you'd be setting w to false, all other values evaluates to true*/
    w = -1; // w is true
    w = 0; // w is false
    w = x<-1 // w is false because of the comparison
    // logical operators NOTANDOR otherwise known as && (AND), || (OR), ! (NOT)
    // you have to use the symbols
    w = false;
    w = !w;
    w = true && true; // true
    w = x && true; // true
    w = x && x < -1; // false
    // look back over precedence 
    if (x<0){
        cout<<x<<" is negative"<<endl; 
    }else{
        cout<<x<<" is positive"<<endl;
    }
    x = 9;
    x = x % 3;
    /* 
    Assume x is an integer
    A. x/3 == 0
    B. !(x%3)
    C. x%3 == 0
    D. Either B or C              Richtig  
    E. None of the above
    
    if (  ){
        cout<<x<<"is divisible by 3 \n";
    }
     */

    /*
    if (x>0){
        pet = dog;
        count++;
    }else{
        pet = cat;
        count++;
    }

    to write it in a more compact way (or to refactor):
    if (x>0){
        pet=dog;
    }else{
        pet=cat;
    }
    count++
    
    OR:
    pet = cat;
    if (x>0){
        pet=dog;
    }
    count++;
    */

   //Input from user using cin
   int x;
   count<<" Enter a number"<<endl;
   cin>>x; 

    // We want to code up a game called Fizzbuzz
     


    return 0;
}