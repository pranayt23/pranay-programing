//  insertion sort
#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i,temp, j;
	for (i = 1; i < n; i++) {
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
}
void printArray(int arr[], int n)
{
	int i;
	printf("\n \n sorted array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	int n;
	printf("Enter the size of an array :");
	int arr[n];
	scanf("%d",&n);
	for(int i = 0; i < n;i++){
	    scanf("%d",&arr[i]);
	}
	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}
