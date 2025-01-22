#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[50];

    printf("Program Untuk Menentukan Substring Dari Sebuah String\n\n");

    // Memasukkan string utama
    printf("Masukkan String : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Menghapus newline di akhir input

    // Memasukkan substring
    printf("\nMasukkan Substring : ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0'; // Menghapus newline di akhir input

    // Mencari substring dalam string utama
    if (strstr(str, substr) != NULL) {
        printf("\n\tSubstring ADA di dalam string.\n");
    } else {
        printf("\n\tSubstring TIDAK ADA di dalam string.\n");
    }

    return 0;
}

