#include<iostream>
using namespace std;
int main()
{
    int r1,c1;
    cin>>r1>>c1;
    int array1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>array1[i][j];
        }
    }
    int r2,c2;
    cin>>r2>>c2;
     int array2[r2][c2];
     for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>array2[i][j];
        }
     }
     if(c1!=r2){
       cout<<"matrix multiplication  not possible for this input"<<endl;
     }
     int array3[r1][c2];
     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
                int value=0;
            for(int k=0;k<r2;k++){
                value+=array1[i][k]*array2[k][j];
            }
        array3[i][j]=value;
        }
     }
     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
     cout<<array3[i][j]<<" ";
        }
     cout<<endl;
     }
     return 0;
}

