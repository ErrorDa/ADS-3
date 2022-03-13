// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int right_b = size;
  int left_b = 0;
  int middle = (left_b + right_b) / 2;
  if (left_b >= right_b)
    return 0;
  if (value == arr[middle]) 
  {
    int i = 0;
    int ans = 0;
    while (value == arr[middle + i]) {
      i--;
    }
    i = i + 1;
    for ( ;value == arr[middle + i] ;i++) {
      ans++;
    }
    return ans;
  }
  else
  if (value > arr[middle])
    cbinsearch(arr + middle, right_b - middle, value);
  else
    cbinsearch(arr, middle + 1, value);
  return 0;
}
