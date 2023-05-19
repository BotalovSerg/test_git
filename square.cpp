#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    int a,b,c,d;
    

    cin >> a >> b >> c;

    d = (b * b) - (4*a*c);

    if (d < 0) {
        cout << "No real roots" << endl;
    } else if (d == 0) {
        double x_1;
        x_1 = (double)(-b) / (2 * a);
        cout <<  x_1 << " " << x_1 << endl;
    } else {
        double x_1, x_2;
        x_1 = (double)(-b - sqrt(d)) / (2 * a);
        x_2 = (double)(-b + sqrt(d)) / (2 * a);
        cout << x_1 << " " << x_2 << endl;
    }

    return 0;
}