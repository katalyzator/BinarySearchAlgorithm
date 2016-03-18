#include <iostream>
 
using namespace std;
 
int BinSearch(const int* arr, int count, int key);
 
int main()
{
    const int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int key;
    
    cout << "key: ";
    cin >> key;
 
    if(BinSearch(arr, n, key) != -1)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
    
    return 0;
}
 
int BinSearch(const int* arr, int count, int key) 
{
  int l = 0;            // нижняя граница
  int u = count - 1;    // верхняя граница
 
  while (l <= u) {
    int m = (l + u) / 2;
    if (arr[m] == key) return m;
    if (arr[m] < key) l = m + 1;
    if (arr[m] > key) u = m - 1;
  }
  return -1;
}
