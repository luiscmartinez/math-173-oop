// Luis Martinez
// SID: 888218645
// This program is my own work.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double monthly_payment(double amount, int length, double rate)
{
    double formated_rate = rate / 100;
    int exp = 12 * length;
    double base = (1 + formated_rate / 12);
    double calc = pow(base, exp);
    double p = (amount * (formated_rate / 12) * calc) / (calc - 1);
    return p;
}

int main()
{
    double amount;
    int length;
    double rate;
    cout << "What is the amount of the loan? ";
    cin >> amount;
    cout << "What is the length of the loan, in years? ";
    cin >> length;
    cout << "What is the annual interest rate? ";
    cin >> rate;
    cout << "********************************************\n";
    cout << "Your monthly payment is $" << fixed << setprecision(2)
         << monthly_payment(amount, length, rate) << ".";
}