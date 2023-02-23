//multilevel inheritance
#include<iostream>
using namespace std;
class A{                   //base class
public:
int a;
};
class B:public A{          //child class for A and base class for C
    public:
    int b;
    void read(){
    cout<<"Enter value\n";
    cin>>a>>b;
    }
};
class C:public B{          //child class
    public:
    int c;
 
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
