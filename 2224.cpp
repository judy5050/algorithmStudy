//
//  2224.cpp
//  algo
//
//  Created by 박효정 on 2021/10/05.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define INF 987654321

using namespace std;

vector<pair<char,char>>ve;
int cnt=0;
int arr['z'+1]['z'+1];

void init(){
    
    
    
    for(int i=0;i<'z'+1;i++){
        fill(arr[i], arr[i]+'z'+1, INF);
    }
    
    for(int i=0;i<'z'+1;i++){
        arr[i][i]=0;
    }
    
}
int main(){
    
    int n;
  
    cin>>n;
    cin.ignore();
    init();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        arr[s[0]][s[s.size()-1]]=1;
    }
   
    for(int k=0;k<'z'+1;k++){
        for(int i=0;i<'z'+1;i++){
            for(int j=0;j<'z'+1;j++){
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
            }
        }
    }
    
    for(int i=0;i<'z'+1;i++){
        for(int j=0;j<'z'+1;j++){
            if(arr[i][j]!=INF&&i!=j){
                cnt++;
                ve.push_back({i,j});
               
            }
        }
    }
    
    cout<<cnt<<"\n";
    sort(ve.begin(), ve.end());
    for(int i=0;i<ve.size();i++){
        cout<<ve[i].first<<" => "<<ve[i].second<<"\n";
    }
    
    
    return 0;
}
