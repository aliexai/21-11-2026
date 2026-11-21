#include<iostream>
using namespace std;
int main(){
    float overtime_percent{0},total_worked_hours_week{0},hourly_rate_pay{0},more_than_40_percent{0},regular_pay{0},overtime_pay{0},totaly_pay{0};
    cout<<"Enter Employee Total Hours Worked: ";
    cin>>total_worked_hours_week;
    cout<<"Enter Employee Hourly Pay Rate: ";
    cin>>hourly_rate_pay;
    if(total_worked_hours_week <=40){
        regular_pay = total_worked_hours_week*hourly_rate_pay;
        cout<<"Regular Pay : "<<regular_pay<<endl;
        totaly_pay = regular_pay;
        cout<<"Total Pay :"<<totaly_pay<<endl;
    }
    else if (total_worked_hours_week>40){
        more_than_40_percent = total_worked_hours_week -40;
        regular_pay=40*hourly_rate_pay;
        overtime_percent = hourly_rate_pay*(0.5);
        overtime_pay = more_than_40_percent * (hourly_rate_pay+overtime_percent);
        totaly_pay = overtime_pay+regular_pay;
        cout<<"Regular Pay  :"<<regular_pay<<endl;
        cout<<"Overtime Pay :"<<overtime_pay<<endl;
        cout<<"Total Pay    :"<<totaly_pay<<endl;
    }
    return 0;
}