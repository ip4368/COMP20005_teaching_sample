#include <stdio.h>
#include <stdlib.h>

/*****************************************************************************/
/*
 * Function prototypes
 */

/*
 * swap the int a and b in-place
 */
void int_swap(int *a, int*b);

/*
 * insertion sort
 * nums is the array of int, n is the number of element in array
 */
void insertion_sort(int *nums, int n);

/*
 * print out the array on one line
 * nums is the array of int, n is the number of element in array
 */
void print_int_arr(int *nums, int n);

/*****************************************************************************/

int main(int argc, char const *argv[])
{
	int numbers[] = {5, 1, 3, 7, 9, 2, 1, 3, 6};
	int len = 9;
	insertion_sort(numbers, len);

	print_int_arr(numbers, len);

	return 0;
}

/*****************************************************************************/
/*
 * Functions implementations
 */

void int_swap(int *a, int*b){
	int t = *a;
	*a = *b;
	*b = t;
}

void insertion_sort(int *nums, int n){
	int i, j;
	for(i=1; i<n; i++){
		for(j=i-1; j>=0 && nums[j+1]<nums[j]; j--){
			int_swap(&nums[j], &nums[j+1]);
		}
	}
}

void print_int_arr(int *nums, int n){
	int i;
	for(i=1; i<n; i++){
		printf(" %d", nums[i]);
	}
	printf("\n");
}
