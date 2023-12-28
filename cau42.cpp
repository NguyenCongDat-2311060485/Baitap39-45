#include <stdio.h>

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
  	if((arr[i] / 10) % 10 == 5) sum += arr[i];
  }
  printf("Tong cac phan tu co chu so hang chuc la 5 trong mang %d\n", sum);
  return 0;
}
