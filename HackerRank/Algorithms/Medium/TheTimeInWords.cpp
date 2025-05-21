#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string nums[30] = {
"one",
"two",
"three",
"four",
"five",
"six",
"seven",
"eight",
"nine",
"ten",
"eleven",
"twelve",
"thirteen",
"fourteen",
"quarter",
"sixteen",
"seventeen",
"eighteen",
"nineteen",
"twenty",
"twenty one",
"twenty two",
"twenty three",
"twenty four",
"twenty five",
"twenty six",
"twenty seven",
"twenty eight",
"twenty nine",
"half"
};

int main() {
    int H, M;
    cin >> H >> M;
    string joiner;
    if (M == 0){
        cout << nums[H-1] << " o' clock";
        return 0;
    }
    else if (M > 30) {
        joiner = "to";
        M = 60 - M;
        H %= 12;
        H ++;
    } else {
        joiner = "past";
    }
    string min = " minutes ";
    if (M == 1)
        min = " minute ";
    if (M == 15 || M == 30) {
        min = " ";
    }
    cout << nums[M-1] << min << joiner << " " << nums[H-1];
    return 0;
}
