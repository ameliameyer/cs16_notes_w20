// divisible by 3 is "fizz"
// divisible by 5 is "buzz"
// divisible by both is "fizzbuzz"
// divisible by neither is just a return of the number entered

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num%3 == 0 && num%5 == 0){
        cout<<"fizzbuzz"<<endl;
    }else if(num%3==0){
        cout<<"fizz"<<endl;
    }else if(!(num%5)){
        cout<<"buzz"<<endl;
    }
    else{
        cout<<num<<endl;
    }
    return 0;
}
// there are obviously several different ways to go about writing code for this game

// look up scp
// rm deletes files forever