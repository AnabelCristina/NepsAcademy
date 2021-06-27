/**          FUGA COM HELICOPTERO           **/
/** O programa decide se um fugitivo conse- **/
/** gue ou n�o fugir. **/

/** Problema: https://neps.academy/br/exercise/5 **/

#include <bits/stdc++.h>

using namespace std;

int main (void){
	int P, H, F, D, i;

	cin >> H >> P >> F >> D;

    //se esta indo pro sentido hor�rio
	if (D == -1){
		for (i = 0; i <= 15; i++){
            if (F == H){
                cout << "S" << endl;
                break;
            }
            if (F == P){
                cout << "N" << endl;
                break;
            }
            F--;

            if (F == -1)
            F = 15;
        }
    }
    //se esta indo pro sentido anti-hor�rio
	else{
		for (i = 15; i >=0; i--){
            if (F == H){
                cout << "S" << endl;
                break;
            }
            if (F == P){
                cout << "N" << endl;
                break;
            }

            F++;
            if (F == 16)
                F = 0;
        }
    }

    return 0;
}
