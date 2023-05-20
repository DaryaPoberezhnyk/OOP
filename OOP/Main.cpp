#include "Library.h"

#include"menu.h"

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // Відкриваємо файл для читання
    string path1 = "File.txt";
    ifstream file(path1);
    if (!file.is_open()) {
        cout << "Помилка відкриття файлу!" << endl;
        return 0;
    }

    // Читаємо вхідний текст з файлу та формуємо частотний словник
    map<string, int> wordFreq;
    string word;
    while (file >> word) {
        wordFreq[word]++;
    }

    // Виводимо всі слова та їх частоту
    cout << "Словник:" << endl;
    for (auto it = wordFreq.begin(); it != wordFreq.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    // Знаходимо найбільш часто вживане слово
    string mostFreqWord;
    int maxFreq = 4;
    for (auto it = wordFreq.begin(); it != wordFreq.end(); ++it) {
        if (it->second > maxFreq) {
            maxFreq = it->second;
            mostFreqWord = it->first;
        }
    }

    // Виводимо найбільш часто вживане слово
    cout << "Найбільш часто вживане слово: " << mostFreqWord << " (" << maxFreq << " разів)" << endl;

    // Записуємо результат у файл
    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cout << "Помилка відкриття файлу!!" << endl;
        return 0;
    }
    for (auto it = wordFreq.begin(); it != wordFreq.end(); ++it) {
        outputFile << it->first << ": " << it->second << endl;
    }

    // Закриваємо файли та завершуємо програму
    file.close();
    outputFile.close();
    return 0;
}