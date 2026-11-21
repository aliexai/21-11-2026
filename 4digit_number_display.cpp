#include<iostream>
using namespace std;
int main(){
    int numb{0},divisor{1000};
    cout<<"Enter 4 digit Number :";
    cin>>numb;
    while(divisor>=1){        
        cout<<numb/divisor;    
    if (divisor>1){
        cout<<"-";        
    }
    numb = numb%divisor;
    divisor= divisor/10;
    }
    return 0;
}