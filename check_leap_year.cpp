#include<iostream>
using namespace std;
int main(){
    int leap_year(0);
    cout<<"Enter the Year in Number :";
    cin>>leap_year;
    if((leap_year%4==0&&leap_year%100!=0)||(leap_year%400==0)){
        cout<<"Leap Year ."<<endl;
    }
    else{
        cout<<"Not Leap Year ."<<endl;
    }
    return 0;
}