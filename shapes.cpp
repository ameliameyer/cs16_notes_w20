#include <iostream>
using namespace std;

// Midterm is next week
// Practice loop: nested loops

// Test-drive development: think about the testing first
// In life outside CS16, there is no Gradescope

/*
    width = 1
    *
    width = 2
    **
    **
    width = 3
    ***
    ***
    ***
*/

// stub function 
string drawSquare(int width){
    // Generating a single row
    string result = "";
    /*
    for (int i = 0; i < width; i++){
        result += "*";
    }
    result += "\n";
    string finalResult = "";

    for(int i = 0; i < width; i++){
        finalResult += result;
    }
    return finalResult;
    */

    /*
    for (int row = 0; row < width; row++){
        for (int col = 0; col < width; col++){
            cout<<"( "<<row<<", "<<col<<" )"<<endl;
    }
    return "";
    // You're generating the coordinates of the * 's 
    // (0, 0)
    // (0, 1)
    // (1, 0)
    // (1, 1)
    */

     for (int row = 0; row < width; row++){
        for (int col = 0; col < width; col++){
            result+="*";
        }
        result+="\n";
        }
}

string drawRTriangle(int width){
    for (int row = 0; row < width; row ++){
        for (int col = 0; col < width; col++){
            if(col <= row){
                result += "*";
            }else{
                result += "-";
            }
    }
    result += "\n";
}

string drawTriangle(int width){
    // Precondition is width >= 3
    string result = "";
    if (width % 2 == 0){
        return result;
    }else{
        int height = (width +1)/2; 
        // Change the initialized values of numspaces and numstars based on width
        int numspaces = 2;
        int numstars = 1;
        for(int row = 0; row < height; row++){
           for(int spaces = 0; spaces < numspaces; spaces++){
               result+="-";
           }
           for(int star = 0; star < numstar; star++){
               result+="*";
           }
           for(int spaces = 0; spaces < numspaces; spaces++){
               result+="-";
           }
           numspaces -= 1;
           numstars+=2;
        }
        result += "\n";
    }
    return result;
}

void test_square(){
    cout<<"drawSquare(1):\n"<<drawSquare(1)<<endl;
    cout<<"drawSquare(2):\n"<<drawSquare(2)<<endl;
    cout<<"drawSquare(3):\n"<<drawSquare(3)<<endl;
    cout<<"drawSquare(4):\n"<<drawSquare(4)<<endl;
    cout<<"drawSquare(5):\n"<<drawSquare(5)<<endl;
    cout<<"drawSquare(6):\n"<<drawSquare(6)<<endl;
}
void test_RTriangle(){
    cout<<"drawRTriangle(3):\n"<<drawRTriangle(3)<<endl;
}

void test_Triangle(){
    cout<<"drawTriangle(3):\n"<<drawTriangle(3)<<endl;
}

int main(){

    // Testing
    // Call for different values of width
    // Want to run a series of tests
    test_square();
    test_RTriangle();
    
    return 0;
}
