#include <iostream>
#include <vector>
using namespace std;

int main () {
  int i = 1;
  while (true) {
    int n;
    cin >> n;

    if (n == 0) {
      break;
    }
    
    vector<pair<int, int>> coords;
    int count = n * 2;
    while (count > 0) {
      string name;
      int x, y;
      cin >> name >> x >> y;
      pair<int, int> coord = {x, y};
      coords.push_back(coord);
      --count;
    }

    cout << "Case " << i << ":" << endl;
    ++i;
  }

  return 0;
}
