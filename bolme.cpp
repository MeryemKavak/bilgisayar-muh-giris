#include <iostream>
using namespace std;

int main() {
    int sayi1, sayi2;

    cout << "Birinci sayiyi gir: ";
    cin >> sayi1;

    cout << "Ikinci sayiyi gir: ";
    cin >> sayi2;

    if (sayi2 != 0) {
        cout << "Bolum: " << sayi1 / sayi2 << endl;
    } else {
        cout << "Sayi sifira bolunemez!" << endl;
    }

    return 0;
}
