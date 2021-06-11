//
//  1316.cpp
//  algo
//
//  Created by 박효정 on 2021/06/11.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;



int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    int arr[27];
    int cnt=0;
    cin>>n;
    while(n--){
        bool flag=false;
        memset(arr, 0, sizeof(arr));
        string s;
        cin>>s;
        arr[s[0]-'a']++;
        for(int i=1;i<s.size();i++){
            if(arr[s[i]-'a']==0){
                arr[s[i]-'a']++;
            }else{
                if(s[i-1]==s[i]){
                    arr[s[i]]++;
                }
                else{
                    if(arr[s[i]-'a']!=0){
                        flag=true;
                    }
                    else{
                        arr[s[i]-'a']++;
                        
                    }
                }
            }
        }
        
        if(flag==false){
            cnt++;
        }
        
    }
    
    cout<<cnt<<"\n";
    
    
    return 0;
}
