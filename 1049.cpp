#include <bits/stdc++.h>
using namespace std;

int main(void){
  char cordado[25], filo[25], dieta[25];
  cin >> cordado >> filo >> dieta;
  if (!strcmp(cordado, "vertebrado")) {
    if (!strcmp(filo, "ave")) {
      if (!strcmp(dieta, "carnivoro"))
        cout << "aguia";
      else
        cout << "pomba";
    } else {
      if (!strcmp(dieta, "onivoro"))
        cout << "humano";
      else
        cout << "vaca";
    }
  } else {
    if (!strcmp(filo, "inseto")) {
      if (!strcmp(dieta, "hematofago"))
        cout << "pulga";
      else
        cout << "lagarta";
    } else {
      if (!strcmp(dieta, "hematofago"))
        cout << "sanguessuga";
      else
        cout << "minhoca";
    }
  }
  cout << '\n';
  return 0;
}
