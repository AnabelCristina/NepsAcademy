/**             FITA COLORIDA               **/
/** O Objetivo � criar uma "fita colorida"  **/
/** com tons em degrad�.                    **/

/** Problema: https://neps.academy/br/exercise/49 **/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int tam,i,j, cont1, cont2;

	cin >> tam; //recebe o tamanho da vita

	int fita[tam];

	for (i = 0; i< tam;i++) //recebe a fita a ser colorida
		cin >> fita[i];

	for (i = 0; i< tam;i++){ //come�a a analisar a fita
		if (fita[i] == -1){ //se for 0 ja esta certo, mas -1 precisa ser colorida

			//inicia os contadores
			cont1 = 0;
			cont2 = 0;


            //primeiro l� a fita da esquerda pra at� encontrar um 0
            //salva o n�mero de casas que andou at� o 0 em cont1
            //se chegar ao fim do vetor entao n�o contabiliza e o contador recebe 50000 para diferenciar
			for (j = i; j< tam;j++){
				if (fita[j] == 0)
					break;
				cont1++;
				if (j == tam-1){
					cont1 = 50000;
				}
			}

            //agora l� a fita da direita pra esquerda at� encontrar um 0
            //salva o n�mero de casas que andou at� o 0 em cont1
            //se chegar ao come�o do vetor ent�o n�o contabiliza e o contador recebe 50000 para diferenciar
			for (j = i; j>=0 ;j--){
				if (fita[j] == 0)
					break;
				cont2++;
				if (j == 0)
					cont2 = 50000;
			}

            //se o contador n�o chegou ao fim do vetor mas � maior do que 9, ele fica como 9 na escala
			if (cont1!= 50000 && cont1 >= 9)
				cont1 = 9;

            //se o contador n�o chegou ao come�o do vetor mas � maior do que 9, ele fica como 9 na escala
			if (cont2!= 50000 && cont2 >= 9)
				cont2 = 9;

            //se for a primeira posi��o, so ha como ler para a direita
			if (i == 0)
				fita[i] = cont1;

            //se for a ultima posi��o, so ha como ler para a esquerda
			else if (i == tam-1)
				fita[i] = cont2;

            //se estiver no meio do vetor, prevalece o menor contador
			else
				fita [i] = (cont1 < cont2) ? cont1 : cont2;

		}
	}

    //devolve a fita colorida
	for (i = 0; i< tam-1;i++)
		cout << fita[i] << " ";

	cout << fita[tam-1];
}
