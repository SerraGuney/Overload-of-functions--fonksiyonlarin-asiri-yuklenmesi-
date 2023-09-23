#include <iostream>
using namespace std;
int area(int number1,int number2){
    return number1*number2;
}
double area(double r){
    double pi=3.14;
    return pi*r*r;
}
int main(){
    cout<<"area1:";
    cout<<area(5,4)<<endl;
    cout<<"area2:";
    cout<<area(2.4);
    return 0;
}

