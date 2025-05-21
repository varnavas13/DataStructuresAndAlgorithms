#include <iostream>
#include <vector>

const int MAX_N = 10000000;
std::vector<int> prime_factors_count(MAX_N + 1, 0);
std::vector<long long> prefix_sum(MAX_N + 1, 0);

void precompute() {
    for (int i = 2; i <= MAX_N; ++i) {
        if (prime_factors_count[i] == 0) { // Prime number
            for (int j = i; j <= MAX_N; j += i) {
                prime_factors_count[j]++;
            }
        }
    }
    
    for (int i = 1; i <= MAX_N; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + prime_factors_count[i];
    }
}

long long query(int n) {
    return prefix_sum[n];
}

int main() {
    precompute();
    
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << query(n) << "\n";
    }
    
    return 0;
}