#include <iostream>
#include <cstdlib>

using namespace std;

// More practice with loops: for loops, nested loops, while 

// 1 + 2 + 3 + ... + n
int sumSeries_1(int n);  // declaration
double sumSeries_2(int n);

// With the parameters of the main function, if you want to pass parameters it only takes one format
// empty or 
int main(int numparams, char* listOfParams[]){
    cout<<"No. of params to main()"<<numparams<<endl;

    cout<<"Sum of the series: 1 + 2 + 3 + ... + 5"<<
        sumSeries_1(n)<<endl;
    int n = atoi(listOfParams[1]);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout<<"Sume of the series: 1 + 1/2"<<
        sumSeries_2(n)<<endl;
    return 0;

    cout<<"listOfParams[0]"<<listOfParams[0]<<endl;
    if(listOfParams != 2){
        cerr<<"Usage"<<listOfParams[0]<<" number"<<endl;
        return 1;
    }else{
        for(int i = 0; i < numparams; i++){
            cout<<listOfParams[i]<<endl;
    }
    }
}

int sumSeries_1(int n){
    int result = 0;
    // n = 3
    for (int i = 1; i <= n; i++){    // i is the loop variable
        result = result + i;
    }
    return result;
}

// 1 + 1/2 + 1/3 + ... + 1/n
// change the variable type (result) to a double and then add in the division signs
double sumSeries_2(int n){
    double result = 0;
    for (double i = 1; i <= n; i++){
        result = result + 1/static_cast<double>(i);
    }
    return result;
}



// use for loops when you have a fixed number of times

// main function needs to take a parameter but it's not supposed to take a parameter

// numparams has the number of parameters include the ./nameoffile

// listOfParams everything is written as a string
// containing the actual parameters
// passed to main
// thing of char* as a string