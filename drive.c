#include "mesinkar.h"
#include "mesinkata.h"
#include <stdio.h>

void CetakKata(Kata kata);
/* Prosedur untuk mencetak kata ke layar
  I.S: kata sembarang
  F.S: kata tercetak di layar
*/

int main (){
  STARTKATA();

  while (!EndKata) {
    CetakKata(CKata);
    printf("-%d\n", CKata.Length);
    ADVKATA();
  }

  return 0;
}

void CetakKata(Kata kata){
  int i;
  for (i = 1; i <= kata.Length; i++) {
    printf("%c", kata.TabKata[i]);
  }
}
