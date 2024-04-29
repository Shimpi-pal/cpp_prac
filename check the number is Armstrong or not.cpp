#include<iostream>
using namespace std;
int main()
{
    int n,r,t,sum=0;
    cout<<"enter the number:";
    cin>>n;
    t=n;
    while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        n/=10;
    }
    if(t==sum){
        cout<<"Armstrong number";
    }
    else{
        cout<<"not a Armstrong number";
    }
    return 0;
}
