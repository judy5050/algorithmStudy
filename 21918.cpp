//
//  21918.cpp
//  algo
//
//  Created by 박효정 on 2021/08/11.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int arr[4001];

void first(int i,int x){
    //i번째 전구상태를 x로 변경
    arr[i-1]=x;
    
    
}

void second(int l,int r){
    
    for(int i=l-1;i<r;i++){
        if(arr[i]==0){
            arr[i]=1;
            
        }else{
            arr[i]=0;
        }
    }
    
    
}

void thrid(int l,int r){
    
    for(int i=l-1;i<r;i++){
            arr[i]=0;
    }
    
    
}


void four(int l,int r){
    
    for(int i=l-1;i<r;i++){
            arr[i]=1;
    }
    
    
}


int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,m;
    cin>>n>>m;
    
    vector<int>v(n);
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int a,b,c;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        if(a==1){
            first(b, c);
        }else if(a==2){
            second(b, c);
        }else if(a==3){
            thrid(b, c);
        }else if(a==4){
            four(b, c);
        }
    
    }
    
    
    
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    
    
    cout<<"\n";
    
    
    return 0;
}
