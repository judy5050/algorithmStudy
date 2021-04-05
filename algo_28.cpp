//
//  algo_28.cpp
//  algo
//
//  Created by 박효정 on 2021/04/05.
//

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int n,tmp,j;

int main(){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    
    cin>>n;
    vector<int> ch(n+1);
    
    
    for(int i=2;i<=n;i++){
        tmp=i;
        j=2;
        while(1){
            if(tmp%j==0){
                ch[j]++;
                tmp=tmp/j;
            
            }else j++;
            if(tmp==1)
                break;
            
            
        }
        
        
        
    }
    int num1=ch[2];
    int num2=ch[5];
    int num3=min(num1,num2);
    cout<<num3<<"\n";
    
    return 0;
}
