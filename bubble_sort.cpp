// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



void bubble_sort(int arr[], int n){
    
    for(int i=n-1; i>=0;i--){
        for(int j=0; j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    
    
    
}

int main() {
    // Selection sort
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];   //{13, 46, 24, 52, 20, 9};

    bubble_sort(arr, n); 
    
    
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}