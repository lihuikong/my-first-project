#include<iostream>
using namespace std;

int main(){
    int a=10,b=20,c=50;
    const int *str=&a;
    int *const sdr=&b;
    str=&c;
    *sdr=30;
    cout<<*str<<"\n";
    cout<<*sdr<<"\n"<<endl;
    return 0;
}
//const int *为指向常量的指针，可以更改指针朝向，不能通过指针更改数值。
//int *const为常量指针，不可以更改指针朝向，但是可以通过指针更改数值。