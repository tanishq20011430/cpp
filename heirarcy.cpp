#include<iostream>
using namespace std;
class A{
    public:
    int a;
};
class B:public A{
    public:
    int b,c;
    void read(){
        cout<<"enter value\n";
        cin>>a>>b;
    }
    void print(){
        c=a+b;
        cout<<"Addition : "<<c;
    }
};
class C:public A{
    public:
    int d,e;
    void read(){
        cout<<"Enter value : ";
        cin>>a>>d;
    }
    void print(){
        e=a-d;
        cout<<"Substraction : \n"<<e;
    }
};
int main(){
    B b;
    C c;
    b.read();
    b.print();
    c.read();
    c.print();
    return 0;
}
