#include <iostream>
#include <windows.h>
using namespace std;

int main() //copyright ANDREA©
{
    int tempo1 = 100;
    cout << "inserisci numero di secondi: ";
    cin >> tempo1;
    Sleep(1000);
    while (tempo1 >= 1)
    {
    cout << "\rcaricamento... " << tempo1 << "%" << flush;
    Sleep(1000);
    tempo1--;
    cout << "caricamento completato" << endl;
    cout << "non sono ancora aggiornato" << endl;
    cout << "per informazioni scrivi: aiuto" << endl;
    cout << "copyright ANDREA©";

    while (true)
    {
    cout << "\n" << endl;
    string parola1;
    cin >> parola1;
    if (parola1 == "ciao")
    {
    cout << "ciao" << endl;
    }
    else if (parola1 == "exit")
    {
        cout << "esco" << endl;
    }
    else if (parola1 == "cronometro")
    {
        int tempo = 60;
        cout << "inserisci numero di secondi: ";
        cin >> tempo;
        Sleep(1000);
        while (tempo >= 1)
        {
        cout << "\rTempo rimasto rimasto: " << tempo << flush;
        Sleep(1000);
        tempo--;
        }
    }
    else if (parola1 == "versione")
    {
        cout << "versione: BETA 0.0.1" << endl;
    }
    else if (parola1 == "aiuto")
    {
        cout << "comandi interni: \ncronometro\nversione\naltro:\nper adesso non sono ultimata del tutto quindi se vuoi parlare con me esiste solo il comando ciao" << endl;
    }
    else
    {
        cout << "il mio dizionario non e' aggiornato" << endl;
    }
    }
system("PAUSE");
return 0;}