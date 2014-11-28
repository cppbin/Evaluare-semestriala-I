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
        p = strchr("aeiou", s[i]);
        if(p != NULL)
        {
            strcpy(s1, s+i+1);
            s[i+1]='p';
            s[i+2]=p[0];
            strcpy(s+i+3, s1);
            i=i+3;
            l=l+2;
        }
    }
    cout << s;
    return 0;
}

