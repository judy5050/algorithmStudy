#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    //시작점
    int s;
    //끝점
    int e;
    //찾아야 할 숫자 인덱스
    int k;
    for(int i=0;i<commands.size();i++){
        vector<int>tmp;
        s=commands[i][0];
        e=commands[i][1];
        k=commands[i][2];
        for(int j=(s-1);j<=(e-1);j++){
            tmp.push_back(array[j]);
        }
        sort(tmp.begin(),tmp.end());
        answer.push_back(tmp[k-1]);
    }
    
    
    return answer;
}
