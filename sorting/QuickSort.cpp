#include<iostream>
int partition(int* arr, int startIndex, int endIndex) {
	int pivot = arr[endIndex];
	int partitionIndex = startIndex;

	for (int i = startIndex; i < endIndex; i++) {
		if (arr[i] <= pivot) {
			std::swap(arr[i], arr[partitionIndex]);
			partitionIndex += 1;
		}
	}
	std::swap(arr[partitionIndex], arr[endIndex]);
	return partitionIndex;
}
void quickSort(int* arr, int startIndex, int endIndex) {
	if (startIndex >= endIndex) {
		return;
	}
	int partitionIndex = partition(arr, startIndex, endIndex);
	quickSort(arr, startIndex, partitionIndex - 1);
	quickSort(arr, partitionIndex + 1, endIndex);
}
int main() {
	int arr[10] = { 1, 9, 3, 1, 5, 6, 8, 10, 8, 5 };
	quickSort(arr, 0, 9);

	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}