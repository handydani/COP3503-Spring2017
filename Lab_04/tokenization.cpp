#include <iostream>
#include <fstream>

const std::string FILENAME_INPUT = "code.txt";

int main() {
	std::ifstream file(FILENAME_INPUT);

	int count = 0;
	while( file.good() )
	{

		std::string token;
		file >> token;
		std::cout << "Token " << count++ << ": " << token << std::endl;
	}

//    Token 0: FOR
//    Token 1: (i,
//    Token 2: 10,
//    Token 3: ++)
//    Token 4: BEGIN
//    Token 5: FOR
//    Token 6: (j,
//    Token 7: 10,
//    Token 8: ++)
//    Token 9: BEGIN
//    Token 10: sum=sum
//    Token 11: +
//    Token 12: i
//    Token 13: +
//    Token 14: j;
//    Token 15: END
//    Token 16: END
//    Token 17:

	file.close();
	return 0;
}
