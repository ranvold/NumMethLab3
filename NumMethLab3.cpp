#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;



void SimpleIterator(double& x, double& y, const double EPS) {
    double xPrev, yPrev;
    int iter = 0;

    do {
        xPrev = x;
        yPrev = y;
        x = (0.9 + cos(y)) / 3;
        y = sin(x - 0.6) - 1.6;

        cout << "Step " << ++iter << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;

    } while (abs(max(x - xPrev, y - yPrev)) > EPS);

    cout << "-------------------------------------------------------------------------" << endl;
}


int main() {
    cout << setprecision(3);
    cout << fixed;

    const double EPS = 0.001;
    double x = 0;
    double y = 0;

    SimpleIterator(x, y, EPS);

    cout << "Result: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}