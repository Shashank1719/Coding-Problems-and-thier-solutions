#include <bits/stdc++.h>

using namespace std;

string GetRuler(const string& kingdom) {
  string ruler = "";
  int size = kingdom.size();
  char endChar = kingdom.at(size-1);
  if(endChar == 'y' || endChar == 'Y'){
      ruler = "nobody";
      return ruler;
  }
  else if(endChar == 'a' || endChar == 'e' || endChar == 'i' || endChar == 'o' || endChar == 'u' || endChar == 'A' || endChar == 'E' || endChar == 'I' || endChar == 'O' || endChar == 'U'){
      ruler = "Alice";
      return ruler;
  }
  ruler = "Bob";
  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
