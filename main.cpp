#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int c,dl;
    string wyraz,napis;
    string tab[50];
    cin>>c;
    for (int k=0; k<c; k++)
    {
        cin>>wyraz;
        dl = wyraz.length();
        for (int i=0; i<dl; i++)
        {
            if (wyraz[i]==wyraz[i+1])
            {
                int licznik=2;
                i++;
                while (wyraz[i]==wyraz[i+1])
                {
                    licznik++;
                    i++;
                }
                if (licznik>2)
                {
                    ostringstream ss;
                    ss << licznik;
                    string str = ss.str();
                    napis += wyraz[i]+str;
                } else
                {
                    napis = napis + wyraz[i-1] + wyraz[i-1];
                }
            } else
            {
                napis+=wyraz[i];
            }
        }
        tab[k] = napis;
        napis="";
    }
    for (int l=0; l<c; l++)
        {
            cout<<tab[l]<<endl;
        }
    return 0;
}
