// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int right_b = size;
  int left_b = 0;
  int middle = (left_b + right_b) / 2;
  if (((left_b >= middle) || (right_b <= middle)) && (arr[middle] != value))
    return 0;
  if (value < arr[middle])
    return cbinsearch(arr, middle, value);
  else
  if (value > arr[middle]) {
    return cbinsearch(arr + middle, right_b - middle+1, value);
  } else {
    int i = 0;
    int ans = 0;
    while (value == arr[middle + i]) {
      i--;
    }
    i = i + 1;
    for ( ; value == arr[middle + i]; i++) {
      ans = ans + 1;
    }
    return ans;
  }

return 0;
}
