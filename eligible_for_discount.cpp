#include<iostream>
using namespace std;
int main(){
    float purchase_amount{0};
    cout<<"Enter Your Purchase Amount :";
    cin>>purchase_amount;
    if(purchase_amount>200){
        cout<<"Eligible For Discount ."<<endl;        
    }    
    else{
         cout<<"Not Eligible For Discount ."<<endl;
    }
    return 0;
}