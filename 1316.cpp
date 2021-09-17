//
//  1316.cpp
//  algo
//
//  Created by 박효정 on 2021/09/17.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    vector<string>s;
    string str;
    int vis[26];
    int res=n;
  
    for(int i=0;i<n;i++){
        cin>>str;
        s.push_back(str);
    }
    
//    bool ch=true;
    for(int i=0;i<n;i++){
//        ch=true;
        fill(vis, vis+26, 0);
        string tmp=s[i];
        for(int j=0;j<tmp.size();){
            if(vis[tmp[j]-'a']==0){
                vis[tmp[j]-'a']=1;
                char c=tmp[j];
                while(c==tmp[j]){
                    j++;
                }
            }else{
//                ch=false;
                res--;
                break;
            }
        }
        
    }
    
    
    
    cout<<res<<"\n";
    
    
    
    
    return 0;
}
