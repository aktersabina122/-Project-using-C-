#include <iostream>

using namespace std;

int main() {

    float num1,num2,num3;
    float sum,diference,multi,dev;

    cin>>num1;
    cin>>num2;
    cin>>num3;

    sum=num1+num2+num3;
    diference = num1-num2-num3;
    multi=num1*num2*num3;
    dev=num1/num2;

    cout<<"sum :"<<sum<<endl;
    cout<<"diference :"<<diference<<endl;
    cout<<"multiplication :"<<multi<<endl;
    cout<<"Devision : "<<dev;


return 0;

}
