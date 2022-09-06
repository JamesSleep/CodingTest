#include <iostream>
using namespace std;

int main () {
  int n, i, length = 0, sum = 0;
  int array[100];
  
  cin >> n;

  for (i = 1; i <= n; i++) {
    if (n % i == 0 && i !=n) {
      array[length] = i;
      length++;
    }
  }

  for (i = 0; i < length; i++) {
    cout << array[i];
    sum += array[i];
    if (i + 1 != length) {
      cout << " + ";
    } 
  }

  cout << " = " << sum << endl;

  return 0;
}