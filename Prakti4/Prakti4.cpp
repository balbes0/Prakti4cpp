#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    int choice;
    string word;
    while (true) {
        setlocale(LC_ALL, "Rus");
        cout << "\nВыберите действие:\n1.Вывести введенное слово задом наперед.\n2.Вывести введенное слово без гласных.\n3.Вывести введенное слово без согласных.\n4.Перемешать буквы введенного слова.\n0. Выход.\nВаш выбор: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Введите слово: ";
            cin >> word;
            reverse(word.begin(), word.end());
            cout << "Слово задом наперед: " << word << endl;
        }
        else if (choice == 2) {
            cout << "Введите слово: ";
            cin >> word;
            string new_word;
            for (char c : word) {
                if (!strchr("AEIOUaeiouАЕЁИОУЫЭЮЯаеёиоуыэюя", c))
                    new_word += c;
            }
            cout << "Новое слово: " << new_word;
        }
        else if (choice == 3) {
            cout << "Введите слово: ";
            cin >> word;
            string new_word;
            for (char c : word) {
                if (!strchr("БВГДЖЗКЛМНПРСТФХЦЧШЩбвгджзклмнпрстфхцчшщbcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ", c))
                    new_word += c;
            }
            cout << "Новое слово: " << new_word;
        }
        else if (choice == 4) {
            cout << "Введите слово: ";
            cin >> word;
            random_shuffle(word.begin(), word.end());
            cout << "Перемешанное слово: " << word << endl;
        }
        else if (choice == 0) {
            break;
        }
        else
        {
            cout << "Неправильный выбор!";
        }
    }
}