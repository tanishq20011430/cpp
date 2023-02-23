#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enetr any number";
    cin>>n;
    if(n%2==0)
    goto even;
    else
    goto odd;
    even:cout<<"even";
    exit(1);
    odd:cout<<"odd";
    return 0;

}