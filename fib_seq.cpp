#include<iostream>
using namespace std;
int fib(int n){
    int a=0 ,b=1 ,c;
    cout<<a<<" "<<b<<" ";
    for (int i=2;i<n;i++){
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}
int main(){
    int num;
    cout<<"enter the number of terms to be printed : ";
    cin>>num;
    fib(num);
    return 0;
}