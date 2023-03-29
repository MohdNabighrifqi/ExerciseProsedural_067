#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status1(double rata) {
    if (rata >= 70)
        return "diterima";
    else
        return "ditolak";
}

string status2(double rata, double nilM) {
    if (rata >= 70 || nilM >= 80)
        return "diterima";
    else
        return "ditolak";
}