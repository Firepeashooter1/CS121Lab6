#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::ifstream file("data.csv");
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);

        int numOne, numTwo;
		char comma;

        std::string word;

        ss >> numOne >> comma >> numTwo >> comma >> word;

        int total = numOne + numTwo;

        for (int i = 0; i < total; ++i) {
            std::cout << word << " ";
        }//End for
	std::cout << "\n";
    }//End while

}//End main
