#include<stdio.h>
void infile( FILE *f, int &n, int arr[]){
	if( f != NULL){
		fscanf( f, "%d", &n);
		for(int i = 0; i < n; i++)
			fscanf( f,"%d", &arr[i]);
	}
	else
		printf("\nOpen file fail!");
} 
void printfile( FILE *f, int n, int a[]){
	if(f != NULL){
		for(int i = 0; i < n; i++)
			fscanf(f,"%d ", a[i]);
	}
	else
		printf("\nOpen file fail!");
}
int linearsearch( int arr[], int n, int x){
	int i;
	for( i = 0; i < n; i++){
		if( arr[i] == x)
		return i;
	}
	return -1;
}
int binarysearch( int arr[], int l, int r, int x){
	if( r >= l){
		int mid = l + (r - l) / 2;
		if( arr[mid] == x)
			return mid;
		if( arr[mid] > x)
			return binarysearch( arr, l, mid - 1, x);
		return binarysearch( arr, mid + 1, r, x);
	}
	return -1;
}
void swap( int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubblesort( int arr[], int n){
	int i, j;
	for( i = 0; i < n-1; i++){
		for( j = 0; j < n-i-1; j++){
			if( arr[j] > arr[j+1])
				swap( &arr[j], &arr[j+1]);
		}
		
	}
}
void insertionsort(int arr[], int n){
	int i, key, j;
	for (i = 1; i < n; i++){
		key = arr[i];
		j = i - 1;
		while( j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
}
int partition( int arr[], int low, int high){
	int pivot = arr[high];
	int i = (low-1);
	for( int j = low; j <= high - 1; j++){
		if( arr[j] < pivot){
			i++;
			swap( &arr[i], &arr[j]);
		}
	}
	swap( &arr[i+1], &arr[high]);
	return( i+1);
}
void quicksort( int arr[], int low, int high){
	if( low < high){
		int pi = partition(arr, low, high);
		quicksort( arr, low, pi - 1);
		quicksort( arr, pi + 1, high);
	}
}
void printarray( int arr[], int size){
	int i; 
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main(){
	int arr[100],n;
	FILE *f = fopen("input.txt", "r");
	FILE *p = fopen("output.txt", "w");
	infile(f, n, arr);
	
	printarray(arr, n);
	if( linearsearch( arr, n, 3) == -1)
		printf("not found\n");
	else
		printf("found at index %d\n", linearsearch( arr, n, 3));
	quicksort( arr, 0, n - 1);
	printf("Sorted array: \n");
	printfile(p, n, arr);
	return 0;
}
