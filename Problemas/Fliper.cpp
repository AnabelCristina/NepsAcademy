/**                  FLIPER                 **/
/** Dada as posições de P e R, segundo a    **/
/** figura do problema, determinar por onde **/
/** a bolinha sai                           **/

/** Problema: https://neps.academy/br/exercise/87 **/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int P, R;

	cin >> P >> R;

	if (P == 0 )
		cout << "C";
	else
		if (R == 0)
			cout << "B";
		else
			cout << "A";
}
