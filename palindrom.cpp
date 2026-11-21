#include<iostream>
using namespace std;
int main(){
    int numb{0},digit1{0},digit2{0},digit3{0};
    cout<<"Enter 3 digit Number :";
    cin>>numb;
    digit1=numb/100;
    digit2=(numb%100)/10;
    digit3=(numb%100)%10;
    if(digit1 == digit3){
        cout<<numb<<" is Palindrome "<<endl;
    }
    else{
         cout<<numb<<" not is Palindrome "<<endl;
    }
}