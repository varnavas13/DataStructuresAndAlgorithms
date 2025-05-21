#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<unsigned int> primes;
  primes.reserve(10001);
  primes.push_back(2);
  for (unsigned int x = 3; primes.size() <= 10000; x += 2)
  {
    bool isPrime = true;
    for (auto p : primes)
    {
      if (x % p == 0)
      {
        isPrime = false;
        break;
      }

      if (p*p > x)
        break;
    }

    if (isPrime)
      primes.push_back(x);
  }

  unsigned int tests;
  cin >> tests;
  while (tests--)
  {
      unsigned int x;
      cin >> x;
      
      x--;

      if (x < primes.size())
        cout << primes[x] << std::endl;
      else
        cout << "ERROR" << std::endl;
  }
  return 0;
}
