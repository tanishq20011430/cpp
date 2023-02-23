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
    cout<<"Enter value"<<endl;
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
        cout<<"Enter value"<<endl;
        cin>>a_>>b_;
    }
    void print(){
        c_=a_-b_;
        cout<<"Substraction is : "<<c_<<endl;
        }
};
class D:public B,public C{
    public:
    int mul,div;
    void print(){
        mul=b*b_;
        div=b/b_;
        cout<<"Multiplication is : "<<mul<<endl;
        cout<<"Division is : "<<div<<endl;
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