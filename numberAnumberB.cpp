#include<iostream>
using namespace std;
int main(){
    int numbA{0},numbB{0};
    cout<<"Enter Number A :";
    cin>>numbA;
    cout<<"Enter Number B :";
    cin>>numbB;
    if(numbA%numbB == 0){
        cout<<"A is Divsible B ."<<endl;
    }
    else{
        cout<<"A is Not Divsible B ."<<endl;
    }
    return 0;
}