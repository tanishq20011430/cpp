#include<iostream>
using namespace std;
class base
{
    public:
    virtual void print(){
        cout<<"print base class"<<endl;
    }
    void show(){
        cout<<"show base class"<<endl;
    }
};
class derived:public base{
    void print(){
        cout<<"print derived"<<endl;

    }
    void show(){
        cout<<"show derived"<<endl;
    }
};
int main(){
    base *bptr;
    derived d;
    bptr = &d;
    bptr->print();     //when we access function using pointer we use " ->" symbol
    bptr->show();
    return 0;
}