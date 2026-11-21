#include<iostream>
using namespace std;
int main(){
    int age{0};
    bool driver_course,vision_test;
    cout<<"Enter Your Age :";
    cin>>age;
    if(age>=16){
        cout<<"Have you completed driver's Education Course ? Answer in (1 for Yes) and (0 for No) -: ";
        cin>>driver_course;
        if(driver_course == 1){
            cout<<"Are you Passed the Vision Test ? Answer in (1 for Yes) and (0 for No) -: ";
            cin>>vision_test;
            if (vision_test == 1){
                cout<<"You are Eligible for Driving Licence !"<<endl;
            }
            else
            {
                cout<<"You are Not Eligible for Driving Licence !"<<endl;
            }
            
        }
        else
            {
                cout<<"You are Not Eligible for Driving Licence !"<<endl;
            }
    }
    else
            {
                cout<<"You are Not Eligible for Driving Licence !"<<endl;
            }
    return 0;
}