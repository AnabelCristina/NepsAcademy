/**                  LÂMPADAS                     **/
/** Dados dois interruptores e duas lâmpadas, de- **/
/** terminar se elas estão acesas ou apagadas     **/
/** após uma sequência de acionamento dos inter-  **/
/** ruptores                                      **/

/** Problema: https://neps.academy/br/exercise/52 **/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
    cin >> N;
    int A=0, B=0, i, clic;

    for (i = 0; i<N; i++){
        cin >> clic;
        A = (A==1) ? 0 : 1;
        if (clic == 2)
            B = (B==1) ? 0 : 1;
    }

    cout<< A << "\n" << B;

}
