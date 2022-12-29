#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {

    int pi = partition(arr, low, high);

    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main()
{

  cout << "hello world!!";
  cout << "hi boys";
}