#include<iostream>
using namespace std;
int main(){
    int current_position{0},size_of_circle{0},move_of_circle{0},sum{0},modulus{0};
    cout<<"Enter the size of circle :";
    cin>>size_of_circle;
    cout<<"Enter the Current Position :";
    cin>>current_position;
    cout<<"Enter the Move of Circle :";
    cin>>move_of_circle;
    sum= current_position+move_of_circle;
    modulus = sum%size_of_circle;
    cout<<"Person Positon after "<<move_of_circle<<" Moves of Circle : "<<modulus<<endl;
    return 0;
}