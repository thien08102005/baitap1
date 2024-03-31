#include<stdio.h>
#include<conio.h>

void nhapMang(int arr[], int n) {
   printf("Nhap cac phan tu cua mang:\n");
   for(int i = 0; i < n; i++){
   	   printf("arr[%d] = ", i);
   	   scanf("%d ", arr[i]);
   }
}

void xuatMang(int arr[], int n) {
	printf("Mnag da nhap la: ");
	for (int i = 0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
 int main() {
 	int n;
 	printf("Nhap so phan tu cua mang: ");
 	scanf("%d", &n);
 	int mang[n];
 	nhapMang(mang, n);
 	xuatMang(mang, n);
 	return 0;
 	
 }
