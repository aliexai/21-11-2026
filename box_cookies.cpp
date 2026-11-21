#include<iostream>
using namespace std;
int main(){
    int box{24},container{75},cookies{0},box_cookies{0},modulus_cookies{0},container_for_box{0},modulus_container{0};
    cout<<"Enter the Number of Cookies :";
    cin>>cookies;
    box_cookies=cookies/24;
    modulus_cookies=cookies%24;
    container_for_box=box_cookies/75;
    modulus_container=box_cookies%75;
    cout<<box_cookies<<" Number of Box for Cookies and "<<container_for_box<<" Number of Containers for the Boxes"<<endl;
    cout << "Leftover Cookies: " << modulus_cookies << endl;
    cout << "Leftover Boxes: " << modulus_container << endl;
    return 0;
}