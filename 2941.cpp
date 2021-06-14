
  2941.cpp
  algo

  Created by 박효정 on 2021/06/11.


#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>


using namespace std;

char a1[]={'c','='};
char a2[]={'c','-'};
char a3[]={'d','z','='};
char a4[]={'d','-'};
char a5[]={'l','j'};
char a6[]={'n','j'};
char a7[]={'s','='};
char a8[]={'z','='};


int main(){

    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    int res=0;

    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;;i++){
        flag=false;
        if(s[i]=='\0'){
            break;
        }
        else if(s[i]==a1[0]){
            if( s[i+1]!='\0'&&s[i+1]==a1[1]){
                i+=1;
                res++;
                flag=true;
            }
            if(s[i+1]!='\0'&&s[i+1]==a2[1])
            {
                i+=1;
                res++;
                flag=true;
            }

        }
        else if(s[i]==a3[0]){
            if(s[i+1]!='\0'&&s[i+1]==a3[1]){
                if(s[i+2]!='\n'&&s[i+2]==a3[2]){
                    res++;
                    i+=2;
                    flag=true;
                }

            }
            if(s[i+1]!='\0'&&s[i+1]==a4[1]){
                res++;
                i+=1;
                flag=true;
            }

        }
        else if(s[i]==a5[0]){
            if(s[i+1]!='\0'&&s[i+1]==a5[1]){
                res++;
                i+=1;
                flag=true;
            }
        }

        else if(s[i]==a6[0]){
            if(s[i+1]!='\0'&&s[i+1]==a6[1]){
                res++;
                i+=1;
                flag=true;
            }
        }
        else if(s[i]==a7[0]){
            if(s[i+1]!='\0'&&s[i+1]==a7[1]){
                res++;
                i+=1;
                flag=true;
            }
        }
        else if(s[i]==a8[0]){
            if(s[i+1]!='\0'&&s[i+1]==a8[1]){
                res++;
                i+=1;
                flag=true;
            }
        }
         if(flag==false){
            res++;
        }
    }

    cout<<res<<"\n";

    return 0;
}

