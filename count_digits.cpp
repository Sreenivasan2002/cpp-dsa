#include<bits/stdc++.h>
using namespace std;

int main(){
    //counting digits
    
    int n;
    cout<<"Enter a number"<<"\n";
    cin>>n;
    
    int cnt=0;
    while(n>0){
        int last_digit = n%10; // ld =7
        cnt++;
        n = n/10; //n=46
    }
    cout<<"Count is: "<<cnt;
    
    return 0;

}