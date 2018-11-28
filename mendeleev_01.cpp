//mendeleev
//strcmp(a,b); --> Compara doua siruri. Returneaza -1,1 si 0 (0 pt. siruri egala)
//strupr(ec);  --> Conversie sir la litere mari
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
char ec[3]="  "; //pentru doua caractere plus \n (terminatorul de sir)
int contor=0;    //initializare contor pentru while
cout << "Tabelul periodic al elementelor (Realizat de: Sorostinean Radu-clasa a IX-a)"<<endl;
cout << "-------------- Terminare program ( se introduce litera z ) -------------"<<endl;

while( contor == 0 )
{
char ec[3]="  ";
cout << "Introduceti elementul chimic = "; cin >> ec;
if (strcmp(strupr(ec),"Z") == 0) //Comparare - iesire din program
    {contor = 1;
     cout <<"Terminare program";
    }
{
 if (strcmp(strupr(ec),"H") == 0)
    cout << "Hidrogen = "<<"1 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"HE") == 0)
    cout << "Heliu = "<<"2 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"LI") == 0)
    cout << "Litiu = "<<"3 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"BE") == 0)
    cout << "Beriliu = "<<"4 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"B") == 0)
    cout << "Bor = "<<"5 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"C") == 0)
    cout << "Carbon = "<<"6 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"N") == 0)
    cout << "Azot = "<<"7 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"O") == 0)
    cout << "Oxigen = "<<"8 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"F") == 0)
    cout << "Fluor = "<<"9 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"NE") == 0)
    cout << "Neon = "<<"10 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"NA") == 0)
    cout << "Sodiu = "<<"11 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"MG") == 0)
    cout << "Magneziu = "<<"12 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"AL") == 0)
    cout << "Aluminiu = "<<"13 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"SI") == 0)
    cout << "Siliciu = "<<"14 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"P") == 0)
    cout << "Fosfor = "<<"15 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"S") == 0)
    cout << "Sulf = "<<"16 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"CL") == 0)
    cout << "Clor = "<<"17 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"AR") == 0)
    cout << "Argon = "<<"18 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"K") == 0)
    cout << "Potasiu = "<<"19 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"CA") == 0)
    cout << "Calciu = "<<"20 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"SC") == 0)
    cout << "Scandiu = "<<"21 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"TI") == 0)
    cout << "Titan = "<<"22 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"V") == 0)
    cout << "Vanadiu = "<<"23 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"CR") == 0)
    cout << "Crom = "<<"24 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"MN") == 0)
    cout << "Mangan = "<<"25 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"FE") == 0)
    cout << "Fier = "<<"26 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"CO") == 0)
    cout << "Cobalt = "<<"27 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"NI") == 0)
    cout << "Nichel = "<<"28 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"CU") == 0)
    cout << "Cupru = "<<"29 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"ZN") == 0)
    cout << "Zinc = "<<"30 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"GA") == 0)
    cout << "Galiu = "<<"31 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"GE") == 0)
    cout << "Germaniu = "<<"32 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"AS") == 0)
    cout << "Arsen = "<<"33 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"SE") == 0)
    cout << "Seleniu = "<<"34 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"BR") == 0)
    cout << "Brom = "<<"35 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"KR") == 0)
    cout << "Kripton = "<<"36 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"RB") == 0)
    cout << "Rubidiu = "<<"37 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"SR") == 0)
    cout << "Strontiu = "<<"38 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"Y") == 0)
    cout << "Ytriu = "<<"39 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"ZR") == 0)
    cout << "Zirconiu = "<<"40 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"NB") == 0)
    cout << "Niobiu = "<<"41 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"MO") == 0)
    cout << "Molibden = "<<"42 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"TC") == 0)
    cout << "Tehnetiu = "<<"43 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"RU") == 0)
    cout << "Ruteniu = "<<"44 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"RH") == 0)
    cout << "Rodiu = "<<"45 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"PD") == 0)
    cout << "Paladiu = "<<"46 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"AG") == 0)
    cout << "Argint = "<<"47 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"CD") == 0)
    cout << "Cadmiu = "<<"48 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"IN") == 0)
    cout << "Indiu = "<<"49 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"SN") == 0)
    cout << "Staniu = "<<"50 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"SB") == 0)
    cout << "Stibiu = "<<"51 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"TE") == 0)
    cout << "Telur = "<<"52 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"I") == 0)
    cout << "Iod = "<<"53 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"XE") == 0)
    cout << "Xenon = "<<"54 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"CS") == 0)
    cout << "Cesiu = "<<"55 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"BA") == 0)
    cout << "Bariu = "<<"56 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"LA") == 0)
    cout << "Lantan = "<<"57 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"CE") == 0)
    cout << "Ceriu = "<<"58 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"PR") == 0)
    cout << "Praseodim = "<<"59 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"ND") == 0)
    cout << "Neodim = "<<"60 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"PM") == 0)
    cout << "Prometiu = "<<"61 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"SM") == 0)
    cout << "Samariu = "<<"62 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"EU") == 0)
    cout << "Europiu = "<<"63 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"GD") == 0)
    cout << "Gadoliniu = "<<"64 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"TB") == 0)
    cout << "Terbiu = "<<"65 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"DY") == 0)
    cout << "Disprosiu = "<<"66 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"HO") == 0)
    cout << "Holmiu = "<<"67 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"ER") == 0)
    cout << "Erbiu = "<<"68 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"TM") == 0)
    cout << "Tuliu = "<<"69 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"YB") == 0)
    cout << "Yterbiu = "<<"70 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"LU") == 0)
    cout << "Lutetiu = "<<"71 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"HF") == 0)
    cout << "Hafniu = "<<"72 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"TA") == 0)
    cout << "Tantal = "<<"73 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"W") == 0)
    cout << "Wolfram = "<<"74 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"RE") == 0)
    cout << "Reniu = "<<"75 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"OS") == 0)
    cout << "Osmiu = "<<"76 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"IR") == 0)
    cout << "Iridiu = "<<"77 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"PT") == 0)
    cout << "Platina = "<<"78 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"AU") == 0)
    cout << "Aur = "<<"79 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"HG") == 0)
    cout << "Mercur = "<<"80 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"TI") == 0)
    cout << "Taliu = "<<"81 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"PB") == 0)
    cout << "Plumb = "<<"82 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"BI") == 0)
    cout << "Bismut = "<<"83 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"PO") == 0)
    cout << "Poloniu = "<<"84 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"AT") == 0)
    cout << "Astaniu = "<<"85 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"RN") == 0)
    cout << "Radon = "<<"86 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"FR") == 0)
    cout << "Franciu = "<<"87 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"RA") == 0)
    cout << "Radiu = "<<"88 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"AC") == 0)
    cout << "Actiniu = "<<"89 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"TH") == 0)
    cout << "Toriu = "<<"90 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"PA") == 0)
    cout << "Protactiniu = "<<"91 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"U") == 0)
    cout << "Uraniu = "<<"92 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"NP") == 0)
    cout << "Neptuniu = "<<"93 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"PU") == 0)
    cout << "Plutoniu = "<<"94 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"AM") == 0)
    cout << "Americiu = "<<"95 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"CM") == 0)
    cout << "Curiu = "<<"96 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"BK") == 0)
    cout << "Berkeliu = "<<"97 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"CF") == 0)
    cout << "Californiu = "<<"98 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"ES") == 0)
    cout << "Einsteiniu = "<<"99 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"FM") == 0)
    cout << "Fermiu = "<<"100 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"MD") == 0)
    cout << "Mendeleviu = "<<"101 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"NO") == 0)
    cout << "Nobeliu = "<<"102 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"LR") == 0)
    cout << "Lawrenciu = "<<"103 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"RF") == 0)
    cout << "Rutherfordium = "<<"104 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"DB") == 0)
    cout << "Dubnium = "<<"105 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"SG") == 0)
    cout << "Seaborgium = "<<"106 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"BH") == 0)
    cout << "Bohrium = "<<"107 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"HS") == 0)
    cout << "Hassium = "<<"108 (numar atomic)"<<endl;
 if (strcmp(strupr(ec),"MT") == 0)
    cout << "Meitnerium = "<<"109 (numar atomic)"<<endl;

}
cout <<endl;
}
 getch();
 return 0;
 }

/*
 if (strcmp(strupr(ec),"") == 0)
    cout << " = "<<" (numar atomic)"<<endl;

 if (strcmp(strupr(ec),"ZR") == 0)
    cout << "Zirconiu = "<<"40 (numar atomic)"<<endl;

*/


