// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i = 0;
	int j = size - 1;
	int mid;
	while (i <= j) {
		mid = (i + j) / 2;
		if (arr[mid] == value) {
			i = j = mid;
			while (arr[j] == arr[j + 1]) {
				j++;
			}
			while (arr[i] == arr[i - 1]) {
				i--;
			}
			return j - i + 1;
		} else if (arr[mid] > value) {
			j = mid - 1;
		} else if (arr[mid] < value) {
			i = mid + 1;
		}
	}
	return 0;
  }
