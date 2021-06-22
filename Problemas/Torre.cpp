/**               Torre                   **/
/** Encontrar a posição de maior peso no  **/
/** tabuleiro, definida pela soma dos nu- **/
/** meros de todas as posições na linha i **/
/** e coluna j para definir o peso da po- **/
/** sição (i,j)                           **/

/** Problema: https://neps.academy/br/exercise/45  **/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int N;

	cin >> N;

	int i, j, a, b;

	int tabuleiro[N][N];
	int soma_linha[N], soma_coluna[N];

	//inicia a soma das linhas e colunas zerado
	for (i = 0; i < N; i++){
		soma_coluna[i] = 0;
		soma_linha[i] = 0;
	}

	//percorre todo o tabuleiro para saber o peso de todas as linhas e colunas
	for (i = 0; i < N; i++){
		for (j = 0; j <N; j++){
			cin >> tabuleiro[i][j];
			soma_linha[i] += tabuleiro[i][j];
			soma_coluna[j] += tabuleiro[i][j];
		}
	}

	int maior = 0;

    //percorre novamente o tabuleiro, o peso da posição (i,j) é
    //a soma da linha i + coluna j - sua propria posição 2x
    //por ter sido somada antes na soma das linhas e colunas
	for (i = 0; i < N; i++)
		for (j = 0; j <N; j++)
			maior = max(maior,soma_linha[i] + soma_coluna[j] - 2*tabuleiro[i][j]); //maior valor entre maior e o peso da posição (i,j)

	cout << maior;

}
