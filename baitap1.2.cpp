#include<stdio.h>
#include<conio.h>

// ham tim kiem tuyen tinh
int linearSearch(int arr[], int n, int x) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			return i; 
			// tra ve chi muc neu phan tu duoc tim thay
		}
	}
	return -1;
	// tra ve -1 neu khong tim thay phan tu
}
int main() {
	int arr[] = {2, 3, 4, 10, 40};
	int n = sizeof(arr) / 
sizeof(arr[0]);
    int x = 10;
    int result = linearSearch(arr, n, x);
    if (result == -1) {
    	printf("phan tu %d khong duoc tim thay trong mang\n", x);
    }  else {
    	printf("phan tu %d duoc tim thay tai chi muc %d \n", x, result);
    }
   return 0;
}
