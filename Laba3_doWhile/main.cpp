#include <iostream>
#include <conio.h>
#include "head.h"

using namespace std;

int main() {
    double eps;
    int n, k;

    for (0; true; 0) {

        cout << "1.Task 1 \n"
                "2.Task 2 \n"
                "3.Task 3 \n"
                "4.Task 4 \n"
                "5.Task 5 \n"
                "6.Exit" << endl;


        switch (getch()) {

            case '1': {
                system("cls");
                cout << "Input n" << endl;
                cin >> n;
                cout << summ(n) << endl;
                getch();
                system("cls");
                break;
            }

            case '2': {
                system("cls");
                cout << "Input eps" << endl;
                cin >> eps;
                cout << summ2(eps) << endl;
                getch();
                system("cls");
                break;
            }

            case '3': {
                system("cls");
                cout << "Input n" << endl;
                cin >> n;
                cout << "Input k" << endl;
                cin >> k;
                print(n,k);
                getch();
                system("cls");
                break;
            }

            case '4': {
                system("cls");
                cout << "Input eps" << endl;
                cin >> eps;
                cout << findFirstElement(eps) << endl;
                getch();
                system("cls");
                break;
            }

            case '5': {
                system("cls");
                cout << "Input eps" << endl;
                cin >> eps;
                cout << findFirstNegativeElement(eps) << endl;
                getch();
                system("cls");
                break;
            }

            case '6': {
                return 0;
            }

            default:
                cout << "enter a number from 1 to 6" << endl;
                break;
        }
    }

}
