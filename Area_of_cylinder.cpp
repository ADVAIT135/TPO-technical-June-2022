//Area of cylinder, ADVAIT CHAVAN, 4119008
#include<iostream>
#include<conio.h>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    float radius, height, Area_of_cylinder;
    cout << "Enter the values of radius and height of the cylinder respectively :-";
    cout << "\nRadius of the cylinder : ";
    cin >> radius;
    cout << "\nHeight of the cylinder : ";
    cin >> height;
    Area_of_cylinder = 2*(M_PI*(radius*(radius+height)));
    cout << "\nThe Total Surface Area of the Cylinder is : " << Area_of_cylinder;
}
