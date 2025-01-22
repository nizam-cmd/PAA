#include <stdio.h>

int main() {
    // Deklarasi variabel
    int n, i, angka[100], max, min;

    printf("Maximum Dan Minimum\n\n");

    // Meminta jumlah angka dari pengguna
    printf("Masukkan Banyak Angka: ");
    scanf("%d", &n);

    // Validasi jumlah angka harus lebih dari 0
    if (n <= 0) {
        printf("Jumlah angka harus lebih dari 0.\n");
        return 1;
    }

    printf("\nMasukkan Angka-angkanya:\n");

    // Memasukkan angka pertama dan menginisialisasi nilai max dan min
    scanf("%d", &angka[0]);
    max = angka[0];
    min = angka[0];

    // Memasukkan angka lainnya dan mencari max serta min
    for (i = 1; i < n; i++) {
        scanf("%d", &angka[i]);

        if (angka[i] > max) {
            max = angka[i];
        }

        if (angka[i] < min) {
            min = angka[i];
        }
    }

    // Menampilkan angka-angka yang dimasukkan
    printf("\nAngka-angkanya adalah: ");
    for (i = 0; i < n; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n\n");

    // Menampilkan hasil max dan min
    printf("Maksimum Angka: %d\n", max);
    printf("Minimum Angka: %d\n", min);

    return 0;
}

