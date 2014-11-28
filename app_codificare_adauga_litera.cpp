/** Dupa fiecare litera c data a unui cuvant sa se adauge litera c
Ex :   abracadabra - aabraacaadaabraa **/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[36], *p, s1[36], c;
    int i, l;
    cout << "cuvantul: "; cin >> s;
    cout << "caracterul: "; cin >> c;
    p = strchr(s, c); // cauta caracterul c in s
    while(p != NULL) // cat timp il gaseste
    {
        strcpy(s1, p+1); // salveaza in s1 sirul care incepe dupa caracterul gasit
        s[p-s+1] = c; // completeaza pozitia urmatoare pozitiei pe care a gasit litera c cu caracterul c
        strcpy(p+2, s1); // pune sirul s1 peste sirul s incepand cu doua pozitii dupa
        p = p + 2; // pointerul p se muta peste litera c gasita si litera c inserata
        p = strchr(p, c); // procesul continua de la noul p
    }
    cout << s;
    return 0;
}
