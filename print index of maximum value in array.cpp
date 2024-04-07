#include<iostream>
using namespace std;
int maxvalue(int array[],int n){
  int max=array[0];
  for(int i=0;i<n;i++){
    if(array[i]>max){
        max=i;
    }
  }
  return max;
}
int main()
{
   int n;
   cout<<"enter the value of n:";
   cin>>n;
   int array[n];
   for(int i=0;i<n;i++){
    cin>>array[i];
   }
   int maximumvalue=maxvalue(array,n);
   cout<<maximumvalue<<endl;
    return 0;
}
