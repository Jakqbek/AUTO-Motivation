#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include "Repozytorium.h"
#include "Techno.h"
#include "Aktuelle.h"
#include "Qrap.h"
#include "Quiz.h"

using namespace std;

string com2;

int com1;



int main()

 {
for(;;)
{
    cout << "| ***   ***   ***   Witom w menu glownym..   ***   ***   *** |" << endl << endl;
    cout << "|Wyboru w menu dokonujemy podajac liczbe calkowita przypisana|" << endl;
    cout << "|do rzadanej opcji.. Pamietaj ze w wyniku komplikacji mozesz |" << endl;
    cout << "|zawsze zakonczyc program w konsoli przez nadanie EOF..      |"<< endl;
    cout << "|za pomoca ctr+c, ctr+z, lub ctr+'backslash'                 |"<< endl;
    cout << "|------------------------------------------------------------|"<< endl;
    cout << "-(1)-Otworz manual~.......... " << endl;
    cout << "-(2)-Techniczne 'mambo-jumbo'~" << endl;
    cout << "-(3)-Zobejzyj do 'Aktuelle'..." << endl;
    cout << "-(4)-Zloz raport 'QRAP'......." << endl;
    cout << "-(5)-Quiz.'QQQ'..............." << endl;
    cout << "-(6)-Tu nie klikaj......serio." << endl << endl;
    cout << "-(X)-Podaj przyjacielu swoj input~"; cin >> com1;

    switch(com1)
    {
        case 1:
        {
            repo();
        }
        break;
        case 2:
        {
            techno();
        }
        break;
        case 3:
        {
            aktuelle();
        }
        break;
        case 4:
        {
            qrap();
        }
        break;
        case 5:
        {
            quiz();
        }
        break;
        case 6:
        {
            cout << "K...WA Mowilem.." << endl;
            for(int i=4; i>=1; i--)
            {
            sleep(1);
            system("clear");
            cout << " Instaluje wirusa za..." << i << ",..powodzenia ziom.:P  XD  :) " << endl;
            }

        }
        break;

        default: cout << "Wybacz ale ni ma takiej opcji..";


    }
}
     cout << "Dziekueje, . ." << endl;
     sleep(1);

     return 0;
}
