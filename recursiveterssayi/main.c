#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ters(int sayi, int len)
{
    if (len == 1)
    {
        return sayi;
    }
    else
    {
        return (((sayi % 10) * pow(10, len - 1)) + ters(sayi / 10, --len));
    }
}

int main()
{
    int sayi, sonuc;
    int uzunluk = 0, temp;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    temp = sayi;
    while (temp != 0)
    {
        uzunluk++;
        temp = temp / 10;
    }
    sonuc = ters(sayi, uzunluk);
    printf("%d sayisinin tersi %d.\n", sayi, sonuc);
    return 0;
}
