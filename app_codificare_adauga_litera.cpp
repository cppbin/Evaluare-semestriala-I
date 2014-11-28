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
    p = strchr(s, c);
    while(p != NULL)
    {
        strcpy(s1, p+1);
        s[p-s+1] = c;
        strcpy(p+2, s1);
        p = p + 2;
        p = strchr(p, c);
    }
    cout << s;
    return 0;
}
