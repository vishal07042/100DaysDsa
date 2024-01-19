#include <iostream>
using namespace std;

void sayDigits(int n)
{

    string arr[10] = {"zero",
                      "one",
                      "four",
                      "five",
                      "seven",
                      "eight", "nine"};



        int ans = 0;
    if (n < 1)
        return;

    sayDigits(n / 10);

    cout << arr[n % 10];
}

int main()
{
    int digit = 243;
    sayDigits(digit);
    return 0;
}