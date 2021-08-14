//
//  2578.cpp
//  algo
//
//  Created by 박효정 on 2021/08/13.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>


using namespace std;


int arr[5][5];
vector<int>v(25);
map<int,pair<int, int>> m;
int res=0;

int check(){
    int cnt=0;
    for(int i=0;i<5;i++){
        if(arr[i][0]==-1&&arr[i][1]==-1&&arr[i][2]==-1&&arr[i][3]==-1&&arr[i][4]==-1){
            cnt++;
            
        }
    }
    
    for(int i=0;i<5;i++){
        if(arr[0][i]==-1&&arr[1][i]==-1&&arr[2][i]==-1&&arr[3][i]==-1&&arr[4][i]==-1){
        
            
            cnt++;
        }
    }
    
    if(arr[0][0]==-1&&arr[1][1]==-1&&arr[2][2]==-1&&arr[3][3]==-1&&arr[4][4]==-1){
     
        cnt++;
    }
    
    if(arr[0][4]==-1&&arr[1][3]==-1&&arr[2][2]==-1&&arr[3][1]==-1&&arr[4][0]==-1){
     
        cnt++;
    }
    
    return  cnt;
    
}

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
           
        }
    }
    
    
    for(int i=0;i<5*5;i++){
        cin>>v[i];
    }
    
  
    for(int i=0;i<25;i++){
        
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                if(v[i]==arr[j][k]){
                    arr[j][k]=-1;
                }
            }
        }
        
        int tmp=check();
        if(tmp>=3){
            res=i+1;
            break;
        }
        
        
        
        
        
        
    }
    
    
    
    cout<<res<<"\n";
    
    
    return 0;
}
