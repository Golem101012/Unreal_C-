

#include <iostream>
#include "Math.h"

using namespace std;



class Vec {
private:

    double x;
    double y;
    double z;

public:

    Vec() : x(0), y(0), z(0)
    {

    }

    Vec(double newX, double newY, double newZ) : x(newX), y(newY), z(newZ)
    {

    }

    double GetX()
    {
        return x;
    }

    double GetY()
    {
        return y;
    }

    double GetZ()
    {
        return z;
    }
    void SetX(double newX)
    {
        x = newX;
    }

    void SetY(double newY)
    {
        y = newY;
    }
    void SetZ(double newZ)
    {
        z = newZ;
    }


    void ShowVector()
    {
        cout << "\n" << x << " " << y << " " << z;
    }

    double  LenghtVector()
    {
        return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    }

};

int main()
{
    Vec temp(2, 3, 4);
    temp.ShowVector();
    cout << "\n" << temp.LenghtVector();


}
