/**             Huaauhahhuahau               **/
/** Programa feito pra determinar se uma ri- **/
/** sada é engraçada. Uma risada é engraçada **/
/** quando a sequencia de vogais lidas da    **/
/** esquerda pra direita é igual a lida na   **/
/** ordem inversa                            **/

/** Problema: https://neps.academy/br/exercise/118 **/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int i;

	char risada[51];
	char letra;
	int contador=0;

	for (i = 0; letra != '\n'; i++){ //recebendo a entrada
		letra = getchar(); //leio caracter por caracter

		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
			risada[contador] = letra; //salvo na string apenas as vogais
			contador++; //contador para saber o tamanho da string
		}
	}

	for (i = 0; i < contador; i++){ //percorro o vetor da risada apenas com vogais
		if (risada[i] != risada[contador-1-i]){  //comparo a 1 posição com a ultima, a 2 com a penultima e assim por diante
			cout << "N"; //caso seja diferente então a ordem natural e inversa não sao iguais
			return 0; //termino o programa
		}
	}

	cout << "S"; //se percorrer todo o vetor então a risada é engraçada

}
