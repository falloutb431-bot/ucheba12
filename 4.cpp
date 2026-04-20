#include <iostream>
#include <fstream>
#include <vector>

int main() {
   
    std::ifstream file("in.txt");

    
    if (!file.is_open()) {
        std::cout << "Ошибка: не удалось открыть файл 'in.txt'\n";
        return 1;
    }

    int rows, cols;
   
    file >> rows >> cols;

    
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

  
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            file >> matrix[i][j];
        }
    }

    
    file.close();

    
    for (int i = 0; i < rows; ++i) {
       
        for (int j = cols - 1; j >= 0; --j) {
            std::cout << matrix[i][j];
          
            if (j > 0) {
                std::cout << " ";
            }
        }
        std::cout << "\n"; 
    }

    return 0;
}