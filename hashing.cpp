// Hashing- used to count the numbers in an array


#include <iostream>
using namespace std;

int main() {
    // Hashing
    // int arr[6] ={1,2,14,6,1,2};a
    
    // //for hash array we need to make a array with 14+1
    // int hash[15] = {0};
    // for(int i=0;i<6; i++){
    //     hash[arr[i]] +=1;
    // }
    
    // for(int i=0;i<15; i++){
    //     cout<<hash[i]<<" ";
    // }
    
    // cout<<endl;
    
    // for(int i=0;i<6; i++){
    //     cout<<hash[arr[i]]<<" ";
    // }







    // Hashing with characters
    string s = "cahsacbceac";
    
    
    int hash[26] = {0};
    
    
    //the location of c is c-a
    for(char i: s){
        hash[i-'a']++;
    }
    

    
    for(int i=0;i<26; i++){
        cout<<hash[i]<<" ";
    }
    
    
    
    

    return 0;
}