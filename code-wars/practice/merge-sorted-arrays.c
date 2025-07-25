/*
You are given two sorted arrays that contain only integers. These arrays may be
sorted in either ascending or descending order. Your task is to merge them into
a single array, ensuring that:

The resulting array is sorted in ascending order.

Any duplicate values are removed, so each integer appears only once.

If both input arrays are empty, return an empty array.

No input validation is needed, as both arrays are guaranteed to contain zero or
more integers.

Examples (input -> output)
* [1, 2, 3, 4, 5], [6, 7, 8, 9, 10] -> [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

* [1, 3, 5, 7, 9], [10, 8, 6, 4, 2] -> [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

* [1, 3, 5, 7, 9, 11, 12], [1, 2, 3, 4, 5, 10, 12] -> [1, 2, 3, 4, 5, 7, 9, 10,
11, 12]
*/

#include <stddef.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

size_t merge_arrays(size_t len_a, const int a[len_a], size_t len_b,
                    const int b[len_b], int merged[len_a + len_b]) {
  for (size_t i = 0; i < len_a; i++) {
    merged[i] = a[i];
  }

  for (size_t i = 0; i < len_b; i++) {
    merged[len_a + i] = b[i];
  }

  qsort(merged, len_a + len_b, sizeof(int), compare);

  size_t unique_count = 0;

  for (size_t i = 0; i < len_a + len_b; i++) {
    if (i == 0 || merged[i] != merged[i - 1]) {
      merged[unique_count++] = merged[i];
    }
  }

  return unique_count;
}
