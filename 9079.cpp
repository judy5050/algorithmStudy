////
//  9079.cpp
//  algo
//
//  Created by 박효정 on 2021/08/30.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string>lis;

void dfs(int index,string s){
    if(index>8){
        lis.push_back(s);
        return;
    }
    dfs(index+1,s+to_string(index));
    dfs(index+1,s);
    
    
}

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int n;
    cin>>n;
    char arr[3][3];
    char copy[3][3];
   
  
   
    dfs(1,"");

    while (n--) {
        int res=987654321;
        int cnt=0;
        bool ch=true;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>arr[i][j];
                copy[i][j]=arr[i][j];
            }
        }
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(arr[0][0]!=arr[i][j]){
                    ch=false;
                    break;
                }
            }
        }
        if(ch==true){
            cout<<0<<"\n";
            continue;
        }
        
        for(int i=0;i<lis.size();i++){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    arr[i][j]=copy[i][j];
                }
            }

           
            cnt=0;
            string s=lis[i];
            if(lis[i]==""){
                continue;
            }
            for(int j=0;j<s.size();j++){
                ch=true;
                if(s[j]-'0'==1){
                    for(int k=0;k<3;k++){
                        if(arr[0][k]=='H'){
                            arr[0][k]='T';
                        }else{
                            arr[0][k]='H';
                        }
                    }
                    cnt++;
                }
                if(s[j]-'0'==2){
                    for(int k=0;k<3;k++){
                        if(arr[1][k]=='H'){
                            arr[1][k]='T';
                        }else{
                            arr[1][k]='H';
                        }
                    }
                    cnt++;
                }
                if(s[j]-'0'==3){
                    for(int k=0;k<3;k++){
                        if(arr[2][k]=='H'){
                            arr[2][k]='T';
                        }else{
                            arr[2][k]='H';
                        }
                    }
                    cnt++;
                }
                if(s[j]-'0'==4){
                    for(int k=0;k<3;k++){
                        if(arr[k][0]=='H'){
                            arr[k][0]='T';
                        }else{
                            arr[k][0]='H';
                        }
                    }
                    cnt++;
                }
                if(s[j]-'0'==5){
                    for(int k=0;k<3;k++){
                        if(arr[k][1]=='H'){
                            arr[k][1]='T';
                        }else{
                            arr[k][1]='H';
                        }
                    }
                    cnt++;
                }
                if(s[j]-'0'==6){
                    for(int k=0;k<3;k++){
                        if(arr[k][2]=='H'){
                            arr[k][2]='T';
                        }else{
                            arr[k][2]='H';
                        }
                    }
                    cnt++;
                }
                if(s[j]-'0'==7){
                    for(int k=0;k<3;k++){
                        if(arr[k][k]=='H'){
                            arr[k][k]='T';
                        }else{
                            arr[k][k]='H';
                        }
                    }
                    cnt++;
                }
                if(s[j]-'0'==8){
                    for(int k=0;k<3;k++){
                        if(arr[2-k][k]=='H'){
                            arr[2-k][k]='T';
                        }else{
                            arr[2-k][k]='H';
                        }
                    }
                    cnt++;
                }
                
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        if(arr[0][0]!=arr[i][j]){
                            ch=false;
                            
                        }
                    }
                
                }
                
                if(ch==true){
                    break;
                }
            }
            if(ch==true){
                res=min(res,cnt);
            }
        }
        
        if(res!=987654321){
            cout<<res<<"\n";
        }else{
            cout<<-1<<"\n";
            
        }
        
       
    
    }
    
    
    
    
    
    
    
    return 0;
}
