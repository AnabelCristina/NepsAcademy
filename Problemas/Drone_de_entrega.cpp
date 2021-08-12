/**          DRONE DE ENTREGA            **/
/** Programa recebe as dimensões de uma  **/
/** encomenda e de uma janela. O programa**/
/** deve dizer se é possivel que a enco- **/
/** menda passe pela janela.             **/

/** Problema: https://neps.academy/br/exercise/14 **/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, h, l; // declara as variaveis
	
	//a, b, c = dimensoes da encomenda
	//dimensoes da janela
	
	cin >> a >> b >> c >> h >> l; // recebe os valores
	
	//se A for o maior de todos
	if (a >= b && a >= c){ 
		a = c;
	}
	//se B for o maior de todos
	else if (b >= a && b >= c){
		b = c;
	}
	//caso contrario, C é o maior portanto os dois menores ja
	//estão em A e B
	
	//testo se os menores valores da encomenda passam pela janela
	if (a <= h && b <= l || a<=l && b<=h){ //
		cout << "S" << endl;// se passar, escrevo "S" 
	}
	else
		cout << "N" << endl;// se não passar, escrevo "N"
}	
