#include<iostream>
void bubbleSort(int* arr, int size) {
	for (int i = 0; i < size-1; i++){
		for (int j = 0; j < size-i-1; j++){
			if (arr[j]>arr[j+1]){
				std::swap(arr[j],arr[j+1]);
			}
		}
	}
}
void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
}
int main() {
	int arr[] = { 64,25,12,22,11 };
	bubbleSort(arr, 5);
	print(arr, 5);
}