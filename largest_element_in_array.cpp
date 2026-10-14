#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {5,2,1,15,11};

    int largest=0;
    for(int i=0; i<5; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout<<"Largest element is "<<largest;
    
    return 0;

}