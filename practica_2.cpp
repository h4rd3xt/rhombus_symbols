#include <stdio.h>
int lado;
/***************************
IMPRIME EL V�RTICE SUPERIOR
****************************/
void impVerticeS() {
  for (int i = 1 ; i <= lado-1 ; i++) {
    printf(" ");
  }
  printf("@\n");
}
/*****************************
IMPRIME EL TRI�NGULO SUPERIOR
******************************/
void impTS() {
  /*IMPRIME EL TRI�NGULO SUPERIOR IZQUIERDO*/
  for (int fila = 2 ; fila <= lado ; fila++) { //contador del n�mero de la fila
    for (int blanco = 1 ; blanco <= lado-fila ; blanco++) { //contador del n�mero de espacios en blancos
      printf(" ");
    }
    for (int signo = 0 ; signo < fila ; signo++) { //contador del signo a imprimir lado izquierdo
      if (signo%4 == 0) {
        printf("@");
      }
      if (signo%4 == 1) {
        printf(".");
      }
      if (signo%4 == 2) {
        printf("o");
      }
      if (signo%4 == 3) {
        printf(".");
      }
    }
    /*IMPRIME EL TRI�NGULO SUPERIOR DERECHO*/
    for (int signo = fila-2; signo >= 0 ; signo--) { //contador del signo a imprimir lado derecho
      if (signo%4 == 0) {
        printf("@");
      }
      if (signo%4 == 1) {
        printf(".");
      }
      if (signo%4 == 2) {
        printf("o");
      }
      if (signo%4 == 3) {
        printf(".");
      }
    }
    printf("\n");
  }
}
/*****************************
IMPRIME EL TRI�NGULO INFERIOR
******************************/
void impTI() {
  /*IMPRIME EL TRI�NGULO INFERIOR IZQUIERDO*/
  for (int fila = lado-1 ; fila >= 2 ; fila--) { //contador del n�mero de la fila
    for (int blanco = 1 ; blanco <= lado-fila ; blanco++) { //contador del n�mero de espacios en blancos
      printf(" ");
    }
    for (int signo = 0 ; signo < fila ; signo++) { //contador del signo a imprimir lado izquierdo
      if (signo%4 == 0) {
        printf("@");
      }
      if (signo%4 == 1) {
        printf(".");
      }
      if (signo%4 == 2) {
        printf("o");
      }
      if (signo%4 == 3) {
        printf(".");
      }
    }
    /*IMPRIME EL TRI�NGULO INFERIOR DERECHO*/
    for (int signo = fila-2; signo >= 0 ; signo--) { //contador del signo a imprimir lado derecho
      if (signo%4 == 0) {
        printf("@");
      }
      if (signo%4 == 1) {
        printf(".");
      }
      if (signo%4 == 2) {
        printf("o");
      }
      if (signo%4 == 3) {
        printf(".");
      }
    }
    printf("\n");
  }
}
/***************************
IMPRIME EL V�RTICE INFERIOR
****************************/
void impVerticeI() {
  for (int i = lado-1 ; i >= 1 ; i--) {
    printf(" ");
  }
  printf("@\n");
}
/******************
PROGRAMA PRINCIPAL
*******************/
int main() {
  printf("%cLado del Rombo%c",168,63);
  scanf("%d",&lado);
  if (lado == 1) {
    printf("@");
  } else if (lado > 0 && lado <= 20) {
    impVerticeS();
    impTS();
    impTI();
    impVerticeI();
  }
}
