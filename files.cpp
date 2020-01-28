// Two ways of providing inputs: cin, command line arguments, read from file
// Ways to output data: cout, cerr, write to file 
// Command line arguments go to the main function
// Program and file are both in memory  

#include <iostream>
#include <fstream>
using namespace std;

/* Writing to a file
int main(){

    ofstream ofs; // Create a ifstream object, making the local variable ofs
    // ofstream is a type 
    ofs.open("animals.txt"); // Open a file to write, will create that file if it doesn't 
    // already exist and establish a pipe between them
    ofs<<"Duck\n"<<"Cat\n"<<"Cow\n"; // The use is similar to cout as you can see
    ofs.close();

    return 0;
}
*/

int main(){
    ifstream ifs; // Create a ifstream object
    ifs.open("number.txt"); // Open a file to read
    if(!ifs){
        // open failed
        cerr<<"File does not exist"<<endl;
        exit();
    }
    getline(ifs, line); // Read a line from the file into a string line
    // If you attempt to read past the end of file, ifs change to false
    // ifs is ifstream and line is a variable of type string 

    cout<<line; 

    ifs.close();

    // if we want to read until the end of the file
    /*
    while(ifs){
        getline(ifs,line);
        cout<<line<<endl;
    }
    if you attempt to read past the end of the file, only then will ifs become false
    so you actually have to do one more read than number of lines
    */
    
    return 0;
}