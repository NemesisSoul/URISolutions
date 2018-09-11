#include <bits/stdc++.h>

using namespace std;

int main()
{
	double pI, pII, pIII, pIV, pR, average;
	
	//Pede pelas notas a serem calculadas:
	cin >> pI >> pII >> pIII >> pIV;
	
	//calculo de media
	average = ((2.0*pI) + (3.0*pII) + (4.0*pIII) + pIV)/10.0;
	
	printf("Media: %.1lf\n", average);
		
	//Caso a nota teha sido maior ou igual a 7
	if(average >= 7.0)
		printf("Aluno aprovado.\n");
	
	//Caso tenha ficado entre 5 e 7, ir para exame.
	else if ( average >= 5.0)
	{
		printf("Aluno em exame.\n");
		printf("Nota do exame: ");
		//Pede por nota do exame
		cin >> pR;
		average = (average + pR)/2.0;
		printf("%.1lf\n", pR);
		//Se a nova media ficar acima ou igual a 5, o aluno foi aprovado.
		if (average >= 5.0)
			printf("Aluno aprovado.\n");
		else
			printf("Aluno reprovado.\n");
		
		printf("Media final: %.1lf\n", average);
	} 
	else 
		printf("Aluno reprovado.\n");
		
	return 0;
}
