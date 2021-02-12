#include <iostream>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

string command5;
string temat, nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna[5];
string odpowiedz;
int punkty=0;

void quiz();

void quiz()
{
    cout << " ____________________________________________________________ " << endl;
    cout << "|                                                            |" << endl;
    cout << "|                     Bracia! / Siostry!                     |" << endl;
    cout << "|                                                            |" << endl;
    cout << "|            Czas na odrobinke wspolzawodnictwa              |" << endl;
    cout << "|                                                            |" << endl;
    cout << "|                Przedstawiam punktowalny. .                 |" << endl;
    cout << "|                                                            |" << endl;
    cout << "|                     ! ! Q U I Z ! !                        |" << endl;
    cout << "|____________________________________________________________|" << endl;
    cout << "|                                                            |" << endl;
    cout << "|                                                            |" << endl;
    cout << "|                                                            |" << endl;
    cout << "| Zadnej presjii, ale wiesz, ze udzial jest punktowany..? ;p |" << endl;
    cout << "|                        ;p :D :D :)                         |" << endl;
    cout << "|                                                            |" << endl;
    cout << "|             -No to swietnie,..  Powodzenia ! ! ! :)        |" << endl;
    cout << "|                                                            |" << endl;
    cout << "|____________________________________________________________|" << endl;


    int nr_lini=1;
    string linia;
    int nr_pytania=0;

    fstream plik;
    plik.open("quiz.txt",ios::in);

    if (plik.good()==false)
    {
        cout << "Nie udao sie otforzyc pliku z kuizem! :(";
        exit(0);
    }

    while(getline(plik,linia))
    {
        switch(nr_lini)
        {
            case 1: temat=linia;                   break;
            case 2: nick=linia;                    break;
            case 3: tresc[nr_pytania] = linia;     break;
            case 4: odpA[nr_pytania] = linia;      break;
            case 5: odpB[nr_pytania] = linia;      break;
            case 6: odpC[nr_pytania] = linia;      break;
            case 7: odpD[nr_pytania] = linia;      break;
            case 8: poprawna[nr_pytania] = linia;  break;
        }

        if (nr_lini==8) {nr_lini=2; nr_pytania++;}
        nr_lini++;
    }

    plik.close();

    for (int i=0; i<=4; i++)
    {
        cout<<endl<<tresc[i]<<endl;
        cout<<"A. "<<odpA[i]<<endl;
        cout<<"B. "<<odpB[i]<<endl;
        cout<<"C. "<<odpC[i]<<endl;
        cout<<"D. "<<odpD[i]<<endl;

        cout<<"Twoja odpowiedz: ";
        cin>>odpowiedz;

        transform(odpowiedz.begin(),odpowiedz.end(),odpowiedz.begin(), ::tolower);

        if (odpowiedz==poprawna[i])
        {
            cout<<"Dobrze! Zdobywasz punkt!"<<endl;
            punkty++;
        } else cout <<"Zle! Brak punktu! Poprawna odpowiedz: "<<poprawna[i]<<endl;

    }

    cout<<endl<<"Koniec quizu! Zdobyte punkty: "<< punkty << endl << endl;

    int main();

    }
