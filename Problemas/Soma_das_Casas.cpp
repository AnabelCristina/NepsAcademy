/**                 SOMA DAS CASAS                **/
/** Há um brinquedo escondido em duas casas da    **/
/** rua. O programa encontra quais casas são      **/
/** essas, baseado na soma do número das casas.   **/

/** Problema: https://neps.academy/br/exercise/524 **/

#include <bits/stdc++.h>

using namespace std;

int main (){

    int N, K; //numero de casas e soma das casas onde está o brinquedo
    int i, j;

    cin >> N; //quantas casas tem na rua

    int casas[N];

    for (i = 0; i <N; i++) //todos os números das casas
        cin >> casas[i];

    cin >> K; //soma das casas onde estão os brinquedos

    int contador = 0;

    //two pointers com for
    for (i = 0; i < N; i++){
        for (j = N-1; j>i; j--){
            //pega o primeiro e o ultimo número, se for menor do que a soma, por ser um vetor ordenado, não é mais possivel encontrar com o numero "casas[i]"
            if (casas[j] + casas[i] < K)
                break;
            //se a posição for menor do que a soma, ele testa com "casas[i]"
            if (j<=K){
                if (casas[j] + casas[i] == K){ //se a soma é igual
                    cout << casas[i] << " " << casas[j]; //printa as casas
                    return 0; //termina o programa
                }
            }
        }
    }

}
