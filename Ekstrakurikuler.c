#include <stdio.h>

int main() {
    char name [50];
    int nilai;
    int kehadiran;

    printf("======================================\n");
    printf("SELEKSI EKSTRAKURIKULER\n ");
    printf("======================================\n");

    printf("\nMasukkan nama siswa   : ");
    scanf("%49[\n]", name);

    printf("Masukkan nilai tes (0-100)  : ");
    scanf("%d", &nilai);

    printf("Masukkan kehadiran (0-100)  : ");
    scanf("%d", &kehadiran);

    if ( nilai < 0 || nilai > 100 || 
        kehadiran < 0 || kehadiran > 100) {
        printf("\nData tidak valid\n");
        printf("Nilai dan kehadiran harus berada di antara 0 hingga 100.\n");
}
else {if (nilai >= 75 && kehadiran >= 80) {
            printf("\n=======================================================\n");
            printf("   HASIL SELEKSI\n", name);
            printf("=========================================================\n");

            printf( "Nama Siswa   : %s\n", name);
            printf( "Nilai Tes    : %d\n", nilai);
            printf( "Kehadiran    : %d\n", kehadiran);
            printf("Selamat Anda memenuhi syarat IT Club \n");
        }
        else {
            printf("\n=======================================================\n");
            printf("   HASIL SELEKSI\n");
            printf("=========================================================\n");

            printf( "Nama Siswa   : %s\n", name);
            printf( "Nilai Tes    : %d\n", nilai);
            printf( "Kehadiran    : %d\n", kehadiran);
            printf( "Status       : BELUM LOLOS SELEKSI\n");

            if (nilai < 75) {
                printf("Alasan   : Nilai tes kurang dari 75\n");
            }

            if (kehadiran < 80) {
                printf("Alasan   : Kehadiran kurang dari 80\n");
            }
        }

        printf("=========================================================\n");
        printf("Program seleksi selesai.\n");

        return 0;
    }
}