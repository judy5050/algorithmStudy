//
//  2309.cpp
//  algo
//
//  Created by 박효정 on 2021/03/01.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;
int sum;
int index1;
int index2;
int main()
{
    
    cin.tie(0);
    cout.tie(0);
    
    for(int i=0;i<9;i++){
        int num;
        cin>>num;
        v.push_back(num);
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<9;j++){
            if(sum-(v[i]+v[j])==100)
            {
                index1=i;
                index2=j;
                
            }
            
            
            
            
        }
    }
    
    for(int i=0;i<9;i++){
        if(index1!=i&&index2!=i){
            cout<<v[i]<<"\n";
        }
       
        
    }
    
    
    
    
    
    return 0;
}
