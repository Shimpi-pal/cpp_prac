//Rotate the given array 'a' by k steps, where k is non-negative number.
// k can be greater than n as well where n is the size of array 'a'.
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of element:";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int k;
    cout<<"enter the value of k:";
    cin>>k;
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
