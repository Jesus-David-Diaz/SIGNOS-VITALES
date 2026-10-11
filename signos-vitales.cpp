#include <iostream>
using namespace std;

int main() {
    cout << "Signos Vitales" << endl;
    return 0;
}


 std::string clasificarFrecuencia(int lpm)
{
    if (lpm < 60)
        return "Bradicardia";
    else if (lpm > 100)
        return "Tachicardia";
    else
        return "Frecuencia Normal";
}

double fahrenheitACelsius (double f);

