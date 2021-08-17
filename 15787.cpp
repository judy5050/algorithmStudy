////
////  15787.cpp
////  algo
////
////  Created by 박효정 on 2021/08/16.
////
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//
//
//using namespace std;
//
//int n, m,cnt;
//bool visit[1<<21];
//vector<int>v;
//
//int main()
//{
//    cin.tie(0);
//    cout.tie(0);
//    ios::sync_with_stdio(false);
//  
//
//    cin >> n >> m;
//   
//  
//    vector<int>v(n + 1);
//    for (int i = 0; i < m; i++) {
//        int q, w, e;
//        cin >> q;
//        if (q == 1) {
//            cin >> w >> e;
//            v[w] = v[w] | (1 << e);
//        }
//        else if (q == 2) {
//            cin >> w >> e;
//            v[w] = v[w] &~ (1 << e);
//        }
//        else if (q == 3) {
//            cin >> w;
//            v[w] = v[w] << 1;
//
//            v[w] = v[w] &((1 << 21)-1);
//        }
//        else {
//            cin >> w;
//            v[w] = v[w] >> 1;
//            v[w] = v[w] & ~1;
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        if (!visit[v[i]]) {
//            cnt++;
//        }
//        visit[v[i]] = true;
//    }
//    cout << cnt << '\n';
//    return 0;
//}
