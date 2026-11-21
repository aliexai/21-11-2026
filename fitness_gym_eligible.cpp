#include<iostream>
using namespace std;
int main(){
    int age{0};
    bool medical_condition{};    
    cout<<"Enter Your Age :";
    cin>>age;
    if(age >= 18 && age <=35){
        cout<<"Are you have any Medical Issuse ? Answer in (1 for Yes) and (0 for No) -: ";
        cin>>medical_condition;
        if(medical_condition == 0){
            cout<<"You Qualify for Fitness Program !"<<endl;
        }
        else{
        cout<<"You are Not Qualify for Fitness Program !"<<endl;}
    }
    else{
        cout<<"You are Not Qualify for Fitness Program !"<<endl;
    }    
    return 0;
}