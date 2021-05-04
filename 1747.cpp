//
//  1747.cpp
//  algo
//
//  Created by 박효정 on 2021/05/04.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#define   Max 2000000
using namespace std;

int n;
bool isPrime[2000000];
bool ch=true;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    
    memset(isPrime, true, sizeof(isPrime));
    
    //1은 소수 x
    isPrime[1]=false;
    for(int i=2;i*i<Max;i++){
        if(isPrime[i]==false)continue;;
        for(int j=i+i;j<Max;j+=i){
            isPrime[j]=false;
        }
    }
    
    for(int i=n;;i++){
        ch=true;
        if(isPrime[i]==false){
            continue;
        }
        else{
            string s=to_string(i);
            for(int j=0;j<s.size()/2;j++){
                if(s[j]!=s[s.size()-j-1]){
                    ch=false;
                    break;
                }
            }
            if(ch==true){
                cout<<i<<"\n";
                break;
            }
        }
    }
    
    
    
    
    
    return 0;
}
