#include <stdio.h>
#include "point.h"

int main() {
  POINT p1,p2;
  //baca tulis point
  printf("point 1: ");
  BacaPOINT(&p1); //termasuk MakePOINT
  TulisPOINT(p1);
  printf("\n");

  printf("point 2: ");
  BacaPOINT(&p2);
  TulisPOINT(p2);
  printf("\n");
  //operasi relasional
  (EQ(p1,p2)) ? printf("EQ bernilai true\n"):printf("EQ bernilai false\n");
  (NEQ(p1,p2)) ? printf("NEQ bernilai true\n"):printf("NEQ bernilai false\n");
  (IsOrigin(p1)) ? printf("IsOrigin bernilai true\n"):printf("IsOrigin bernilai false\n");
  (IsOnSbX(p1)) ? printf("IsOnSbX bernilai true\n"):printf("IsOnSbX bernilai false\n");
  (IsOnSbY(p1)) ? printf("IsOnSbY bernilai true\n"):printf("IsOnSbY bernilai false\n");
  printf("Titik "); TulisPOINT(p1); printf(" berada di kuadran: %d\n",Kuadran(p1));
  //operasi lainnya
  printf("NextX dari "); TulisPOINT(p1); printf(" adalah ");
  TulisPOINT(NextX(p1)); printf("\n");
  printf("NextY dari "); TulisPOINT(p2); printf(" adalah ");
  TulisPOINT(NextY(p2)); printf("\n");
  float dx,dy;
  printf("dx, dy: "); scanf("%f %f",&dx,&dy);
  printf("PlusDelta dari "); TulisPOINT(p1); printf(" adalah ");
  TulisPOINT(PlusDelta(p1,dx,dy)); printf("\n");
  printf("MirrorOf pada sbX dari "); TulisPOINT(p2); printf(" adalah ");
  TulisPOINT(MirrorOf(p2,true)); printf("\n");
  printf("MirrorOf pada sbY dari "); TulisPOINT(p2); printf(" adalah ");
  TulisPOINT(MirrorOf(p2,false)); printf("\n");
  printf("Jarak0 dari "); TulisPOINT(p1); printf(" adalah %f\n",Jarak0(p1));
  printf("Panjang dari titik "); TulisPOINT(p1); printf(" dan titik "); TulisPOINT(p2);
  printf(" adalah %f\n",Panjang(p1,p2));

  POINT p3;
  printf("point 3: ");
  BacaPOINT(&p3);
  TulisPOINT(p3); printf("\n");
  printf("dx, dy: "); scanf("%f %f",&dx,&dy);

  TulisPOINT(p3);
  printf(" yang di geser sejauh %.2f pada sbX dan %.2f pada sbY akan menjadi ",dx,dy);
  Geser(&p3,dx,dy);
  TulisPOINT(p3); printf("\n");

  TulisPOINT(p3); printf(" yang di geser ke sbX akan menjadi ");
  GeserKeSbX(&p3);
  TulisPOINT(p3); printf("\n");

  TulisPOINT(p3); printf(" yang di geser ke sbY akan menjadi ");
  GeserKeSbY(&p3);
  TulisPOINT(p3); printf("\n");

  TulisPOINT(p1); printf(" yang di mirror ke sbX akan menjadi ");
  Mirror(&p1,true);
  TulisPOINT(p1); printf("\n");

  TulisPOINT(p1); printf(" yang di mirror ke sbY akan menjadi ");
  Mirror(&p1,false);
  TulisPOINT(p1); printf("\n");

  float sudut;
  printf("sudut: "); scanf("%f",&sudut);
  TulisPOINT(p2); printf(" yang di putar sebesar %.2f akan menjadi ",sudut);
  Putar(&p2,sudut);
  TulisPOINT(p2); printf("\n");

  return 0;
}
