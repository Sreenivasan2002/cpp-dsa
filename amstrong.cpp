#include<bits/stdc++.h>
using namespace std;

int main(){
    //amstring a number nxnxn
    int n;
    cout<<"Enter a number \n";
    cin>>n;
    
    //n=1634
    int number=n;
    int num=n;
    int cnt=0;
    while(n>0){
        int last_digit = n%10;
        cnt++;
        n = n/10;
    }




    int sum=0;


    for(int i=0; i<cnt; i++){
        int last_digit = num%10;
        sum = sum + pow(last_digit, cnt);
        num = num/10;
    }


    if(number==sum){
        cout<<number<<" is a amstrong number";
    }else{
        cout<<number<<"is not a amstrong number";
    }
    
    
    
    return 0;

}