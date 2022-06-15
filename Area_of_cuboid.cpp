//ADVAIT CHAVAN, 4119008, Area of cuboid
//A cuboid consists of total 6 faces with opposite faces equal
//Let's consider a cuboid with front face having length as 'a' and height as 'c' (Front face is same as that of Back face or Rear face i.e. 2*Area_of_front_face)
//Side face having a breadth 'b' and height 'c'(RHS side face is equal to LHS side Face i.e. Area_of_RHS_face == Area_of_LHS_face ie 2*Area_of_RHS/LHS_face)
//The upper face and the lower face consists of length 'a' and breath 'b' each (Area_of_upper_face == Area_of_lower_face)
//Total Surface Area of cuboid = 2(a*b + b*c + a*c)
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float lenght, breadth, height, Total_surface_Area_of_cuboid;
    cout << "Enter the values of Length, Breadth and Height respectively:-";
    cout << "\nLength of cuboid : ";
    cin >> lenght;
    cout << "\nBreadth of cuboid : ";
    cin >> breadth;
    cout << "\nHeight of cuboid : ";
    cin >> height;
    Total_surface_Area_of_cuboid = 2*((lenght*breadth) + (breadth*height) + (height*lenght));
    cout << "\nThe Total Surface Area of the cuboid for the given values of length, breadth and height is : " <<  Total_surface_Area_of_cuboid;
}
