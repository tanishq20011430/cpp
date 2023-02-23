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
        cout<<"enter value : "<<endl;
        cin>>a>>b;
    }
    void print(){
        c=a+b;
        cout<<"Addition is : "<<c<<endl;
    }
};
class C{
    public:
    int a_,b_,c_;
    void read(){
        cout<<"Enter valuee : ";
        cin>>a_>>b_;
    }
    void print(){
        c_=a_+b_;
        cout<<"Addition is : "<<c_<<endl;
    }
};
class D:public B,public C{
    public:
    //int x;
    void print(){
       // x=c+c_;
        cout<<"Final Addition is : "<<c<<c_<<endl;
    }
};
int main(){
    C c;
    B b;
    D d;
    b.read();
    b.print();
    c.read();
    c.print();
    d.print();
    return 0;
}