#include <cstdio>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

struct trip {
  int l;
  int len;
  int t;
  int id;
};

const int INF = 1e9;


int main() {
  int n, p;
  scanf("%d%d", &n, &p);
  vector<trip> trips(n);

  for (int i = 0; i < n; i++) {
    scanf("%d%d%d", &trips[i].l, &trips[i].len, &trips[i].t);
    trips[i].id = i;
  }

  vector<trip> lorder = trips, torder = trips;
  sort(lorder.begin(), lorder.end(), [](const trip& a, const trip &b) { return a.l < b.l;});
  sort(torder.begin(), torder.end(), [](const trip& a, const trip &b) { return a.t < b.t;});
  
  vector<int> dp(1 << n, INF);
  vector<int> pj(1 << n, -1);
  vector<int> pt(1 << n, -1);
  dp[0] = 1;


  for (int i = 0; i < (1 << n); i++) {
    if (dp[i] == INF) continue;
    int c = dp[i];
    auto ptr = lorder.begin();
    auto ptr_same = lorder.begin();

    for (auto j : torder) {
      int to = i | (1 << j.id);
      if (to == i) continue;
      while (true) {
        while (ptr != lorder.end() && ptr->l + ptr->len <= c) ptr++;
        while (ptr_same != lorder.end() && (ptr_same->l < c || ((i & (1 << ptr_same->id)) == 0))) ptr_same++;
        if (ptr != lorder.end() && ptr->l <= c) {
          c = ptr->l + ptr->len;
          continue;
        }
        if (ptr_same != lorder.end() && c + j.t >= ptr_same->l) {
          c = ptr_same->l + ptr->len;
          continue;
        }
        break;
      }


      if (c + j.t < j.l) {
        if (dp[to] > c + j.t) {
          dp[to] = c + j.t;
          pj[to] = j.id;
          pt[to] = c;
        }
      }
    }
  }

  vector<int> anst(n, -1);
  vector<int> ansp(n, -1);

  auto restore = [&](int mask, int p) {
    while (mask) {
      int last = pj[mask];
      assert(last != -1 && (mask & (1 << last)));
      anst[last] = pt[mask];
      ansp[last] = p;
      mask ^= (1 << last);
    }
  };

  if (p == 1) {
    if (dp[(1 << n) - 1] != INF) {
      restore((1 << n) - 1, 1);
    }
  } else {
    for (int i = 0; i < (1 << n) - 1; i++) {
      if (dp[i] != INF && dp[(1 << n) - 1 - i] != INF) {
        restore(i, 1);
        restore((1 << n) - 1 - i, 2);
        break;
      }
    }
  }

  if (anst[0] == -1) {
    printf("NO\n");
  } else {
    printf("YES\n");
    for (int i = 0; i < n; i++) {
      printf("%d %d\n", ansp[i], anst[i]);
    }
  }

  return 0;
}
