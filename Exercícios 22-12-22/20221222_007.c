#include <stdio.h>

void main() {
  int tmpTt, tmpHr, tmpMm, tmpSg;
  float msInicial, msFinal;

  printf("Massa Inicial (em Gramas): ");
  scanf("%f", &msInicial);

  msFinal = msInicial;
  tmpTt = 0;
  
  while (msFinal >= 0.5) {
    msFinal = msFinal / 2;
    tmpTt += 50;
  }

  printf("\n");
  printf("Massa Inicial.: %f gramas\n", msInicial);
  printf("Massa Final...: %f gramas\n", msFinal);

  printf("\n");
  printf("Tempo Total...: %d segundos\n", tmpTt);
  
  tmpHr = (tmpTt / 3600);
  tmpMm = (tmpTt % 3600) / 60;
  tmpSg = (tmpTt % 3600) % 60;
  
  printf("Tempo Dividido: %d:%d:%d", tmpHr, tmpMm, tmpSg);
}
