#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream file("in.txt");

  
    if (!file.is_open()) {
        std::cout << "Ошибка: не удалось открыть файл 'in.txt'\n";
        return 1;
    }

    int n; 
    file >> n; 

    
    std::vector<int> numbers(n);

 
    for (int i = 0; i < n; ++i) {
        file >> numbers[i];
    }

    
    file.close();

   
    for (int i = n - 1; i >= 0; --i) {
        std::cout << numbers[i];
        
        if (i > 0) {
            std::cout << " ";
        }
    }
    std::cout << "\n"; 
    return 0;
}