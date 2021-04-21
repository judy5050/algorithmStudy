//
//  1759.cpp
//  algo
//
//  Created by 박효정 on 2021/04/22.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char res[16];
int ch[16];
int L,C;
int cnt;
vector<char> str(16,'{');
void  dfs(int l,int index,int c){
    if(l==L){
        if(c>=1&&L-c>=2){
            for(int i=0;i<L;i++){
                cout<<res[i];
            }
            cout<<"\n";
        }
        
       
       
    }
    else{
        for(int i=index;i<C;i++){
            if(ch[i]==0){
                res[l]=str[i];
                ch[i]=1;
                if(res[l]=='a'||res[l]=='e'||res[l]=='i'||res[l]=='o'||res[l]=='u'){
                    dfs(l+1,i+1,c+1);
                }
                else{
                    dfs(l+1,i+1,c);
                }
                
                ch[i]=0;
            }
          
        }
    }
    
}

int main(){
    
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin>>L>>C;
    
    //단어 입력
    for(int i=0;i<C;i++){
        cin>>str[i];
    }
    sort(str.begin(),str.end());

    dfs(0,0,0);
    
    
    
    
    
    return 0;
}
