/* Nama      : PROGRAM MENGHITUNG NILAI RATA RATA MENGGUNAKAN DO WHILE
 * Tanggal   : 29 September 2021
 * Author    : RENA EGINA BR PANDIA
 * Tujuan   : Menjelaskan cara membuat nilai rata rata menggunakan Do While
 */

#include <stdio.h>
int main()

{
  int i = 1, n, jumlah = 0, x;
  float rerata;
  printf("\t\t||=======================================||\n");
  printf("\t\t\tPROGRAM MENCARI NILAI RATA RATA\n\n");
  printf("\t\t||=======================================||\n\n");

  printf("Input banyak data : ");
  scanf("%d", &n);

  do
  {
    printf("Input nilai data ke-%d : ", i);
    scanf("%d", &x);
    jumlah = jumlah + x;
    i++;
  }

  while (i <= n);
  {
    rerata = jumlah / n;
    printf("\nRata-rata = %.2f\n", rerata);
    printf("\nJumlah Data = %d\n", jumlah);
  }
  return 0;
}
