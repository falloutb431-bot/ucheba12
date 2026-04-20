#include <iostream>
#include <fstream>
#include <vector>

int main() {
    int n;

  
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    
    std::vector<int> numbers(n);

    
    for (int i = 0; i < n; ++i) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> numbers[i];
    }

 
    std::ofstream file("out.txt");

    
    if (!file.is_open()) {
        std::cout << "Ошибка: не удалось открыть файл 'out.txt' для записи\n";
        return 1;
    }

 
    file << n << "\n";

    
    for (int i = n - 1; i >= 0; --i) {
        file << numbers[i];
       
        if (i > 0) {
            file << " ";
        }
    }
    file << "\n"; 

  
    file.close();

    std::cout << "Массив успешно записан в файл 'out.txt'\n";

    return 0;
}