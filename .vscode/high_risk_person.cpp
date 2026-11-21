#include<iostream>
using namespace std;
int main(){
    int age{0};
    bool recived_vaccination;
    cout<<"Enter Your Age :";
    cin>>age;
    if (age<18 || age>65){
        cout<<"Are You Recived required Vaccination ? Answer in (1 for Yes) and (0 for No) -:";
        cin>>recived_vaccination;
        if(recived_vaccination == 0){
            cout<<"You are in high risk for international travel ."<<endl;
        }else{
            cout<<"No Issuse safe for international travel ."<<endl;
        }        
    }
    else{
            cout<<"No Issuse safe for international travel ."<<endl;
    }
    return 0;
}