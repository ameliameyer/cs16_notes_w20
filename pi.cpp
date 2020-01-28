#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit): "<<endl; 
    cin>>n;

    double result;
    cout.setf(ios::fixed); 	   
    cout.setf(ios::showpoint); 
    cout.precision(3); 

    while (n>= 0){
        result = 4;
        for(int i = 1; i<=n; i++){
            result = result + 4*(pow(-1.0,i)/(2*i+1));
        }
    if(n +1 == 1){
        cout<<"The approximate value of pi using "<<n + 1<<" term is: "<<result<<endl;
    }else{
        cout<<"The approximate value of pi using "<<n + 1<<" terms is: "<<result<<endl;
    }
    cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit): "<<endl;
    cin>>n;
    }

    return 0;

}