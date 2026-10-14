// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i; j<=n-1; j++){
            if(arr[j] < arr[min]){
                min = j;    
            }
            
            swap(arr[min], arr[i]);
            
        }
    }
}

int main() {
    // Selection sort
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];   //{13, 46, 24, 52, 20, 9};

    selection_sort(arr, n); 
    
    
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}