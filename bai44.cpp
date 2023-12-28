#include <stdio.h>

int main() {
  int arr[50];
  int sum = 0;
  int n;
  printf("Nhap n = "); scanf("%d", &n);
  for (int i = 0; i < n; i++){
  	printf("Nhap phan tu arr[%d] = ", i + 1); scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++) {
  	if(i > 1){
  	if(arr[i] > arr[i-1]) sum += arr[i];
  }
  }
  printf("Tong cac phan tu co gia tri lon hon gia tri tuyet doi dung lien sau no trong mang la %d\n", sum);
  return 0;
}
