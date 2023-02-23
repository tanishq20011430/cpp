#include<iostream>
using namespace std;
class A{                             //base class
public:
int a;
};
class B:public A{                    //derived class
    public:
    int b,c;
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
    B obj;
    obj.read();
    obj.print();
    
    return 0;
}
