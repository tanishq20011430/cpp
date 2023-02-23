#include<iostream>
using namespace std;
int main(){
    int a,b,*p,*q,temp;
    p = &a;
    q = &b;
    cout<<"enter value to swap\n";
    cin>>a>>b;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    // now swap 
    temp = *p;
    *p = *q;
    *q = temp;
    cout<<"After swapping using pointer\n";
    cout<<"a="<<*p<<" "<<"b="<<*q;
    return 0;
}