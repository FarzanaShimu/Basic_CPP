#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int number_of_ones_in_binary = 0;
    while (n > 0) {
      int last_bit = n % 2;
      if (last_bit == 1) {
        number_of_ones_in_binary++;
      }
      int drop_last_bit = n / 2;
      n = drop_last_bit;
    }
    int decimal = 0;
    for (int i = 1; i <= number_of_ones_in_binary; i++) {
      decimal = decimal * 2 + 1;
    }
    cout << decimal << '\n';
  }
  return 0;
}