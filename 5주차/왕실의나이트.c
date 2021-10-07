#include<iostream>
#include<string>

int main() {
	int result = 0;
	int px[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
	int py[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
	std::string input;
	std::cin >> input;
	
	int row = input[1] - '0';
	int column = input[0] - 'a' + 1;

	for (int i = 0; i < 8; i++) {
		int nextRow = row + px[i];
		int nextColumn = column + py[i];
		if (nextRow >= 1 && nextRow <= 8 && nextColumn >= 1 && nextColumn <= 8)
			result += 1;
	}
	std::cout <<result;
	return 0;
}