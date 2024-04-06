#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"enter the value of n:";
    cin>>n;
for(int i=0;i<n;i++){
    int value;
    cin>>value;
    v.push_back(value);
}
    int x;
    cout<<"enter the value of x:";
    cin>>x;
    int occurrence=0;
for(int i=0;i<v.size();i++){
    if(v[i]==x){
        occurrence++;
    }
}
    cout<<occurrence<<endl;
    return 0;
}
