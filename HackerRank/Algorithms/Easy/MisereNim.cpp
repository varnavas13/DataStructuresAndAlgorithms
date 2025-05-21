#include <iostream>
using namespace std;

int main() {
  int T, n, s, result, count;
  cin >> T >> ws;
  for (int a0 = 0; a0 < T; a0++) {
    cin >> n >> ws;
    result = 0;
    count = 0;
    for (int i = 0; i < n; i++) {
      cin >> s >> ws;
      result ^= s;
      if (s <= 1) count++;
    }
    if ((count == n && result == 1) ||
        (count < n  && result == 0))
      cout << "Second" << endl;
    else
      cout << "First" << endl;
  }
  return 0;
}
