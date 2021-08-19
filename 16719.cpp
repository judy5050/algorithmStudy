//
//  16719.cpp
//  algo
//
//  Created by 박효정 on 2021/08/19.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define INF 987654321

using namespace std;

string s;
bool vis[101];


void check(int lt,int rt){
    int mini=INF;
    int index=0;
        for(int i=lt;i<=rt;i++){
            //방문전이면서 가장 작은 값
            if(vis[i]==0&&mini>s[i]){
                index=i;
                mini=s[i];
            
            }
        }
        if(mini==INF){
            return;
        }
        vis[index]=true;
        for(int i=0;i<s.size();i++){
            if(vis[i]==true){
                cout<<s[i];
            }
           
        }
        cout<<"\n";
        
    
    
   
    check(index+1, rt);
    check(lt, index-1);
    
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
   
    cin>>s;
    
    check(0, (int)s.size()-1);
    
    
    
    
    
    
    
    
    
    
    return 0;
}
