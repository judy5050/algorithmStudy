//
//  프로그래머스_타겟넘버.cpp
//  algo
//
//  Created by 박효정 on 2021/07/15.
//

#include <string>
#include <vector>
#include <algorithm>
#include <vector>

using namespace std;

vector<int>tmp;
vector<string>n;

void dfs(int start,string s,int c){
    if(c==tmp.size()*2){
        n.push_back(s);
        return;
    }else if(c>tmp.size()*2){
        return;
    }else{
        
        dfs(start+1,s+'+'+to_string(tmp[start]),c+2);
        dfs(start+1,s+'-'+to_string(tmp[start]),c+2);
        
        
    }
    
    
    
    
    
    
}


int solution(vector<int> numbers, int target) {
    int answer = 0;
    
      tmp=numbers;
    
    dfs(0,"",0);
    
     for(int i=0;i<n.size();i++){
        string str=n[i];
      
        int a=0;
        char ch;
      
        for(int j=0;j<str.size();){
            string m="";
            if(str[j]=='-'){
                ch='-';
                j++;
            }else if(str[j]=='+'){
                ch='+';
                j++;
            }else{
                while(str[j]>='0'&&str[j]<='9')
                {
                    m+=str[j++];
                    
                }
                if(ch=='+'){
                    a+=stoi(m);
                }else{
                    a-=stoi(m);
                }
                
            }
           
            
        }
        if(a==target){
            answer++;
        }

    }

   
   
    
    
    
    return answer;
}
