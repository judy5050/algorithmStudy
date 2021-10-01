//
//  프로그래머스_캐시.cpp
//  algo
//
//  Created by 박효정 on 2021/10/01.
//

#include <string>
#include <vector>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string>v;
    for(int i=0;i<cities.size();i++){
        string s=cities[i];
        bool ch=false;
        for(int j=0;j<s.size();j++){
            s[j]=tolower(s[j]);
        }
        
        for(int j=0;j<v.size();j++){
            if(s==v[j]){
                ch=true;
                if(!v.empty()){
                    v.erase(v.begin()+j);
                }
               
                v.push_back(s);
                answer+=1;
                break;
            }
        }
        
        if(ch==false){
            if(!v.empty()&&v.size()>=cacheSize){
                v.erase(v.begin());
                v.push_back(s);
            }else if(cacheSize!=0){
                v.push_back(s);
            }
            answer+=5;
        }
        
    }
    
    
    
    
    
    return answer;
}
