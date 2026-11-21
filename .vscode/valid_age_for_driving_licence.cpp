#include<iostream>
using namespace std;
int main(){
    int age{0};
    cout<<"Enter Your Age :";
    cin>>age;
    if(age>=18){
        cout<<"eligible"<<endl;
    }
    else{
        cout<<"not eligible"<<endl;
    }
    return 0;
}