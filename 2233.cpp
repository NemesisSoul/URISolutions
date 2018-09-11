#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long int r, g, b, verde, azul;
  //Pega valores em HEX
  scanf(" %llx", &r);
  scanf(" %llx", &g);
  scanf(" %llx", &b);
  //Areas
  verde = pow(r/g,2);
  azul = verde * pow((g/b), 2);
  //Printa valores
  printf("%llx\n", (1 + verde + azul));
  return 0;
}
