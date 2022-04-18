//Nama  : Ananda Rizky Pratama
//NIM   : 24060121140118
//Lab   : B2 Informatika 2021
//Waktu pembuatan : 13 April 2022

#include <stdio.h>


int main()
{

    //Kamus
    int A[14] = {1,7,32,16,21,30,47,8,2,27,11,22,14,5};
    int N = 14;
    int X = 21;
    int f;

    //Algoritma
    f = seqSearch(A, N, X);
    if(f != -1){
        printf("Bangku nomor 21 ditemukan di index ke %d \n", f);
    }
    else{
        printf("Bangku nomor 21 tidak ketemu");
    }
    return 0;
}

int seqSearch(int A[], int N, int X)
{
    //Kamus Lokal
    //Counter
    int i;
    i = 0;
    printf("Banyaknya Siswa yang hadir :%d\n");

    while(i<N-1 && A[i] != X){
        printf("Bangku nomor 21 bukan di indeks :%d\n", i);
        i=i+1;
    }
    if(A[i] == X){
        return i;
    }
    else{
        return -1;
    }
}
