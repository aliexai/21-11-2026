#include<iostream>
using namespace std;
int main(){
    int totaL_days{0},week{0},day{0};
    cout<<"Enter the Total Number of Days :";
    cin>>totaL_days;
    week=totaL_days/7;
    day=totaL_days%7;
    cout<<week<<" Weeks "<<day<<" Days"<<endl;
    return 0;
}