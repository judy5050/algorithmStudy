//
//  14888.cpp
//  algo
//
//  Created by 박효정 on 2021/08/03.
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
    vector<int>num;
    vector<int>num2;
    int a;
    
    //수 입력
    for(int i=0;i<n;i++){
        cin>>a;
        num.push_back(a);
    }
    
    //연산자 입력
    int cal[4];
    for(int i=0;i<4;i++){
        cin>>cal[i];
    }
    
    vector<char>c;
    vector<int>res;
  
    for(int i=0;i<cal[0];i++){
        c.push_back('+');
    }
    
    for(int i=0;i<cal[1];i++){
        c.push_back('-');
    }
    for(int i=0;i<cal[2];i++){
        c.push_back('*');
    }
    
    for(int i=0;i<cal[3];i++){
        c.push_back('/');
    }
    
    vector<string>s;
    sort(c.begin(), c.end());
    do{
        string tmp="";
        for(int i=0;i<c.size();i++){
            tmp+=c[i];
            
            
            
        }
        
        s.push_back(tmp);
    }while (next_permutation(c.begin(), c.end()));
    
    for(int i=0;i<s.size();i++){
        string tmp=s[i];
        //기존 입력 값 복사
        for(int j=0;j<num.size();j++){
            num2.push_back(num[j]);
        }
        for(int j=0;j<tmp.size();j++){
            if(tmp[j]=='+'){
                num2[0]=num2[0]+num2[1];
                num2.erase(num2.begin()+1);
            
            }
            else if(tmp[j]=='-'){
                num2[0]=num2[0]-num2[1];
                num2.erase(num2.begin()+1);
            }
            else if(tmp[j]=='*'){
                num2[0]=num2[0]*num2[1];
                num2.erase(num2.begin()+1);
            }
            else if(tmp[j]=='/'){
                num2[0]=num2[0]/num2[1];
                num2.erase(num2.begin()+1);
            }
        }
        res.push_back(num2[0]);
        num2.erase(num2.begin());
        
    }
    sort(res.begin(), res.end());
    cout<<res[res.size()-1]<<"\n";
    cout<<res[0]<<"\n";
    
    return 0;
}
