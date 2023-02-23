#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.";
    cin>>n;
    if(n%2==0)
    goto even;
    else
    goto odd;
        
        even:
        cout<<"even";
        odd:
        cout<<"odd";

return 0;
}