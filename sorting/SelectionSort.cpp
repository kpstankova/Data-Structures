#include<iostream>
void selectionSort(int* arr, int size) {
	for (int i = 0; i < size-1; i++){
		int indx = i;
		for (int j = i+1; j < size; j++){
			if (arr[j] < arr[indx]) indx = j;
		}
		std::swap(arr[i], arr[indx]);
	}
}
void print(int* arr,int size) {
	for (int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}
}
int main() {
	int arr[] = {64,25,12,22,11};
	selectionSort(arr, 5);
	print(arr, 5);
}