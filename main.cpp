#include <iostream>
using namespace std;

int main() {
  int n;
  int m;
  int i;
  int j;
  
  cout << "Introduceti numarul de linii: ";
  cin >> m;

  cout << "Introduceti numarul de coloane: ";
  cin >> n;

  i = 0;
  while (i < m){
    j = 0;
    while (j < n){
      cout << " O ";
      j++;//j = j + 1;
    }
    cout << endl;
    i++;//i = i +1;
  }
    return 0;
  }