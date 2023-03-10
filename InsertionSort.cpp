#include <stdio.h>
#include <math.h>
#include <conio.h>
void Nhap(int a[],int n){
    for(int i=0; i<n; i++){
        printf("\nNhap a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[],int n){
    for(int i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
}void insertionSort(int a[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = a[i];
       j = i-1;
  
       
       while (j >= 0 && a[j] > key)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = key;
   }
   printf("\nMang sau khi sap xep la:\n");    
    Xuat(a,n); 
}
int main()
{
	int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang sau khi nhap la:\n");
    Xuat(a,n);
	insertionSort(a,n);
}
	   