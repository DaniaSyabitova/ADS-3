// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int counter = 0;
  int i = 0, j = size - 1;
  while (i < j) {
    int mid = i + (j - 1) / 2;
    if (arr[mid] == value) {
      counter++;
      while (arr[mid + 1] == value) {
        counter++;
        mid++;
      }
      mid = i + (j - 1) / 2;
      while (arr[mid - 1] == value) {
        counter++;
        mid--;
      }
      break;
    } else {
      if (arr[mid] > value)
      j = mid;
    else {
      i = mid + 1;
      }
    }
  if (counter != 0)
    return counter;
  return 0;
  }
}
