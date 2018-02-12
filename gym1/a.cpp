#include <iostream>

using namespace std;

void toltir(int a[111][111], int cur, int kelesi, int index, int size) {
  int num = kelesi;

  for (int i = index; i<cur + index; i++) {
    a[index][i] = num++;
    if (size*size == num - 1)
      return;
  }
  for (int i = index + 1; i<cur + index; i++) {
    a[i][cur + index - 1] = num++;
    if (size*size == num - 1)
      return;
  }
  for (int i = cur + index - 2; i >= index; i--) {
    a[cur + index - 1][i] = num++;
    if (size*size == num - 1)
      return;
  }
  for (int i = cur + index - 2; i>index; i--) {
    a[i][index] = num++;
    if (size*size == num - 1)
      return;
  }

  toltir(a, cur - 2, num, ++index, size);
}

int main() {
  int arr[100][100], x;
  cin >> x; 
toltir(arr, x, 1, 0, x);

  for (int i = 0; i<x; i++) {
    for (int j = 0; j<x; j++) {
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }


  return 0;
}