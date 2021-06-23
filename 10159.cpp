//
//  10159.cpp
//  algo
//
//  Created by 박효정 on 2021/06/23.
//

#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int n, m;
bool arr[101][101];


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int a,b;
        cin >> a >> b;
        arr[a][b] = true;
      
    }

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (arr[i][k] && arr[k][j])
                {
                    arr[i][j] = true;
                }
                   

    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= n; j++){
            
        
        if(i==j)
        {
            continue;
        }
        if (arr[i][j] == 0 && arr[j][i] == 0) cnt++;
    }
        cout << cnt << '\n';
    }
}
