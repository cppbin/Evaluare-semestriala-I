/** Sa se construiasca o matrice n * p care parcursa de sus in jos si de la
stanga spre dreapta sa contina primele n*p patrate perfecte **/

#include <iostream>
#define dmax 15

using namespace std;

void construireMatrice(int a[][dmax], int n, int p)
{
    int i, j, k = 1;
    for(i = 0; i < n; i++)
        for(j = 0; j < p; j++)
        {
            a[i][j] = k*k;
            k = k + 2;
        }
}

void afisareMatrice(int a[][dmax], int n, int p)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < p; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int a[dmax][dmax], n, p;
    cout << "n = "; cin >> n;
    cout << "p = "; cin >> p;
    construireMatrice(a, n, p);
    afisareMatrice(a, n, p);
    return 0;
}
