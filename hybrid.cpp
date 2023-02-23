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
        cout<<"enter value\n";ppo
        cin>>a>>b;
    }
    void print(){
        c=a+b;
        cout<<"Addition : "<<c<<endl;
    }
};
class C:public A{
    public:
    int d,e;
    void read(){
        cout<<"Enter value : "<<endl;
        cin>>a>>d;
    }
    void print(){
        e=a-d;
        cout<<"Substraction : "<<e<<endl;
    }
};
class D:public B,public C{
    public:
    int m;
    void print(){
        m=c*e;
        cout<<"Multiply is : "<<m<<endl;
        }
};
int main(){
    B b;
    C c;
    D d;
    b.read();
    b.print();
    c.read();
    c.print();
    d.print();
    return 0;
}
