#include <stdio.h>
#include <math.h>

int main() {
  int arr[50];
  int sum = 0;
  int n;
  printf("Nhap n = "); scanf("%d", &n);
  for (int i = 0; i < n; i++){
  	do{
  	printf("Nhap phan tu arr[%d] = ", i + 1); scanf("%d", &arr[i]);
  	}while(arr[i] < 10);
  }
  for (int i = 0; i < n; i++) {
  	int sole = abs(arr[i]);
  	sole /= 10;
    if(sole % 2 != 0) sum += sole;
  }
  printf("Tong cac phan tu co gia tri dau tien la chu so le trong mang %d\n", sum);
  return 0;
}

