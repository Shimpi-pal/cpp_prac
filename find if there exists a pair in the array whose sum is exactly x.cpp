#include<iostream>
using namespace std;
int main(){
int array[]={1,2,3,4,5,6,7,8};
int n=8;
int x=15;
int i=0;
int j=n-1;
bool value=false;
while(i<j){
    if(array[i]+array[j]==x){
        value=true;
        break;
    }
    else if(array[i]+array[j]<x){
        i++;
    }
    else{
        j--;
    }
}
if(value==true)cout<<"YES";
else cout<<"NO";
return 0;
}
