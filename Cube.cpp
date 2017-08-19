#include<iostream>
void recur(int a,int b,int c,int n);
int x=0;
int main(void)
{
    int n;
    std::cin>>n;
    recur(0,0,0,n);
    std::cout<<x;
}
void recur(int a,int b,int c,int n)
{
    if(a==b && b==c && c==n)
        x++;
    if(a<n)
        recur(a+1,b,c,n);
    if(b<n)
        recur(a,b+1,c,n);
    if(c<n)
        recur(a,b,c+1,n);
}

