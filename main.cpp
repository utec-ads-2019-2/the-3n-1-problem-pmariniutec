#include <iostream>

int main() {
  unsigned int i, j, length, maxLength;
  while(std::cin >> i >> j){

	unsigned int i2, j2;

	j2 = i <= j ? j : i;
	i2 = i <= j ? i : j;

	length = 0;
	maxLength = 0;

	for(int k = i2; k <= j2; ++k) {
	  length = 0;
	  int k2 = k;
	  while(k2 != 1) {
		if(k2 % 2 == 1) {
		  k2 = k2 * 3 + 1;
		  length++;
		} else {
		  k2 /= 2;
		  length++;
		}
	  }
	  length++;
	  if(length > maxLength) maxLength = length;
	}
	std::cout << i << " " << j << " " << maxLength << "\n";
  }

  return 0;	
}
