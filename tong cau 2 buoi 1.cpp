#include<stdio.h>
#include<conio.h>

float Tong(int n, float x, float T, long M, int i, float S){
    if (n < 1)
        return 0;
    if (i <= n) {
        T = T * x;
        M = M * i;
        S = S + T/M;
        i++;
        return Tong(n, x, T, M, i, S);
    }
    else {
        printf("\nTong la %f", S);
        return S;
    }
}
int main()
{
    int n;
    float x, T=1, S=0;
    long M=1;
    printf("\nNhap x: ");
    scanf("%f", &x);
    printf("\nNhap n: ");
    scanf("%d", &n);
    S = Tong(n, x, T, M, 1, S);
    getch();
    return 0;
}