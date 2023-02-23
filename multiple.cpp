//Multiple inheriance
#include<iostream>
using namespace std;
class A{                       //base class 1
public:
int a;
};
class B{                       //base class 2
    public:
    int b;
 
};
class C:public A,public B{     //child class
    public:
    int c;
    void read(){
    cout<<"Enter value\n";
    cin>>a>>b;
    }
 
    void print(){
        c=a+b;
        cout<<c;
    }
};
int main(){
    C obj;
    obj.read();
    obj.print();
    
    return 0;
}
