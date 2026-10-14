#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    int arr[n][n] = {{1,2,3}, {4,5,6}, {7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    cout<<"\n"<<"After anti-clockwise rotation\n";
    
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            swap( arr[i][j], arr[j][i] );


        }
    }


    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    






    return 0;
}