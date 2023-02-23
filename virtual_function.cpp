#include<iostream>
using namespace std;
/* syntax-> abstract class
class a{
    public:
    virtual void show()=0
};
*/
class A{
    public:
    virtual void show()=0;
    void display(){
        cout<<"Base class\n";
    }
};
class B:public A{
    public:
    void show(){
        cout<<"derived class";
    }
};
int main(){
    B obj;
    A *p;  //we create a ppointer for class A
    p =&obj;
   // p->show();  //using pointer
    p->display();
   // obj.display();//base class
    //obj.show();//derived class

}