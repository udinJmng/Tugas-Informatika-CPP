#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
float pecahan, vround, vceil, vfloor, vtrunc;

string kataround, kataceil, katafloor, katatrunc;

// string hasil biar codingan output dibawah rapi 
kataround = "Hasil Pembulatan Round ";
kataceil= "Hasil Pembulatan ceil ";
katafloor="Hasil Pembulatan floor ";
katatrunc ="Hasil Pembulatan trunc ";

cout << "Masukan bilangan pecahan : ";
cin >> pecahan ;
vround = round(pecahan);
vceil = ceil(pecahan);
vfloor = floor(pecahan);
vtrunc = trunc(pecahan);


cout << kataround << vround << "\n";
cout << kataceil << vceil << "\n";
cout << katatrunc << vtrunc << "\n";

    return 0;
}
