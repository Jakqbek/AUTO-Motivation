#include <iostream>

using namespace std;

int c2;

void techno();

void techno()
{

while(c2!=14)
{

    cout << " - Wybierz drogi przyjacielu stanowisko o . . .   " << endl << endl;
    cout << " -(1)- MO-10 - " << endl;
    cout << " -(2)- MO-20 - " << endl;
    cout << " -(3)- MO-30 - " << endl;
    cout << " -(4)- MO-40 - " << endl;
    cout << " -(5)- MO-50 - " << endl;
    cout << " -(6)- MO-60 - " << endl;
    cout << " -(7)- MO-70 - " << endl;
    cout << " -(8)- MO-80 - " << endl;
    cout << " -(9)- MO-90 - " << endl;
    cout << " -(10)- MO-100 - " << endl;
    cout << " -(11)- MO-110 - " << endl;
    cout << " -(12)- MO-120 - " << endl;
    cout << " -(13)- Dodatek- " << endl;
    cout << " -(14)- Powrot..." << endl << endl;
    cout << " Twoj wybor to...";
    cin >> c2;


    switch(c2)
    {
    case 1:
        cout << "Mo10 TEREFEREQQ - strzela jacob w huku";
    break;

    case 2:
        cout << "Mo20 Terferokuq -";
    break;

    case 14:
    break;

    default: cout << "Nie ma takijej opcyi ;)";
    }

    }
cout << "No to ci paaa!";
}

