#include <iostream>
using namespace std;

double toplama(double a, double b);
double cikarma(double a, double b);
double carpma(double a, double b);
double bolme(double a, double b);

int main() {
    double a, b;
    cout << "Birinci sayiyi gir: ";
    cin >> a;
    cout << "Ikinci sayiyi gir: ";
    cin >> b;

    cout << "Toplama: " << toplama(a, b) << endl;
    cout << "Cikarma: " << cikarma(a, b) << endl;
    cout << "Carpma: " << carpma(a, b) << endl;
    cout << "Bolme: " << bolme(a, b) << endl;

    return 0;
}
