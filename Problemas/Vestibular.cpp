/**              Vestibular               **/
/** Determinar quantos exercicios um es-  **/
/** tudante acertou no vestibular         **/

/** Problema: https://neps.academy/br/exercise/160 **/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int N, i, cont = 0;

	cin >> N;

	char prova[N];

	cin >> prova; //recebe as questoes assinaladas na prova

	getchar();

	for(i = 0; i < N; i++){ //percorre as questoes da prova
		if (prova[i] == getchar()) //se for igual a do gabarito
			cont++; //soma 1
	}

	cout << cont;
}
