/**          Manolo, o fazendeiro            **/
/** Função de determinar a quantidade de ce- **/
/** nouras que o Manolo colheu, de acordo    **/
/** com especificações do problema           **/

/** Problema: https://neps.academy/br/exercise/191 **/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int N; // tamanho da plantação NxN
	cin >> N;

	int plantacao[N][N]; //inicia a plantação NxN

	int i, j, m;


	for (i = 0; i<N; i++) //recebe os valores de cenoura por campo
		for (j = 0; j< N; j++)
			cin >> plantacao[i][j];


	cin >> m; //quantidade de colheitas que serao feitas

	int x1, y1, x2, y2, soma = 0;

	while (m > 0){ //para cada colheita

		cin >> x1 >> y1 >> x2 >> y2; //"coordenadas" de inicio e fim da olheita

		//percorre do inicio ao fim seguindo as coordenadas
		for (i = x1; i<=x2; i++)
			for (j = y1; j<=y2; j++){
				soma += plantacao[i-1][j-1]; //adiciona as cenouras colhidas na variavel soma
				plantacao [i-1][j-1] = 0; //restam 0 cenouras para cada campo colhido
			}

		m--; //decrementa o numero de colheitas
	}

	cout << soma;//devolve a colheita final
}
