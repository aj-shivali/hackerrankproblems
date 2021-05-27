#include<bits/stdc++.h>
#include<iostream>
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main() {
  int n;
  float pos = 0, neg = 0, zer = 0;
  cin >> n;
  int arr[n];
  for (int arr_i = 0; arr_i < n; arr_i++) {
    cin >> arr[arr_i];
    if (arr[arr_i] > 0)
      pos++;
    else if (arr[arr_i] < 0)
      neg++;
    else
      zer++;
  }
  cout<<(float)pos / n << endl << (float)neg / n << endl << (float)zer / n << endl;
  return 0;
}
