/**
 * Merge sort implementation in C
 *
 * Time: O(nlogn)
 * Space: O(n)
 * Stable
 *
 * @author Haoyang Fan
 * @version 1.0
 * @since 12-18-2018
 */
#include "sort.h"

void sort(int *nums, int start, int end, int *aux);
void merge(int *nums, int start, int mid, int end, int *aux);

void merge_sort(int *nums, int size)
{
  if (nums == NULL || size <= 1)
  {
    return;
  }

  int *aux = (int *)malloc(size * sizeof(int));
  sort(nums, 0, size - 1, aux);
  free(aux);
}

void sort(int *nums, int start, int end, int *aux)
{
  if (start >= end)
  {
    return;
  }

  int mid = start + (end - start) / 2;
  // DIVIDE
  sort(nums, start, mid, aux);
  sort(nums, mid + 1, end, aux);

  // MERGE
  if (nums[mid] > nums[mid + 1])
  {
    merge(nums, start, mid, end, aux);
  }
}

void merge(int *nums, int start, int mid, int end, int *aux)
{
  int l = start, r = mid + 1, idx = start;
  while (l <= mid && r <= end)
  {
    if (nums[l] <= nums[r])
    {
      aux[idx++] = nums[l++];
    }
    else
    {
      aux[idx++] = nums[r++];
    }
  }
  while (l <= mid)
  {
    aux[idx++] = nums[l++];
  }
  while (r <= end)
  {
    aux[idx++] = nums[r++];
  }
  for (int i = start; i <= end; i++)
  {
    nums[i] = aux[i];
  }
}

int main(void)
{
  int nums[] = {5, 3, 2, 1, 6, 6};

  merge_sort(nums, 6);
  printf("nums: ");
  for (int i = 0; i < 6; i++)
  {
    printf("%d ", nums[i]);
  }
  printf("\n");
  return EXIT_SUCCESS;
}
