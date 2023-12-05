#include <iostream>
using namespace std;

int main()
{
    int number = 0, counter = 1;
    char selection = 'e';
    while (selection == 'e') {
        cout << "Enter the prime number you want to check: " << endl;
        cin >> number;
        if (number > 2) {
            while (counter < number - 1) {
                counter++;
                if (number % counter == 0) {
                    cout << "This number is not prime! " << endl;
                    break;
                }
                else if (counter + 1 == number) {
                    cout << "This number is prime!" << endl;
                }
            }
        }
        else if (number == 2) {
            cout << "The entered number is the smallest prime number!" << endl;
        }
        else {
            cout << "There is no primality in negative numbers!" << endl;
        }
        cout << "h-exit" << endl;
        cin >> selection;
        counter = 1;

        return 0;
    }
}



