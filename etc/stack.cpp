#include <iostream>
#include <math.h>
#include <bitset>
#include <list>

int main() {
	
	int T;
	int arr[16] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int top = -1;
	std::list<int> temp;
	while (1) {
		
		std::cin >> T;

		if (T == 0)
			break;
		else if (T < 0 || T > 16) {
			std::cout << "0~16ÀÌ ¾Æ´Õ´Ï´Ù." << std::endl;
			continue;
		}

		int num = (T) * 2;
		for (int i = pow(2, num - 1); i < pow(2, num); i+=2) {
			std::cout << std::bitset<8>(i) << std::endl;

			top = -1;

			for (int j = num-1; j >= 0; j--) {
				if (std::bitset<32>(i).test(j) == true) {
					++top;
				}
				else {
					temp.push_back(arr[top]);
				}

				if (top < -1) {
					temp.clear();
					break;
				}
			}

			if (top == -1) {
				for (int j = 0; j < temp.size(); j++) {
					printf("%d ", temp.front());
					temp.pop_front();
				}
				printf("\n");
			}
		}
	}
}