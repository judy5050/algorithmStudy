//
//  16987.cpp
//  algo
//
//  Created by 박효정 on 2021/09/24.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int n;
vector<pair<int, int>>ve;
int res=0;

void dfs(int cnt,int index){
    res=max(res,cnt);
    if(index>=n){

        return;
    }

   
    for(int i=0;i<n;i++){
        int num=0;
        bool ch=false;
        if(ve[i].first>0&&ve[index].first>0&&index!=i){
                ch=true;
                ve[i].first-=ve[index].second;
                ve[index].first-=ve[i].second;
                if(ve[i].first<=0){
                    num++;
                }if(ve[index].first<=0){
                    num++;
                }
                dfs(cnt+num,index+1);
            }
            if(ve[index].first<=0){
                dfs(cnt,index+1);
            }
            if(ch==true){
                ve[i].first+=ve[index].second;
                ve[index].first+=ve[i].second;
            }
        
    }
    
    
}

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>n;
    
    int w,l;
    for(int i=0;i<n;i++){
        cin>>l>>w;
        ve.push_back({l,w});
    }
    
    dfs(0,0);
    
    cout<<res<<"\n";
    
    
    
    return 0;
}
