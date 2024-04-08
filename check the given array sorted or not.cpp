#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
     int n;
     cout<<"enter the number of element:";
     cin>>n;
     for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
     }
     bool sortedflag=false;
     for(int i=0;i<v.size();i++){
        if(v[i]<v[i+1]){
           sortedflag=true;        // 1 2 3 4 5
                                    // 0 1 2 3 4
        }
     }
        cout<<sortedflag<<endl;
     return 0;
}
