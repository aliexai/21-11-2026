#include<iostream>
using namespace std;
int main(){
    int current_destination{0},max_step{0},destination{0},minimum_step{0},modulus{0},divid{0};
    cout<<"Enter your Destination :";
    cin>>destination;
    cout<<"Enter Max step per move :";
    cin>>max_step;
    divid = destination/max_step;
    modulus = destination%max_step;
    minimum_step = divid + modulus;
    cout<<"Minimum Moves are Required : "<<minimum_step<<endl;
    return 0;
}