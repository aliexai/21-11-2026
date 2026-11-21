#include<iostream>
using namespace std;
int main(){
    int val1{0},val2{0},check_val1{0},check_val2{0};
    cout<<"Enter 1st Value : ";
    cin>>val1;
    cout<<"Enter 2nd Value : ";
    cin>>val2;
    check_val1 = val1%2==0;
    check_val2 = val2%2==0;
    if(val1>val2 || (check_val1&&check_val2)){
        cout<<"Locker open"<<endl;
    }
    else{
        cout<<"Locker Blast"<<endl;
    }
    return 0;
}