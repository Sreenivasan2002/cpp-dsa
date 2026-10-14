#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> arr;
    int arr[5];
    int n=5;
    for(int i=0; i<n;i++){
        int num;
        
        cout<<i+1<<". Enter the numeber ";
        cin>>num;
        arr[i] = num;
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }





//Reversing the number
    cout<<"\n Reversing the number \n";

    for(int i=0; i<n/2;i++){
        int c = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = c; 
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


// Sorting 
        cout<<"\n Sorting \n";
        vector<int> vec_arr;
        for(int i=0; i<n;i++){
            vec_arr.push_back(arr[i]);
        }
        sort(vec_arr.begin(), vec_arr.end());

        for(int i=0; i<n;i++){
            cout<<vec_arr[i]<<" ";
        }



    return 0;
}