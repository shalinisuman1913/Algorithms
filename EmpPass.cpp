#include<iostream>
using namespace std;
int main(void)
{
    int x,d,i,s;
    cin>>x;d=x%5000;
    for(i=0,s=0;i<50 && s<d;s+=i,i++);
    cout<<"Day: "<<i;
    x-=d;
    x/=5000;
    x-=i;
    cout<<"\nEmloyee: "<<x;
}
