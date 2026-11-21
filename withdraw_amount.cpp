#include<iostream>
using namespace std;
int main(){
    float balance{500},amount{0},calc{0};
    cout<<"Enter Your Withdraw Amount :";
    cin>>amount;
    calc = amount - balance;
    if (calc >=500){
        cout<<"Withdraw Successful !"<<endl;
    }
    else{
        cout<<"Sorry Your Balance is Minimum !"<<endl;
    }
    return 0;
}