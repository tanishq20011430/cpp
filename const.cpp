#include<iostream>
using namespace std;
class rect{
    private:
    float area,l,b;
    public:
    void read(){
        cout<<"enter length and bredth :\n";
        cin>>l>>b;
    }
    rect() // default constructor
    {
    
    }
    rect(float x,float y){   //parametarzed constructor
        l=x;
        b=y;
    }
    rect(rect & obj){  //copy constructor
       l = obj.l;
       b = obj.b;
    }
    void print(){
        area = l*b;
        cout<<"\narea of rectangle=\n"<<area<<endl;
    }
};
int main(){
    rect r;
    rect r_1(50,100);
    rect r_2 = r_1;
    r.read();
    r.print();
    r_1.print();
    r_2.print();
    return 0;
}