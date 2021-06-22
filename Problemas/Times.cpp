/**                TIMES                 **/
/** Times s�o formados de acordo com a   **/
/** habilidade dos jogadores pra n�o fi- **/
/** desbalanceado. Encontrar os times e  **/
/** devolver o resultado em ordem alfa-  **/
/** b�tica                               **/

/** Problema: https://neps.academy/br/exercise/253 **/

#include <bits/stdc++.h>

using namespace std;

int main (){

    int N, T; //respectivamente a quantidade de alunos e o n�mero de times

    pair <string, int> aux; //um pair aux para receber as informa��es na ordem
    vector <pair <int, string>> time; // vector auxiliar com as posi��es do pair invertidas (habilidade, nome)
    pair <int, string> aux2; //um pair aux invertido para acessar as posi��es do vector time

    cin >> N >> T; // recebe N e T


    for (int i = 0; i<N; i++){
        cin >> aux.first >> aux.second; //recebe o pair (nome, habilidade)
        aux2.first = aux.second;
        aux2.second = aux.first;
        time.push_back(aux2); //inverte o pair e adiciona em time
    }

    sort(time.begin(), time.end()); //ordena o vetor time para ficar com as habilidades em ordem crescente

    int x;
    int cont = T-1;

    for (int i = 0; i<T; i++){ //come�a a distribui��o dos times

        cout << "Time " << i+1 << endl;

        vector <pair<string, int >> resposta; //cria um vector para adicionar o time

        for (int j = N-1-i; j>=0; j--){

            // a ideia � que para o time ser equilibrado, em um vetor ordenado,
            // a primeira posi��o iria para o time 1, a segunda posi��o para o
            // time 2 e assim por diante. Ent�o eu percorro o vetor dessa forma,
            // "pulando" T-1 posi��es a cada vez para que distribua de forma
            // correta os times

            if(cont == T-1){//se o contador caminhou T-1 posi��es, ent�o � a posi��o que preciso

                cont = 0;//zero o contador;
                aux2 = time[j]; //adiciono a posi��o certa ao pair auxiliar

                // a cada vez que encontro o valor que eu quero
                // inverto o pair para ter o nome na primeira posi��o
                // e adiciono no vetor de resposta

                aux.first = aux2.second;
                aux.second = aux2.first;

                resposta.push_back(aux);
            }
            else //caso contrario incremento o contador
                cont++;
        }

        sort (resposta.begin(), resposta.end()); //ordeno o vector resposta para ficar em ordem alfab�tica

        for(int a = 0; a<(int)resposta.size(); a++){ //devolvo o time
            aux = resposta[a];
            cout << aux.first << endl;
        }

        resposta.clear(); //apago o vector resposta

        cout<< endl;
        cont = T-1;
    }
}
