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

    int second_largest=0;
    for(int i=0; i<5; i++){
        if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }
    }



    cout<<"Second Largest element is "<<second_largest;
    
    return 0;

}