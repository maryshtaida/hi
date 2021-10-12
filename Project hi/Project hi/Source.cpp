#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
int main()
{
    int guess, a, b, attempt = 0;
    srand(time(NULL));
    cout << "enter a,b" << endl;
    cin >> a >> b;
    int secret_number = rand() % (b - a + 1) + a;
    cout << "enter number from " << a << " to" << " " << b << endl;

    do {
        attempt++;
        cin >> guess;
        if (secret_number > guess)
        {
            cout << "secret number is bigger, ";
        }
        if (secret_number < guess)
        {
            cout << "secret number is smaller, ";

        }
        cout << "attempt " << attempt << endl;

    } while (secret_number != guess);
    cout << "you are winner" << endl;

    int sec = secret_number;
    int sum = 0;
    while (secret_number != 0)
    {
        sum += secret_number % 10;
        secret_number /= 10;
    }
    cout << "summa=" << sum << endl;


    double factorial = 1;
    for (int i = 2; i <= sec; i++)
    {
        factorial *= i;
    }
    cout << "factorial =" << factorial << endl;

    bool flag = true;
    int f = 2;
    while (f <= sqrt(sec) && flag)
    {
        if (sec % f == 0)
        {
            flag = false;
        }
        f++;
    }
    if (sec == 1) {
        cout << "not prime and not composite" << endl;
    }
    if (flag) {
        cout << "prime" << endl;
    }
    else {
        cout << "composite" << endl;
    }

    for (int t = 2; t <= sec / 2; t++)
    {
        if (sec % t == 0)
            cout << "del=" << t << endl;
    }
   
    return 0;

}
