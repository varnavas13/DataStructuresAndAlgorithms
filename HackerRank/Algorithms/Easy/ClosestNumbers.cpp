#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <tuple>
#include <array>
#include <limits>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> values(n, {0, 0});
  for (auto& p: values) {
    cin >> p.first;
    p.second = p.first;
  }
  sort(values.begin(), values.end());
  for (size_t i = 1; i < values.size(); ++i) {
    values[i-1].first = values[i-1].second - values[i].second;
  }
  sort(values.begin(), values.end(),
      [](const pair<int, int>& p1, const pair<int, int>& p2) {
      return abs(p1.first) < abs(p2.first);
  });
  auto it = values.begin();
  int best = abs(it->first);
  vector<int> best_values;
  while (abs(it->first) == best) {
    best_values.push_back(it->second);
    best_values.push_back(it->second - it->first);
    ++it;
  }
  sort(best_values.begin(), best_values.end());
  for (auto it = best_values.begin(), end = best_values.end(); it != end; ++it) {
    if (it != best_values.begin()) {
      cout << " ";
    }
    cout << *it;
  }
  cout << endl;
}
