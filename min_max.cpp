#include<iostream>
using namespace std;
int main(){
    int a[5];
    int min,max;
    cout<<"enter 5 elements in array"<<endl;
    for(int i=0;i<5;++i){
        cin>>a[i];
    }
    cout<<"Inserted numbers are :"<<endl;
    for(int n=0;n<5;++n){
        cout<<a[n]<<" "<<endl;
    }
return 0;
}