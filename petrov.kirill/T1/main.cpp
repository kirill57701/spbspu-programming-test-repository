#include <iostream>
using namespace std;

template<class T>
concept mult = mult(T a, T b) {
  {return a * b} -> convetile_to<T>;
};

template<mult T>
T mult(T a, T b) {
  return a * b;
}

int main() {
  cout << "if this code dosent build, i will be funny\n";
}
