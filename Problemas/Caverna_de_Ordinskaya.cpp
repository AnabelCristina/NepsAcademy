/**         Caverna de Ordinskaya (OBI2016)       **/
/** Houve uma expedição até essa caverna e a pro- **/
/** fundidade do mergulho era medida através de   **/
/** uma fita. Ao fim não sabiam se tinham marcado **/
/** do lado certo da fita. O programa descobre se **/
/** há algum padrão viável e retorna a soma das   **/
/** profundidades mergulhadas;                    **/

/** Problema: https://neps.academy/br/exercise/4  **/


#include <bits/stdc++.h>

using namespace std;

int main(){
	long long N, M; // N = quantidade de mergulhos e M = comprimendo da fita
	long long num, soma= 0, ant= 0;

	cin >> N >> M; // recebe os valores de N e M


	while (N != 0){ //enquanto não passar por todos os valores
		cin >> num; //recebe a profundidade do mergulho

		//a ideia é que precisamos garantir que o valor atual seja maior
		//do que o anterior ao mesmo tempo em que é o menor valor
		//seja lendo no sentido normal da fita ou inverso


		if (ant == 0){ //se o anterior for 0 então é o primeiro numero
			num = num < M-num ? num : M -num;//pegamos o menor numero possível
		}
		else //se não for o primeiro numero
			if (num < ant) // se o numero atual for menor que o anterior
				num = (M - num) >= ant ? M - num : num; //precisa ser o menor possivel, mas ser maior ou igual ao anterior, lendo nos dois sentidos da fita
			else //se o numero atual for maior
				num = (M - num) < num && (M - num) >= ant ? M - num : num; //lemos dos dois lados pra encontrar o menor possivel que ainda seja maior que o anterior

		//depois de todas as analises temos o menor numero possivel maior que o anterior
		//somamos ao resultado final
		if (num >= ant){
			soma += num;
			ant = num;
		}
		//se não foi possivel encontrar um numero maior que o anterior, então não há um padrão e devolvemos -1 como resultado
		else{
			soma = -1;
			break;
		}
		N--;
	}

	//devolve o resultado final
	cout << soma;

}