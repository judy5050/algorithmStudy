//
//  12933.cpp
//  algo
//
//  Created by 박효정 on 2021/08/13.
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
    
    string s;
    
    cin>>s;
    int res=0;
    vector<int>vis(s.size());

    string tmp="";
    //연속 울음 확인용
    int ch=0;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            if(tmp.empty()&&s[j]=='q'&&vis[j]==0){
                tmp+='q';
                vis[j]=1;
            }else if(tmp.size()==1&&s[j]=='u'&&vis[j]==0){
                tmp+='u';
                vis[j]=1;
            }else if(tmp.size()==2&&s[j]=='a'&&vis[j]==0){
                tmp+='a';
                vis[j]=1;
            }else if(tmp.size()==3&&s[j]=='c'&&vis[j]==0){
                tmp+='c';
                vis[j]=1;
            }else if(tmp.size()==4&&s[j]=='k'&&vis[j]==0){
                tmp="";
                vis[j]=1;
                ch=1;
            }
            
        }
      
        if(ch==1){
            res++;
            ch=0;
        }
        tmp="";
        
        
        
        
        
    }
    
    ch=0;
    for(int i=0;i<s.size();i++){
        if(vis[i]==0){
            ch=1;
            break;
        }
    }
    
    
    
    
    if(res!=0&&ch==0&&s.size()%5==0){
        cout<<res<<"\n";
    }else{
        cout<<-1<<"\n";
    }
    
   
    
    return 0;
}
