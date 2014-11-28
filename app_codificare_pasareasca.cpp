/** Codificarea pasareasca a unui cuvant. Dupa fiecare vocala, se pune litera p urmata de acea vocala
Ex :   informatica - ipinfopormapatipicapa **/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256], *p, s1[256];
    int i, l;
    cout << "cuvantul: "; cin >> s;
    l = strlen(s);
    for(i = 0; i < l; i++)
    {
        p = strchr("aeiou", s[i]); //cauta vocala
        if(p != NULL) // daca gaseste o vocala
        {
            strcpy(s1, s+i+1); //salveaza in s1 sirul care incepe dupa vocala
            s[i+1]='p'; //completeaza in sir pozitia urmatoare gasirii vocalei cu caracterul 'p'
            s[i+2]=p[0]; //completeaza in sir pe pozitia urmatoare literei 'p' vocala gasita
            strcpy(s+i+3, s1); //aduce sirul s1 dupa cele doua pozitii completate anterior
            i=i+3; // i sare peste urmatoarele 3 caractere care nu mai trebuie tratate
            l=l+2; // lungimea sirului se mareste cu 2, la fiecare gasire de vocala se adauga 2 caractere
        }
    }
    cout << s;
    return 0;
}

