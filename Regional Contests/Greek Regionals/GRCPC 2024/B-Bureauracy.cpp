#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    vector<int> R(N);
    for (int i = 0; i < N; ++i) {
        cin >> R[i];
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < N; ++i) {
        int turns = (R[i] + M - 1) / M; 
        int finish_time = turns * M;
        pq.push({finish_time, i + 1});
    }

    vector<int> order;
    while (!pq.empty()) {
        order.push_back(pq.top().second);
        pq.pop();
    }

    for (int i = 0; i < order.size(); ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << order[i];
    }
    cout << endl;

    return 0;
}