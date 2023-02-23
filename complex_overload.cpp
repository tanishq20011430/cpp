#include<iostream>
using namespace std;
class complex{
    private:
    float real,imag;
    public:
    complex():real(0),imag(0){}//constructor
    void input(){
        cout<<"enter real and imaginary number :";
        cin>>real>>imag;
    }
    //operator overloading
    complex operator +(complex c2){
        complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
    void output(){
        if(imag < 0)
        cout<<"output complex number: "<<real<<imag<<"i";
        else
        cout<<"output complex number: "<<real<<"+"<<imag<<"i";
    }
};
int main(){
    complex c1,c2,result;
    cout<<"enter first complex number : \n";
    c1.input();

    cout<<"enter second complex number : \n";
    c2.input();

    result = c1+c2;
    result.output();
    return 0;
}