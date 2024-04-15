#include <iostream>
#include<string>
using namespace std;
#include "ex2.cpp"
void afficher(int n)
{
    Dessin d(n,"*");
    d.afficher();
}
void afficherdessin(int n)
{
    for(int k=0;k<n;++k){
        afficher(k);
    }
    for(int k=n;k>=0 ; --k){
        afficher(k);
    }
}


int main()
{
    cout<<"voici un dessin"<<endl;
    afficherdessin(5);
    cout<<"je vien d'efficher "<<Dessin::total<<"motifs"<<endl;


}
