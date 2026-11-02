#include <iostream>
using namespace std;

int Add(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}

int main()
{
    cout << "Calculator Application\n";
    cout << "10 + 5 = " << Add(10, 5) << '\n';

    return 0;
}