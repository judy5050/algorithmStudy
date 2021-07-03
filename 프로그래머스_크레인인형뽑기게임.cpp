//
//  프로그래머스_크레인인형뽑기게임.cpp
//  algo
//
//  Created by 박효정 on 2021/07/03.
//

#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int>s;
   
    for(int i=0;i<moves.size();i++){
         bool flag=false;
        for(int j=0;j<board.size();j++){
            int num=board[j][moves[i]-1];
            if(board[j][moves[i]-1]!=0){
              if(!s.empty()&&s.top()==num){
                board[j][moves[i]-1]=0;
                answer+=2;
                s.pop();
                flag=true;
                break;
            }
            else {
                s.push(num);
                board[j][moves[i]-1]=0;
                break;
            }
        }
    }

}
    
    
    
    
    return answer;
}
