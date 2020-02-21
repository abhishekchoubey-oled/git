#include <stdio.h>
#include <stdlib.h>

int arr[] = {1,9,5,6,7,10,2,3};

static void insert_into_arr(int *arr, int *dst_arr, size_t size)
{
	int si = 0, gi = 0;
	int tmp, i;

	for (i = 0; i < size; i++) {
		
	}

}

static void print_arr(int *arr, size_t size)
{
	int i;
	for (i = 0; i<size; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
}

int main(void)
{
	int i;
	int *dst_arr;

	dst_arr = calloc(size, sizeof(int))
	if (!dst_arr) {
		printf("Failed to allocate memory\n");
		return 1;
	}
	size_t arr_size = sizeof(arr)/sizeof(int);
	print_arr(arr, arr_size);
	for (i = 0; i < arr_size; i++)
		insert_into_arr(arr[i], dst_arr, arr_size);
	print_arr(arr, arr_size);
	return 0;
}
