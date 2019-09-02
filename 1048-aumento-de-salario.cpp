#include <bits/stdc++.h>

using namespace std;

int main (void){
  float inicial, reajuste, fim;
  scanf(" %f", &inicial);
  if (inicial <= 400) {
    reajuste = 15;
    fim = inicial * 1.15;
  } else if (inicial <= 800){
    reajuste = 12;
    fim = inicial * 1.12;
  } else if (inicial <= 1200){
    reajuste = 10;
    fim = inicial * 1.10;
  } else if (inicial <= 2000) {
    fim = inicial * 1.07;
    reajuste = 7;
  }else {
    fim = (inicial *1.04);
    reajuste = 4;
  }
  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", fim, fim-inicial, reajuste);
}
