//
//  algo_52.cpp
//  algo
//
//  Created by 박효정 on 2021/04/11.
//

#include <iostream>
#include <vector>

using namespace std;
int a[1501];
int check=0;
int tmp=0;
int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n,i,p2,p3,p5,min=2147000000;
    cin>>n;
    
    //첫번째 수는 무조건 1
    a[1]=1;
    p2=p3=p5=1;
    for(i=2;i<=n;i++){
        if(a[p2]*2<a[p3]*3) min=a[p2]*2;
        else min=a[p3]*3;
        if(a[p5]*5<min) min=a[p5]*5;
        if(a[p2]*2==min) p2++;
        if(a[p3]*3==min) p3++;
        if(a[p5]*5==min) p5++;
        a[i]=min;
    }
    
  
    cout<<a[n]<<"\n";
    
    
    
    
    
    return 0;
}
