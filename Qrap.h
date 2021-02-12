#include <iostream>
#include <cstdlib>
#include <fstream>
#include <unistd.h>
#include <stdio.h>

using namespace std;

string command4, q1, q2, q3, q4, q5, q6;

void qrap();

void qrap()

{
    cout << " ____________________________________________________________ " << endl;
    cout << "|                                                            |" << endl;
    cout << "|                     Bracie! / Siostro!                     |" << endl;
    cout << "|                                                            |" << endl;
    cout << "|                                                            |" << endl;
    cout << "|            Po co tracic cenne godziny na szkryplanie       |" << endl;
    cout << "|            mozolne QRAPA za Qrap`em....                    |" << endl;
    cout << "|            Jacob wspanialy zautomatyzowal ten process      |" << endl;
    cout << "|            Korzystaj z usmiechem drogi operatorze...       |" << endl;
    cout << "|                                                            |" << endl;
    cout << "|____________________________________________________________|" << endl << endl;

    cout << "|Modul w fazie rozbudowy podane rubryki to sprawa dyskusyjna |" << endl;
    cout << "|                                                            |" << endl;
    cout << "|Podaj numer stanowiska..:";cin>>q1;    cout << endl;
    cout << "|Podaj klase wpisu.......:";cin>>q2;    cout << endl;
    cout << "|Prosze sprecyzuj zwiezle:";cin>>q3;    cout << endl;
    cout << "|Kto wykryl niezgodnosc..:";cin>>q4;    cout << endl;
    cout << "|Podjete kroki...........:";cin>>q5;    cout << endl;
    cout << "|Opcjonalny komentarz....:";cin>>q6;    cout << endl << endl;

    fstream plik;
    plik.open("qrap.txt",ios::out | ios::app);

    plik<<q1<<endl;
    plik<<q2<<endl;
    plik<<q3<<endl;
    plik<<q4<<endl;
    plik<<q5<<endl;
    plik<<q6<<endl;

    plik.close();


sleep(1);

    cout << "Mniam,.. dziekuje plik txt. utworzony.. powrot do zrodla....";
    sleep(2);



}
