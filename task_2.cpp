#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int x;
    int count = 1;
    srand(time(NULL));
    bool flag = true;
    int random = rand() % 100 + 1;
    cout << "Игра 'угадай число'" << endl 
         << "Компьютер задумал число от 1 до 100" << endl
         << "У вас есть 7 попыток" << endl;
    cout << "Введите число" << endl;
        while (count < 8)
        {
        cin >> x;
        if (x == random) cout << "Ура!!! Вы выйграли";
        count++;
        if (x < random) cout <<"Загаданное число больше" << endl;
        if (x > random) cout <<"Загаданное число меньше" << endl;
        }
        if (count = 8)
        {
            cout <<"Вы не смогли угадать число"<< endl;
            cout <<"Компьютер загадал число " << random << endl;
        } 
    return 0;
}