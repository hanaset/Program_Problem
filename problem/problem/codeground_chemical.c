#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	FILE *fp = fopen("test.txt", "w");

	char syx[][3] = { "H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg", "Al",
		"Si", "P", "S", "Cl", "Ar", "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe",
		"Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb", "Sr",
		"Y","Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb",
		"Te", "I", "Xe", "Cs", "Ba", "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au",
		"Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Rf", "Db", "Sg",
		"Bh", "Hs", "Mt", "Ds", "Rg", "Cn", "Fl", "Lv", "La", "Ce", "Pr", "Nd",
		"Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu", "Ac",
		"Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md",
		"No", "Lr" };
	int arr[26][27] = { 0, };
	int count;
	int check;
	int num;

	char ch[50001] = { 0, };

	int i;
	setbuf(stdout, NULL);

	for (i = 0; i<sizeof(syx) / 3; i++) {
		if (syx[i][1] == NULL) {
			arr[syx[i][0] - 'A'][0] = 1;
		}
		else {
			arr[syx[i][0] - 'A'][syx[i][1] - 'a' + 1] = 1;
		}
	}

	scanf("%d", &T);
	for (test_case = 0; test_case < T; test_case++)
	{

		printf("Case #%d\n", test_case + 1);

		for (i = 0; i<ch[i]; i++) {

			check = 0;
			if (arr[ch[i] - 'a'][0]) {
				check = 1;
			}

			if (ch[i + 1] != NULL && arr[ch[i] - 'a'][ch[i + 1] - 'a' + 1]) {
				check = 2;
			}

			if (check == 0) {
				break;
			}
			else if (check == 2) {
				i++;
			}
		}

		printf("%s\n", check == 0 ? "NO" : "YES");
	}

	return 0;//Your program should return 0 on normal termination.
}