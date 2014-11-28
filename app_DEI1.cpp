/**Se citește de la tastatură un vector care conține maxim
30 de numere întregi. Realizați programul C++ care afișează
numărul de elemente pare din vectorul dat. **/

#include <iostream>
#define dmax 30
using namespace std;

void citireVector(int v[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cin >> v[i];
}

int numaraPare(int v[], int k, int p)
{
    int c1, c2;
    if(k == p)
        if(v[k]%2 == 0)
            return 1;
        else return 0;
    else
    {
        c1 = numaraPare(v, k, (k+p)/2);
        c2 = numaraPare(v, (k+p)/2+1, p);
        return c1+c2;
    }
}

int main()
{
    int v[dmax], n;
    cout << "n = "; cin >> n;
    citireVector(v, n);
    cout << numaraPare(v, 0, n-1);
    return 0;
}
