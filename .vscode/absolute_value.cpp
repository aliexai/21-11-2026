#include<iostream>
using namespace std;
int main(){
    float numb{0};
    cout<<"Enter a Number :";
    cin>>numb;
    if (numb<0){
        numb = - numb;
        cout<<"Your Number is : "<<numb<<endl;
    }
    else{
        cout<<"Your Number is : "<<numb<<endl;
    }

}