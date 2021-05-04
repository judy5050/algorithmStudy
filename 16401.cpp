//
//  16410.cpp
//  algo
//
//  Created by 박효정 on 2021/05/04.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
vector<long long> v;
vector<long long> tmp;
long long m,n;
long long tmp_m;
long long rt,lt,mid;
long long res=-2147000000;
bool check(long long num){
    tmp_m=m;
    long long cnt=0;
    for(int i=0;i<n;i++){
        if(num<=tmp[i]){
            cnt=tmp[i]/num;
            tmp[i]-=cnt*num;
            tmp_m-=cnt;
            }
                
        }
    
    
    if(tmp_m<=0){
        return true;
    }
    else{
        return false;
    }
    
    
}
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    
    int a;
    cin>>m>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        tmp.push_back(a);
    }
    sort(v.begin(), v.end());
    
    rt=v[(v.size())-1];
    lt=1;
    while(lt<=rt){
        mid=(lt+rt)/2;
        if(check(mid)){
            lt=mid+1;
            res=max(res,mid);
        }
        else{
            rt=mid-1;
        }
        for(int i=0;i<n;i++){
            tmp[i]=v[i];
        }
        
        
        
        
    }
    if(res!=-2147000000){
        cout<<res<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
    
    return 0;
}
