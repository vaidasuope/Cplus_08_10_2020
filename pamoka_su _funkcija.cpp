#include <iostream>
using namespace std;
void kiekis (string txt, int &kiek);
void ivedimas(string txt, int kiek, int Z[]); //funkcijos prototipas - funkcija kiekimas ir ivedimui pazymiu su masyvu. Skirtingose funkcijose galim naudoti tuos pacius vardus
void isvedimas (string txt, int kiek, int Z[]);
int main()
{
   int kiekP, kiekA, kiekM, suma(0), paz, maxPaz, kelintas;
   kiekis ("Petras", kiekP);//cia kreipiames i funkcija
   int P[kiekP];
   ivedimas ("Petro", kiekP, P);
   kiekis ("Antanas", kiekA);
   int A[kiekA];
   ivedimas ("Antano", kiekA, A);
   kiekis ("Martynas", kiekM);
   int M[kiekM];
   ivedimas ("Martyno", kiekM, M);
   isvedimas("Petro pazymiai",kiekP,P);
   isvedimas("Antano pazymiai",kiekA,A);
   isvedimas("Martyno pazymiai",kiekM,M);



   //float vid;

  /* for(int i=1; i<=kiek; i++)
     {
      cout<<"iveskite "<<i<<"-aji pazymi ";
      cin>>paz;
      if(paz>10 or paz<1) {
                    cout<<"blogas pazymys\n";
                    i--;
                  }
           else {   suma = suma + paz;
                    if(i == 1 ){maxPaz = paz; kelintas=i;}
                    else if (maxPaz<=paz){maxPaz = paz; kelintas=i;}
                }
          }
    vid = (float)suma / kiek;
    cout <<" petriuko vidurkis  "<<vid;
    cout<<"\n max ivertinimas "<<kelintas <<" pazimys "<<maxPaz; */
    return 0;
}



//------kiekio ivedimas-----
void kiekis (string txt, int &kiek)
//kadangi kieki tures grazinti i programa, tai rasomk pries kintamaji &, parodo, kad grazina i pograma
{
    cout<<"Kiek "<<txt<<" turi pazymiu? ";//apsirasem f-ja kuri leidzia ivesti pazymiu kieki
    cin>>kiek;
}
//----ivedimas masyvo---//
void ivedimas(string txt, int kiek, int Z[])
{
    for(int i=0; i<kiek; i++)
     {
      cout<<"iveskite "<<txt<<i+1<<"-aji pazymi ";
      cin>>Z[i];
      if(Z[i]>10 or Z[i]<1) {
                    cout<<"blogas pazymys\n";
                    i--;
                          }
     }
}
//--------------------------
//isvedimas
void isvedimas (string txt, int kiek, int Z[])
{
    cout<<txt<<endl;
    for(int i=0; i<kiek; i++)
    {
        cout<<Z[i]<<" ";
    }
}
//-------------------
