#include <iostream>

using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  int conteo = 0;

  for (int d = 1; d < n/4; ++d)
  {
    for (int c = 1; c < n/3; ++c)
    {
      for (int b = 1; b < n/2; ++b)
      {
        for (int a = 1; a < n; ++a)
        {
          if (a + 2*b + 3*c + 4*d == n)
          {
            ++conteo;
          }
        }
      }
    }
  }

  cout << conteo;
  return 0;
}