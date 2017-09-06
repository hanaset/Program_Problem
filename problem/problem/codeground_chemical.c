#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	FILE *fp = fopen("sample_input.txt", "r");

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

	char ch[10000] = { 0, };

	int i, j;

	for (i = 0; i<sizeof(syx) / 3; i++) {
		if (syx[i][1] == NULL) {
			arr[syx[i][0] - 'A'][0] = 1;
		}
		else {
			arr[syx[i][0] - 'A'][syx[i][1] - 'a' + 1] = 1;
		}
	}

	fscanf(fp,"%d", &count);

	for (i = 0; i < count; i++) {
		fscanf(fp, "%s\n", ch);

		num = 0;
		check = 0;
		printf("%s\n", ch);

		while (1) {

			printf("%d ", check);

			if (arr[ch[check] - 'a'][0] == 0) {
				if (arr[ch[check] - 'a'][ch[check + 1] - 'a' + 1] == 0) {
					num++;
					printf("NO\n");
					break;
				}
				else {
					check += 2;
				}
			}
			else {
				check++;
			}

			if (ch[check] == NULL)
				break;
		}

		if (num == 0)
			printf("YES\n");









		/*
		while (1) {
			printf("%d ", check);
			if (arr[ch[check] - 'a'][ch[check+1] - 'a'+1] == 0) {
				if (arr[ch[check] - 'a'][0] == 0) {
					check -= 2;
					if (arr[ch[check] - 'a'][0] != 0) {
						check++;
						getch();
						continue;
					}
					printf("NO\n");
					num++;
					break;
				}
				else {
					check++;
				}
			}
			else {
				check += 2;
			}

			if (ch[check] == NULL) {
				break;
			}
			
		}

		if (num == 0) {
			printf("Yes\n");
			num = 0;
		}

		*/
	}

	
}
