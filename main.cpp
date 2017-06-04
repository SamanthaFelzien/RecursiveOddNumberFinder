#include <iostream>

using namespace std;
void odd(int);
void oddN(int, int);
int main()
{
    int n;
    int curVal = 1;
    string doAgain;
    do {
    cout << "Enter a value for n" << endl;
    cin >> n;
    cout << "The odd values between 1 and n are: " << endl;
    oddN(n, curVal);
    cout << "The odd values between n and 1 are: " << endl;
     odd(n);
    cout << "Enter 'y' to try another value or any other key to quit" << endl;
    cin >> doAgain;
    } while (doAgain == "y");

    return 0;
}
//Lists odd values between 1 and n, including 1 and n if n is odd
    void oddN(int n, int curVal){

        if (curVal <= n){
            if (curVal%2 !=0){
                cout << curVal << endl;
            }
            oddN(n, curVal+1);
        }
    }
//Lists odd values between n and 1, including 1 and n if n is odd
   void odd(int n){
        if (n > 0){
            if (n%2 != 0){
                cout << n << endl;
            }
            odd(n-1);
        }

    }


