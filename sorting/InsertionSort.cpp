#include<iostream>
void insertionSort(int* arr, int size) {
	for (int i = 0; i < size; i++){
		int temp = arr[i];
		int j=i-1;
		for (; j >=0; j--){
			if (arr[j] > temp) {
				arr[j + 1] = arr[j];
			}
			else break;

			
		}
		arr[j + 1] = temp;
	}
}
void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
}
int main() {
	int arr[] = { 64,25,12,22,11 };
	insertionSort(arr, 5);
	print(arr, 5);
}