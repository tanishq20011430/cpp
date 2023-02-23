/*#include<iostream>
using namespace std;
// two types of operator overloading 
//unary operator overloading
//binary operator loading
//
class demo{
    int a,b;
    public:
    demo(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"A"<<" "<<a<<" "<<"B"<<" "<<b<<endl;
    }
    void operator -(){
        a=-a;
        b=-b;
    }
};
int main(){
    demo o(10,-20);
    o.show();
    -o;
    o.show();
    return 0;
}
*/


//operator overloading using friend function..........
#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    void show(){
        cout<<"A"<<" "<<a<<" "<<"B"<<" "<<b<<endl;
    }
    friend void operator -(demo &obj);
};
void operator -(demo &obj){
    obj.a = -obj.a;
    obj.b = -obj.b;
}
int main(){
    demo ob(10,-20);
    ob.show();
    -ob;
    ob.show();
    return 0;
}