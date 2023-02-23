#include <iostream>
using namespace std;
class even_odd
{
    private:
    int a;
    public:
    void input(){
        cout<<"enter any number:";
        cin>>a;
    }
    void show(){
        if(a%2==0)
            cout<<"even";
        else
            cout<<"odd";
    }
};
int main() {
    even_odd n;
    n.input();
    n.show();
    return 0;
}