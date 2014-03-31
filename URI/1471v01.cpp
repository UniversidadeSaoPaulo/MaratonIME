#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int	foram,
		voltaram,
		merg[1000],
		i,
		voltou;

	while(cin >> foram >> voltaram) {
		if (foram == voltaram) {

			cout << "*";
			for (i=1; i<=voltaram; i++) {
				cin >> voltou;
			}
		} else {
			for (i=1; i<=foram; i++) {
				merg[i] = 0;
			}
			for (i=1; i<=voltaram; i++) {
				cin >> voltou;
				merg[voltou] = 1;
			}
			for (i=1; i<=foram; i++) {
				if(merg[i] == 0) cout << i << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}
