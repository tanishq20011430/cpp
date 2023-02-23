#include<iostream>
using namespace std;
// compile time polymorphism
class A{
    float a,b;
    public:
    void show(int x,int y){
        a = x;
        b = y;
        cout<<a<<" "<<b<<endl;
    }
    void show(float x,float y){
        a = x;
        b = y;
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    A obj,obj2;
    obj.show(5,6);
    obj2.show(5.5f,12.3f);
    return 0;
}