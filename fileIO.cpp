#include <fstream>
#include <iostream>
#include <string>

int main() {
	std::ofstream outFile;
	outFile.open("data.csv");
	
	if (outFile.is_open()){
		outFile << "1, 2, " << std::endl;
		outFile.close();
	}

}//End main
