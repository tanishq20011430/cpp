// it is used to achieve runtime ploymorphism
#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"Eating...";
    }
};
class Dog:public animal{
    public:
    void eat(){
        cout<<"Eating bread...";
    }
};
int main(){
    Dog d = Dog();
    d.eat();
    return 0;
}