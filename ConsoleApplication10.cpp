#include <iostream>
#include <string>

std::string removeCharacterAt(std::string str, int index) {
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
    }
    return str;
}

int main() {
    std::string input;
    int index;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, input);
    std::cout << "Введіть індекс символу для видалення: ";
    std::cin >> index;
    std::string result = removeCharacterAt(input, index);
    std::cout << "Результат: " << result << std::endl;
    return 0;
}

#include <iostream>
#include <string>

std::string removeAllOccurrences(std::string str, char ch) {
    str.erase(std::remove(str.begin(), str.end(), ch), str.end());
    return str;
}

int main() {
    std::string input;
    char ch;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, input);
    std::cout << "Введіть символ для видалення: ";
    std::cin >> ch;
    std::string result = removeAllOccurrences(input, ch);
    std::cout << "Результат: " << result << std::endl;
    return 0;
}



#include <iostream>
#include <string>

std::string insertCharacterAt(std::string str, int index, char ch) {
    if (index >= 0 && index <= str.length()) {
        str.insert(index, 1, ch);
    }
    return str;
}

int main() {
    std::string input;
    char ch;
    int index;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, input);
    std::cout << "Введіть символ для вставки: ";
    std::cin >> ch;
    std::cout << "Введіть позицію для вставки: ";
    std::cin >> index;
    std::string result = insertCharacterAt(input, index, ch);
    std::cout << "Результат: " << result << std::endl;
    return 0;
}






#include <iostream>
#include <string>

std::string replaceDots(std::string str) {
    std::replace(str.begin(), str.end(), '.', '!');
    return str;
}

int main() {
    std::string input;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, input);
    std::string result = replaceDots(input);
    std::cout << "Результат: " << result << std::endl;
    return 0;
}


#include <iostream>
#include <string>

int countOccurrences(std::string str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    char ch;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, input);
    std::cout << "Введіть символ для підрахунку: ";
    std::cin >> ch;
    int count = countOccurrences(input, ch);
    std::cout << "Символ '" << ch << "' зустрічається " << count << " раз(и)." << std::endl;
    return 0;
}



#include <iostream>
#include <string>

void countCharacters(const std::string& str, int& letters, int& digits, int& others) {
    letters = digits = others = 0;
    for (char c : str) {
        if (isalpha(c)) {
            letters++;
        }
        else if (isdigit(c)) {
            digits++;
        }
        else {
            others++;
        }
    }
}

int main() {
    std::string input;
    int letters, digits, others;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, input);
    countCharacters(input, letters, digits, others);
    std::cout << "Кількість літер: " << letters << std::endl;
    std::cout << "Кількість цифр: " << digits << std::endl;
    std::cout << "Кількість інших символів: " << others << std::endl;
    return 0;
}




