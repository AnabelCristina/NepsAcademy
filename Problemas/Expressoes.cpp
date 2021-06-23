/**                 Expressões                    **/
/** Avaliação se uma expressão é bem definida ou  **/
/** não. Uma expressão é bem definida se todos os **/
/** parênteses, chaves e colchetes abertos são fe-**/
/** chados e se são fechados corretamente         **/

/** Problema: https://neps.academy/br/exercise/271 **/

#include <bits/stdc++.h>


using namespace std;

int main () {

    int N;
    char aux = 1, res;
    int ok = 0;

    string expressao;

    cin >> N;

    stack <char> pilha;

    for (int i = 0; i < N; i++){
        cin >> expressao; //recebe a expressao
        for (int j = 0; j<expressao.size();j++){
            if (expressao[j] == '[' || expressao[j] == '{' || expressao[j] == '(' ){ //se esta abrindo um parenteses/chave/colchete
                pilha.push(expressao[j]); // coloca na pilha
            }

            else { //se esta fechando

                if (pilha.empty()){ // e a pilha esta vazia
                    ok = -1; // entao esta fechando sem ter aberto, retorna -1
                }

                else{//se há algo na pilha

                    //verifico se o que esta fechando e confiro no topo da pilha, deve haver
                    //um mesmo parenteses/colchete/chave abrindo
                    //se tiver eu apenas retiro o elemento e se não tiver eu devolvo -1
                    switch (expressao[j]){
                    case ']':
                        //res = '[';
                        if (pilha.top() == '['){
                            pilha.pop();
                        }
                        else
                            ok = -1;
                    break;

                    case '}':
                        //res = '{';
                        if (pilha.top() == '{')
                            pilha.pop();

                        else
                            ok = -1;
                    break;
                    case ')':
                        //res = '(';
                        if (pilha.top() == '('){
                            pilha.pop();

                        }else
                            ok = -1;
                    break;
                    }
                }
            }
            //se a variavel de validação for -1 entao a sequencia esta errada
            if (ok == -1)
                break;
        }

        //se o programa leu toda a expressao e sobrou elementos na pilha, ha colchetes/parenteses/chaves sem fechar
        if (!pilha.empty())
            ok = -1;

        if (ok == -1){//se em algum momento a variavel de validação for -1 então a expressão não é bem definida
            cout << 'N' << endl;
            ok = 0;
        }
        else //caso contrario é bem definida.
            cout << 'S' << endl;

        while (!pilha.empty()){ //esvazio a pilha inteira
            pilha.pop();
        }

    }
}
