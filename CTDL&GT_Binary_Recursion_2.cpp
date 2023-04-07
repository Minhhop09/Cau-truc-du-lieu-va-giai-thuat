#include<stdio.h>
#include <conio.h>
#include<math.h>
int fib(int n){
  if(n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}
int main() {
 int i;
    printf("10 so dau tien cua day so Fibonacci: \n");
        for (i = 0; i < 10; i++) {
        printf("%d ", fib(i));
    }
}
//ví dụ đệ quy nhị phân, chương trình C tìm 10 số Fibonacci đầu tiên, link tham khảo: https://viettuts.vn/bai-tap-c/bai-tap-ve-de-quy-trong-c
