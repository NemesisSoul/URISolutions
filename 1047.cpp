#include <bits/stdc++.h>
#define DIA 1440
using namespace std;

int main(void) {
  int hinicio, minicio, hfim, mfim, htotal, mtotal;
  scanf("%d %d %d %d", &hinicio, &minicio, &hfim, &mfim);
  //calcula h
  minicio += 60*hinicio;
  mfim += 60*hfim;

  if(minicio == mfim){
    mtotal = DIA;
  } else if(minicio > mfim){
    mtotal = DIA - minicio + mfim;
  } else {
    mtotal = mfim - minicio;
  }
  htotal = mtotal/60;
  mtotal = mtotal%60;

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", htotal, mtotal);
  return 0;
}
