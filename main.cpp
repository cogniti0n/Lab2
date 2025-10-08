#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt)
{
   if (vec.size() == M)
   {
      for (const auto element : vec)
      {
         cout << element << " ";
      }
      cout << "\n";
   }

   for (int i = cnt + 1; i <= N; i++)
   {
      vec.push_back(i);

      func(++cnt);

      vec.pop_back();
   }
}

int main()
{
   cin >> N >> M;
   func(0);
}
