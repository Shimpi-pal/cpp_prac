//find the last occurence of an element x in a given array.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"enter the number of element:";
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int x;
    cout<<"enter the value of x:";
    cin>>x;
    int occurence=-1;
    for(int i=0;i<v.size();i++){
    if(v[i]==x){
        occurence=i;
      }
    }
    cout<<occurence<<endl;
return 0;
}
