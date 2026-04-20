#include <iostream>
#include <fstream>
#include <string>

int main() {
  
    std::ifstream file("in.txt");

 
    if (!file.is_open()) {
        std::cout << "Ошибка: не удалось открыть файл 'in.txt'\n";
        return 1;
    }

    std::string word;

    
    while (file >> word) {
       
        std::cout << word << "\n";
    }


    file.close();

    return 0;