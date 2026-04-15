/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 1
 *   Hari dan Tanggal    : Rabu, 15 April 2026
 *   Nama (NIM)          : Joachim Muchaimin (13224034)
 *   Nama File           : KodeBatuStabil.c
 *   Deskripsi           : Hitung berapa langkah sampai n=1 untuk tiap n
 */


 #include <stdio.h>
 #include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    int n, i;
    int sum;

    for(i = 0; i < T; i++){
        sum =0;
        scanf("%d", &n);
        while(n != 1){
            if(n % 2 == 0){
                n = n/2;
            }
            else if(n % 2 == 1 && n > 1){
                n = 3*n+1;
            }
            sum++;
        }
        printf("LANGKAH %d\n", sum);
    }

 }
 
