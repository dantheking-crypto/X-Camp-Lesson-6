#include <iostream>
using namespace std;
int main() {
  int meteors = 0, queries = 0;
  cin >> meteors >> queries;
  int times[meteors];
  for (int i = 0; i < meteors; i++) {
    cin >> times[i];
  }
  int range[queries];
  for (int i = 0; i < queries; i++) {
    int l, r;
    cin >> l >> r;
    int counter = 0;
    for (int i = 0; i < meteors; i++) {
      if (times[i] >= l && times[i] <= r) {
        counter++;
      }
    }
    
    range[i] = counter;
  }
  for (int i = 0; i < queries; i++) {
    cout << range[i] << endl;
  }
  return 0;
}
