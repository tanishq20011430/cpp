#include <iostream>

using namespace std;
class A
{
    public:
    int a;
};
class B:public A
{
    public:
    int x,y;
     void read()
    {
        cout<<"enter";
        cin>>a>>x;
    }
    void print(){
        y=a+x;
        cout<<y<<endl;
    }
};
class C
{
    public:
    int l,m,n;
  
    void read()
    {
     cout<<"enter value";
     cin>>l>>m;
    }
    void print(){
        n=l-m;
        cout<<n;
    }
};
class D:public B,public C{
    public:
    int r,s;
    void print(){
        r=y*n;
        s=y/n;
        cout<<r<<endl;
        cout<<s<<endl;
        
    }
};
int main()
{
   B b_;
   C c_;
   D d_;
   b_.read();
   b_.print();
   c_.read();
   c_.print();
   d_.print();


    return 0;
}