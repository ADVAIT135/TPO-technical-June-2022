//Pythagoras Theorem
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    float side_1, side_2, side_3;
    int long_side,unknown_side;
    cout << "1.Side_1 \n2.Side_2 \n3.Side_3";
    cout << "\nLet Side_3 be considered as the longest side of the Right Angled triangle ";
    long_side = side_3;

    cout << "\nEnter the unknown side of the right angled triangle :-" << "\n" ;
    cin >> unknown_side;
    cout << "\nThe selected unknown side of the right angled triangle is : Side_" << unknown_side;

        if (unknown_side == 3){
                cout << "\nEnter the lengths of side_1 and side_2 respectively:-";
                cout << "\nSide_1 : ";
                cin >> side_1;
                cout << "\nSide_2 : ";
                cin >> side_2;
                side_3 = sqrt(pow(side_1, 2) + pow(side_2, 2));
                cout << "\nThe length of the side_3 is :" << side_3;
            }
        if (unknown_side == 1){
                cout << "\nEnter the lengths of side_2 and side_3 respectively:-";
                cout << "\nSide_2 : ";
                cin >> side_2;
                cout << "\nSide_3 : ";
                cin >> side_3;
                cout << "\nThe length of the side_1 is " << sqrt((pow(side_3, 2) - pow(side_2, 2)));
            }
        if (unknown_side == 2){
                cout << "\nEnter the lengths of side_1 and side_3 respectively:-";
                cout << "\nSide_1 : ";
                cin >> side_1;
                cout << "\nSide_3 : ";
                cin >> side_3;
                cout << "\nThe length of the side_2 is " << sqrt((pow(side_3, 2) - pow(side_1, 2)));
            }
        if ((unknown_side != 1)& (unknown_side != 2) & (unknown_side != 3)) {
            cout << "\nInvalid Option Please re-run the program again.....";
        }


}
