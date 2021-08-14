//
//  1244.cpp
//  algo
//
//  Created by 박효정 on 2021/08/14.
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
    vector<int>v(n+1);
    
    
    //전구 입력
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    
    //학생 수 입력
    int m;
    cin>>m;
    
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        //남자면
        if(a==1){
            for(int j=b;j<=n;j++){
                if(j%b==0){
                    if(v[j]==0){
                        v[j]=1;
                        
                    }else{
                        v[j]=0;
                    }
                }
            }
        }else{
           
            int l=b, r=b;
            while(1<l&&r<n&&v[l-1]==v[r+1]){
                l--;
                r++;
            }
            for( int i=l; i<=r; i++ ) v[i]=1-v[i];
           
            
        }
        
        
        
        
    }
    
    
    for(int i=1;i<=n;i++){
        cout<<v[i]<<' ';
        if(i%20==0){
            cout<<"\n";
        }
    }
    
    cout<<"\n";
    
    
    return 0;
}
