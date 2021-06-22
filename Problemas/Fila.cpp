/**           FILA - (OBI2014)           **/
/** Programa recebe uma lista de pessoas **/
/** que estão numa fila. Algumas dessas  **/
/** pessoas saem da fila, e o programa   **/
/** retorna a fila com as pessoas restan-**/
/** tes                                  **/

/** Problema: https://neps.academy/br/exercise/384 **/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int N;				//numero de pessoas na fila
	int i, aux, num, j; //variáveis auxiliares
	vector<int> fila;

	cin>> N; //recebe o numero de pessoas na fila

	//insere os elementos por ordem "de chegada" no vector
	for (i = 0; i<N;i++){
		cin >> aux;
		fila.push_back(aux);
	}

	cin >> aux; // recebe o numero de pessoas que saíram


	for (i=0; i<aux; i++){ //para cada pessoa que saiu
		cin >> num; // recebe o valor da pessoa que saiu
		j = 0;
		while (fila[j]!=num) //encontra essa pessoa na fila
			j++;

		//movo todas as pessoas da fila 1 casa para frente
		for(j; j<(int)fila.size()-1; j++){
			fila[j] = fila[j+1];
		}
		fila.pop_back(); //removo a ultima posição (já que todos andaram pra frente, ela não existe mais)
	}

	for(i=0;i<(int)fila.size();i++){ //para cada elemento do vector
		cout<<fila[i]<<" "; //Imprimir cada elemento do vector
	}

}