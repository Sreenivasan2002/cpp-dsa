#include<bits/stdc++.h>
using namespace std;

int main(){
    //prime or not
    int n;
    cout<<"Enter a number \n";
    cin>>n;
    
    //n=17
    int flag=0;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag++;
        }
    }
    
    if(flag==0){
        cout<<n<<" is a prime number";
    }else{
        cout<<n<<" is a not a prime number";
    }
    
    
    
    
    
    return 0;

}