/**                 SOMA DAS CASAS                **/
/** H� um brinquedo escondido em duas casas da    **/
/** rua. O programa encontra quais casas s�o      **/
/** essas, baseado na soma do n�mero das casas.   **/

/** Problema: https://neps.academy/br/exercise/524 **/

#include <bits/stdc++.h>

using namespace std;

int main (){

    int N, K; //numero de casas e soma das casas onde est� o brinquedo
    int i, j;

    cin >> N; //quantas casas tem na rua

    int casas[N];

    for (i = 0; i <N; i++) //todos os n�meros das casas
        cin >> casas[i];

    cin >> K; //soma das casas onde est�o os brinquedos

    int contador = 0;

    //two pointers com for
    for (i = 0; i < N; i++){
        for (j = N-1; j>i; j--){
            //pega o primeiro e o ultimo n�mero, se for menor do que a soma, por ser um vetor ordenado, n�o � mais possivel encontrar com o numero "casas[i]"
            if (casas[j] + casas[i] < K)
                break;
            //se a posi��o for menor do que a soma, ele testa com "casas[i]"
            if (j<=K){
                if (casas[j] + casas[i] == K){ //se a soma � igual
                    cout << casas[i] << " " << casas[j]; //printa as casas
                    return 0; //termina o programa
                }
            }
        }
    }

}
