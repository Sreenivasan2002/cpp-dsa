#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 14, 6, 1, 2};

    map<int, int> mpp;
    
    for(int i=0; i<6; i++){
        mpp[arr[i]]++;
    }
    
    for(int i=0; i<6; i++){
        cout<<mpp[arr[i]]<<" ";
    }
    


    return 0;
}