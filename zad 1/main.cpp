#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int tab[200];

        ifstream we("1.txt");
            for (int i=0;i<200;i++)
            we>>tab[i];
    we.close();
        ofstream wy("1wynik.txt");
        for (int i=0;i<10;i++)
        {
            for (int j=0;j<200;j++)
                if(tab[j]%10==i)
                wy<<tab[j]<<" ";
            wy<<endl;
        }
        wy.close();
        return 0;
}
