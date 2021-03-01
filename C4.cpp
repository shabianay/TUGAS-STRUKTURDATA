#include <iostream>
using namespace std;

int main(){
    string kata;
    int n, i;
    bool palindrome = true;
 
    cout << "Program Mengecek Kata Palindrom atau Bukan" << endl;
    cout << "Input Kata : ";
    getline(cin, kata);
    n = kata.length();

    for(i = 0; i < n; i++){
        if(kata[i] != kata[n-i-1])
        {
            palindrome = false;
            break;
        }
    }

    cout << "Result : ";
    if(palindrome == true)
        cout << "Palindrom";
    else
        cout << "Bukan Palindrom";

    cin.ignore();
    return 0;
}
