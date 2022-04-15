
#include <string>
#include <iostream>
#include <fstream>

#include "../lib/MacRomanCon.h"

int main() {

    std::ifstream inputFile("../test/testfile.txt");
    std::ofstream outputFile("../test/outfile.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Cannot open requested file!\n";
        return EXIT_FAILURE;
    }
    std::string data;
    char ch;
    while (inputFile.get(ch))
        data += ch;

    outputFile << "UTF-8 out: \n";
    char str[data.size()*2];
    auto size = macRomanToUTF8((uint8_t *)data.c_str(), data.size(), (uint8_t *)str);
    for (size_t i {0}; i < size; ++i)
        outputFile.put(str[i]);
    return 0;
}