#include<bits/stdc++.h>
using namespace std;

void solve(){
       
}

int main(){

    vector<bool> prime(51, true);
    prime[0] = false;
    prime[1] = false;

    for(int i = 2; i< 50; i++){

        if(prime[i]){
              cout<< i << " " <<;
            for(int j = 2*i ; j<50; j = j+i){

                prime[j] = false;
              
            }

        }
    }

    
    
}
