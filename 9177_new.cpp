//
//  9117_new.cpp
//  algo
//
//  Created by 박효정 on 2021/07/12.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool ch=false;
string s1="",s2="",s3="";
bool tmp=false;
void dfs(int a,int b,int c){
    if(ch){
        return;
    }
    if(c==s3.size()){
        ch=true;
        return;
    }
    
    if(s1[a]==s3[c]){
        dfs(a+1,b,c+1);
    }
    if(s2[b]==s3[c]){
        dfs(a,b+1,c+1);
    }
    
    
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    int index=1;
    while(n--){
      
        ch=false;
        bool flag=false;
        cin>>s1>>s2>>s3;
        int arr1[52];
        int arr2[52];
        int arr3[52];
        fill(arr1, arr1+52, 0);
        fill(arr2, arr2+52, 0);
        fill(arr3, arr3+52, 0);
        for(int i=0;i<s1.size();i++){
            if(s1[i]>='a'&&s1[i]<='z'){
                arr1[s1[i]-'a']++;
            }else{
                arr1[s1[i]-'A']++;
            }
           
        }
        for(int i=0;i<s2.size();i++){
            if(s2[i]>='a'&&s2[i]<='z'){
                arr2[s2[i]-'a']++;
            }else{
                arr2[s2[i]-'A']++;
            }
           
        }
        for(int i=0;i<s3.size();i++){
            if(s3[i]>='a'&&s3[i]<='z'){
                arr3[s3[i]-'a']++;
            }else{
                arr3[s3[i]-'A']++;
            }
           
        }
        for(int i=0;i<52;i++){
            if(arr1[i]+arr2[i]!=arr3[i]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            dfs(0,0,0);
        }
       
        if(ch==true){
            cout<<"Data set "<<index<<':'<<' '<<"yes"<<"\n";
            index++;
        }else{
            cout<<"Data set "<<index<<':'<<' '<<"no"<<"\n";
            index++;
        }
        
        
        
        
    }
    
    
    
    
    
    
    return 0;
}
