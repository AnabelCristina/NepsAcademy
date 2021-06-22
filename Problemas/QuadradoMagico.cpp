/**            Quadrado Mágico               **/
/** Verificar se a entrada do programa é um  **/
/** quadrado mágico. Um quadrado magico tem  **/
/** a soma de linhas = soma de colunas = so- **/
/** ma das diagonais                         **/

/** Problema: https://neps.academy/br/exercise/191 **/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int N, i, j, soma = 0, linha = 0;
	cin >> N;

	int square[N][N];

	for (i = 0; i< N; i++){
		for (j = 0; j < N; j++){
			cin >> square[i][j];
		}
	}

	//calcula a soma da 1ª linha
	for (i = 0; i< N; i++)
		soma += square[0][i];

	//compara a soma da primeira linha com as linhas seguintes
	for (i = 0; i< N; i++){
		for (j = 0; j < N; j++){
			linha += square[i][j];
		}

		if (linha != soma){ //se uma delas for diferente, então não precisa comparar o resto e o programa acaba
			cout << "-1";
			return 0;
		}
		linha = 0;
	}

	//se todas as linhas tem a mesma soma, testamos agora as colunas
    for (j = 0; j < N; j++){
        for (i = 0; i< N; i++){
            linha += square[i][j];
        }

        if (linha != soma){ //se uma delas for diferente, então não precisa comparar o resto e o programa acaba
            cout << "-1";
			return 0;
        }

        linha = 0;
    }


	//se todas as linhas e colunas tem a mesma soma, testamos as diagonais
    for (j = 0; j < N; j++)
        linha += square [j][j];

    if (linha != soma){
        cout << "-1";
        return 0;
    }

    linha = 0;

    for (j = 0; j < N; j++)
        linha += square [j][N-j-1];

    if (linha != soma){
        cout << "-1";
        return 0;
    }

    cout << soma;

}





