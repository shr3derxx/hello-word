#include <iostream>

using namespace std;

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int number;

  cout << "Введите целое число: ";
  cin >> number;

  if (number < 0) {
    cout << "Факториал не определен для отрицательных чисел." << endl;
  } else {
    cout << "Факториал " << number << " равен " << factorial(number) << endl;
  }

  return 0;
}
