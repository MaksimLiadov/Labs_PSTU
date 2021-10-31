#include <iostream>
using namespace std;
int x, a, b, c, first, second, third;
bool F = false;

int main()
{
    setlocale(LC_ALL,"RU");
    cout << "введите трехзначное число" << endl;
    cin >> x;
    if (x < 100 || x > 999)
    {
        while (x < 100) ;
        {   
            cout << "введите трехзначное число" << endl;
            cin >> x;
        }
    } 
    else
    {
        a = x % 10;
        x = x / 10;
        b = x % 10;
        c = x / 10;    
    }
    while (F = false)
    {
        if (a == b || b == c || c == a)
        {
            cin >> x;
            a = x % 10;
            x = x / 10;
            b = x % 10;
            c = x / 10; 
        }
        else
        {
            F = true;
        }
    }
    cout << a << ' '<< b << ' '<< c << endl;
    cout << a << ' '<< c << ' '<< b << endl; 
    cout << b << ' '<< c << ' '<< a << endl; 
    cout << b << ' '<< a << ' '<< c << endl; 
    cout << c << ' '<< b << ' '<< a << endl; 
    cout << c << ' '<< a << ' '<< b << endl;

    if (a > b && a > c)
    {
        first = a;
        if (b > c)
        {
            second = b;
            third = c;
        } 
        else
        {
            second = c;
            third = b;
        }
    }
    else if (b > a && b > c)
    {
        first = b;
        if (a > c)
        {
            second = a;
            third = c;
        } 
        else
        {
            second = c;
            third = a;
        }
    }
    else if (c > a && c > b)
    {
        first = c;
        if (a > b)
        {
            second = a;
            third = b;
        } 
        else
        {
            second = b;
            third = a;
        }
    }
    cout <<"Наибольшее число из всех комбинаций - " << first << second << third << endl;
        return 0;
}