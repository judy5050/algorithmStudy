//
//  6996.cpp
//  algo
//
//  Created by 박효정 on 2021/04/28.
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
    string s1,s2;
    int arr1[27],arr2[27];
    cin>>n;
    bool ch=0;
    //문자열 저장
    for(int i=0;i<n;i++){
        memset(arr1,0,sizeof(arr1));
        memset(arr2, 0, sizeof(arr2));
        cin>>s1>>s2;
        ch=0;
        if(s1.size()!=s2.size()){
            cout<<s1<<' '<<'&'<<' '<<s2<<" are NOT anagrams."<<'\n';
            continue;
        }
        for(int j=0;j<s1.size();j++){
            arr1[s1[j]-'a']++;
        }
        
        for(int j=0;j<s2.size();j++){
            arr2[s2[j]-'a']++;
        }
        for(int i=0;i<27;i++){
            if(arr1[i]!=arr2[i]){
                ch=1;
                break;
            }
        }
        if(ch==1){
            cout<<s1<<' '<<'&'<<' '<<s2<<" are NOT anagrams."<<'\n';
        }
        else{
            cout<<s1<<' '<<'&'<<' '<<s2<<" are anagrams."<<'\n';
        }
        
    }
    
    
    
    
    
    return 0;
}
