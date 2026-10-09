#include <stdio.h>
// Memanggil library stdio.h
// Libarary ini digunakan untuk fungsi input dan output,
// seperti printf() dan scanf()
// printf() = Menampilkan informasi ke layar/output
// scanf() = Menerima/membaca input dari pengguna

int main() {
    // Fungsi utama program
    // Program C akan mulai dijalankan dari fungsi main()

    // ==================================================
    // 1. DEKLARSI VARIABEL
    // ==================================================
    
    char nama[50];
    // Membuat variabel nama bertipe char. /Tipe data untuk menyimpan satu karakter.
    // [50] berati dapat menyimpan maksiimal 49 karakter 
    // ditambah 1 karalkter khusus untuk menandai akhir teks.

    char buku[100];
    // Membuat variabel buku bertipe char.
    // Variabel ini digunakan untuk menyimpan judul buku
    //  [100] berarti dapat menyimpan teks hingga 99 karakter.
    
    int jumlahBuku; 
    // Membuat variabel JumlahBuku bertipe int.
    // variabel ini digunakan untuk menyimpan jumlah buku
    // 

    int lamaPeminjaman;
    // Mmebuat variabel LamaPeminjaman bertipe int.
    // variabel ini digunakan untuk menyimpan lama peminjaman

    // ==================================================
    // 2. MENAMPILKAN JUDUL PROGRAM
    // ==================================================

    printf("=====================================\n");
    // Menampilkan garis pembatas pada layar
    // \n digunkan untuk berpindah kebaris berikutnya.

    printf("PEMINJAMAN BUKU PERPUSTAKAAN\n");
    // Menampilkan judul program
    
    printf("=====================================\n");
    // Menampilkan garis pembatas bagian bawah


    // ==================================================
    // 3. INPUT NAMA PEMINJAM
    // ==================================================

    printf("Masukkan nama peminjaman : ");
    // Menampilkan pesan agar pengguna memasukkan nama.

    scanf ("%[^\n]", nama);
    // Membaca nama yang dimasukkan pengguna.
    // %[^\n] digunakan agar input yang memiliki spasi

    // ==================================================
    // 4. INPUT JUDUL BUKU
    // ==================================================

    printf("Masukkan judul buku");
    // Menampilkan pesan agar pengguna memasukkan judul  buku.

    scanf("%[^\n]", buku);
    // Membaca judul buku yang dimasukkan pengguna.
    // %[^\n] memungkinkan judl buku memiliki spasi.

    // ==================================================
    // 5. INPUT JUMLAH BUKU 
    // ==================================================

    printf("Masukkan jumlah buku : ");
    // Menampilkan pesan agar pengguna memasukkan 
    // jumlah buku yang dipinjam.

    scanf("%d", & jumlahBuku);
    // Membaca angka yang dimasukkan pengguna.
    // %d digunkan untuk membaca databertipe int.
    // &jumlahBuku menunjukkan alamat variabel 
    // tempat data akan disimpan.

    // ==========================================
    // 6. INPUT LAMA PEMINJAMAN
    // ==========================================

    printf("Masukkan lama peminjaman (dalam hari): ");
    // Menampilkan pesan agar pengguna memasukkan lama peminjaman dalam satuan hari.


    scanf("%d", &lamaPeminjaman);

    // 7. MENAMPILKAN INFORMASI PEMINJAMAN
    printf("\n");
    printf("====================================\n");
    printf("            DATA PEMINJAMAN         \n");
    printf("====================================\n");

    // 8. MENAMPILKAN NAMA PEMINJAM
    printf("Nama Peminjam: %s\n", nama);

    // 9. MENAMPILKAN JUDUL BUKU
    printf("Judul Buku: %s\n", buku);

    // 10. MENAMPILKAN JUMLAH BUKU
    printf("Jumlah Buku: %d\n", jumlahBuku);

    // 11. MENAMPILKAN LAMA PEMINJAMAN
    printf("Lama Peminjaman: %d hari\n", lamaPeminjaman);
    // Menampilkan lama peminjaman dalam satuan hari.
    // %d digunakan karena lamaPeminjaman bertipe int.

    // 12. PESAN AKHIR
    printf("====================================\n");
    printf("       DATA BERHASIL DISIMPAN       \n");
    printf("====================================\n");

    // 13. MENGAKHIRI PROGRAM
    return 0;
    // Mengakhiri program.
    // Nilai 0 menunjukkan bahwa program selesai
    // tanpa mengalami kesalahan.

}