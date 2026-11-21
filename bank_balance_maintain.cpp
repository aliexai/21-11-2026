#include<iostream>
using namespace std;
int main(){
    float balance{0};
    cout<<"Enter the Your Balance :";
    cin>>balance;
    if(balance>=10000){
        cout<<"good"<<endl;
    }
    else{
        cout<<"Bank Balance is Minimum 10,000 and Reduction will apply ."<<endl;
    }
    return 0;
}