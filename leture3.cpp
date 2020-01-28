//functions
#include <iostream>

using namespace std;

/* Definition of a function*/
void printHello(){
    cout<<"Hello"<<endl;
    // You could also do cout<<"Hello\n";
    // A function that doesn't return anything is 'void'
}

string returnHello(){
    string res = "Hello";
    return res;

    // A function that does return needs to have "return" at the end to specify what is being returned
}

void printFiveHellos(){
    int count =0;
    while(count < 5){
        cout<<"Hello\n";
        count++;  // Or count = count + 1
    }
}

void printNHellos(int N){
    int count = 0;
    while (count < N){
        cout<<"Hello\n";
        count++; 
    }
}

/* Write a function that returns the sum of the series 
1 + 1/2 + 1/3 + 1/4 + ... + 1/N
For a parameter (int N)
The return value has to be a double
*/

double sumSeries(int N);

int main(){
    printHello();  // Calling the function
    returnHello();
    /* 
    A.  Hello
        Hello
    B.  Hello             // The right answer because when you say return, it returns a string but doesn't print it 
    C.  Something else
    */
    /* Your functions have to be declared before your int main because the compiler goes in order for translation*/
    // Could declare the function without the code-a forward declaration- just to make sure that you can define it 

    printNHellos(6);

    return 0;
}