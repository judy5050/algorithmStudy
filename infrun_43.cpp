//
//  infrun_43.cpp
//  algo
//
//  Created by 박효정 on 2021/04/08.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[1001],n;


int Count(int s){
    int i,cnt=1,sum=0;
    for(i=1;i<=n;i++){
        if(sum+a[i]>s){
            cnt++;
            sum=a[i];
        }
        else sum=sum+a[i];
    }
    
    return cnt;
    
}

int main(){
    
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    int m,i,lt=1,rt=0,mid=0,res,maxx=-2147000000;
    cin>>n>>m;
    for( i=1;i<=n;i++){
        cin>>a[i];
        rt=rt+a[i];
        if(a[i]>maxx) maxx=a[i];
    }
    while(lt<=rt){
        mid=(lt+rt)/2;
        if(mid>=maxx&&Count(mid)<=m){
            res=mid;
            rt=mid-1;
        }
        else lt=mid+1;
    }
    
    cout<<res<<"\n";
    
    
    return 0;
}
