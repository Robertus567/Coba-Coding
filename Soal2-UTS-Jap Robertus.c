#include <stdio.h>

int main() {
    int Spesifikasi, Paket, Jam;
    int HargaPerJam, HargaPaketPagi, HargaPaketMalam, HargaPaketBertapa;
    int TotalHarga = 0;

    // BUAT NAMPILKE PILIHAN SPESIFIKASI
    printf("Pilih spesifikasi komputer:\n");
    printf("1. Standar\n");
    printf("2. Gaming\n");
    printf("3. Eksklusif\n");
    printf("Masukkan pilihan (1-3): ");
    scanf("%d", &Spesifikasi);

    // BUAT NAMPILIN HARGA BERDASARKAN SPESIFIKASI
    if (Spesifikasi == 1) {
        HargaPerJam = 3000;
        HargaPaketPagi = 10000;
        HargaPaketMalam = 15000;
        HargaPaketBertapa = 0; // Tidak ada paket bertapa untuk spesifikasi standar
    } else if (Spesifikasi == 2) {
        HargaPerJam = 5000;
        HargaPaketPagi = 15000;
        HargaPaketMalam = 20000;
        HargaPaketBertapa = 40000;
    } else if (Spesifikasi == 3) {
        HargaPerJam = 10000;
        HargaPaketPagi = 25000;
        HargaPaketMalam = 30000;
        HargaPaketBertapa = 60000;
    } else {
        printf("Pilihan spesifikasi tidak valid!\n");
        return 1;
    }

    //NAMPILIN PILIHAN PAKET
    printf("\nPilih paket penggunaan:\n");
    printf("1. Per jam\n");
    printf("2. Paket pagi (7:00 - 12:00)\n");
    printf("3. Paket malam (18:00 - 00:00)\n");
    if (Spesifikasi != 1) {
        printf("4. Paket bertapa (18:00 - 9:00)\n");
    }
    printf("Masukkan pilihan paket: ");
    scanf("%d", &Paket);


    //NGITUNG TOTAL BIAYA BERDASARKAN PAKET YANG DIPILIH
    if (Paket == 1) {
        printf("Masukkan jumlah jam: ");
        scanf("%d", &Jam);
        TotalHarga = HargaPerJam * Jam;
    } else if (Paket == 2) {
        TotalHarga = HargaPaketPagi;
    } else if (Paket == 3) {
        TotalHarga = HargaPaketMalam;
    } else if (Paket == 4 && Spesifikasi != 1) {
        TotalHarga = HargaPaketBertapa;
    } else {
        printf("Pilihan paket tidak valid!\n");
        return 1;
    }

    // MESEN MAKANAN MINUMAN JAJAN
    int Makanan, Minuman, Jajan, TotalMakanan = 0, TotalMinuman = 0, TotalJajan = 0;

    printf("\nPemesanan makanan:\n");
    printf("1. Mie Instan (Rp. 5.000)\n");
    printf("2. Mie Instan Double (Rp. 9.000)\n");
    printf("3. Mie Soto Instan (Rp. 6.000)\n");
    printf("Pilih makanan (1-3, 0 untuk selesai): ");
    while (1) {
        scanf("%d", &Makanan);
        if (Makanan == 0) break;  //BERHENTIIN LOOP KALO INPUTE 0

        if (Makanan == 1) {
            TotalMakanan += 5000;
            printf("Mie Instan dipesan.\n");
        } else if (Makanan == 2) {
            TotalMakanan += 9000;
            printf("Mie Instan Double dipesan.\n");
        } else if (Makanan == 3) {
            TotalMakanan += 6000;
            printf("Mie Soto Instan dipesan.\n");
        } else {
            printf("Pilihan tidak valid!\n");
        }
        printf("Pilih makanan (1-3, 0 untuk selesai): ");
    }

    printf("\nPemesanan minuman:\n");
    printf("1. Es Teh (Rp. 5.000)\n");
    printf("2. Es Jeruk (Rp. 6.000)\n");
    printf("Pilih minuman (1-2, 0 untuk selesai): ");
    while (1) {
        scanf("%d", &Minuman);
        if (Minuman == 0) break;  //BERHENTIIN LOOP KALO INPUTE 0

        if (Minuman == 1) {
            TotalMinuman += 5000;
            printf("Es Teh dipesan.\n");
        } else if (Minuman == 2) {
            TotalMinuman += 6000;
            printf("Es Jeruk dipesan.\n");
        } else {
            printf("Pilihan tidak valid!\n");
        }
        printf("Pilih minuman (1-2, 0 untuk selesai): ");
    }

    printf("\nPemesanan jajan:\n");
    printf("1. Citatos (Rp. 3.000)\n");
    printf("2. Beng-beng (Rp. 2.500)\n");
    printf("Pilih jajan (1-2, 0 untuk selesai): ");
    while (1) {
        scanf("%d", &Jajan);
        if (Jajan == 0) break;  //BERHENTIIN LOOP KALO INPUTE 0

        if (Jajan == 1) {
            TotalJajan += 3000;
            printf("Citatos dipesan.\n");
        } else if (Jajan == 2) {
            TotalJajan += 2500;
            printf("Beng-beng dipesan.\n");
        } else {
            printf("Pilihan tidak valid!\n");
        }
        printf("Pilih jajan (1-2, 0 untuk selesai): ");
    }

    // NGITUNG LAYANAN PRINT
    int PilihanPrint, Lembar, TotalPrint = 0;

    printf("\nPilih layanan print/fotokopi:\n");
    printf("1. Print Hitam Putih (Rp. 500/lembar)\n");
    printf("2. Print Berwarna (Rp. 1.500/lembar)\n");
    printf("3. Fotokopi (Rp. 500/lembar)\n");
    printf("Pilih layanan (1-3, 0 untuk selesai): ");
    while (1) {
        scanf("%d", &PilihanPrint);
        if (PilihanPrint == 0) break; //BERHENTIIN LOOP KALO INPUTE 0

        printf("Masukkan jumlah lembar: ");
        scanf("%d", &Lembar);

        if (PilihanPrint == 1) {
            TotalPrint += 500 * Lembar;
            printf("Print Hitam Putih %d lembar dipesan.\n", Lembar);
        } else if (PilihanPrint == 2) {
            TotalPrint += 1500 * Lembar;
            printf("Print Berwarna %d lembar dipesan.\n", Lembar);
        } else if (PilihanPrint == 3) {
            TotalPrint += 500 * Lembar;
            printf("Fotokopi %d lembar dipesan.\n", Lembar);
        } else {
            printf("Pilihan tidak valid!\n");
        }
        printf("Pilih layanan (1-3, 0 untuk selesai): ");
    }

    // Menghitung total biaya keseluruhan
    TotalHarga += TotalMakanan + TotalMinuman + TotalJajan + TotalPrint;

    // Menampilkan hasil
    printf("\nTotal biaya penggunaan: Rp %d\n", TotalHarga);
    printf("Total biaya makanan: Rp %d\n", TotalMakanan);
    printf("Total biaya minuman: Rp %d\n", TotalMinuman);
    printf("Total biaya jajan: Rp %d\n", TotalJajan);
    printf("Total biaya print/fotokopi: Rp %d\n", TotalPrint);
    printf("Total keseluruhan: Rp %d\n", TotalHarga);

    return 0;
}

