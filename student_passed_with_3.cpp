#include<iostream>
using namespace std;
int main(){
    float math{0},english{0},science{0};
    cout<<"Enter Your Math Marks :";
    cin>>math;
    cout<<"Enter Your English Marks :";
    cin>>english;
    cout<<"Enter Your science Marks :";
    cin>>science;
    if((math >= 50 || english >=50 )&&(science>=40)){
        cout<<"Congratulation You are Passed"<<endl;
    }
    else{
        cout<<"Sorry Try Again"<<endl;
    }
}