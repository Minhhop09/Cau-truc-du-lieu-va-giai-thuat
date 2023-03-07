#include<stdio.h>
int main()
{
    int n; int a[100]; int dem=0;
    do{
        printf("Nhap so phan tu mang: ");
        scanf("%d", &n);
    }
    while(n<1 || n>100);
    
    //nhap vao cac phan tu cua mang
    for(int i=0; i< n; i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    printf("Mang sau khi nhap la:\n");
    //hien thi mang ra man hinh
    for(int i=0; i< n; i++)
    {
        printf("%d \t",a[i]);
    }
    for(int i=0; i< n-1; i++)
    {
        for(int j=i+1; j< n; j++)
        if(a[i]>a[j])//neu a[i] > a[j]
        {
            //dung bien temp dung de doi cho a[i] voi a[j]
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    printf("\nMang sau khi sap xep la:\n");
    //hien thi mang sap xep ra man hinh
    for(int i=0; i< n; i++)
    {
        printf("%d \t",a[i]);
    }
    
}