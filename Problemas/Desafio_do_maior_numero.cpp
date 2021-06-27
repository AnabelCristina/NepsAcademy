/**           DESAFIO DO MAIOR NÚMERO              **/
/** Dada uma entrada de vários números, determinar **/
/** o maior entre eles                             **/

/** Problema: https://neps.academy/br/exercise/323 **/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int maior, numero;

	cin >> maior; //recebe o primeiro numero da sequencia

	do{
		cin >> numero; //recebe outro numero

		if (numero!= 0) //compara com o maior e atualiza a variavel
			maior = (numero > maior) ? numero : maior;

	}
	while(numero!=0);

	cout << maior;
}
