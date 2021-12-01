#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int jam,menit,detik;
        cin>>detik;
    jam = detik /(60*60);
    detik = detik-((60*60)*jam);
    menit = detik/60 ;
    detik = detik-(60*menit);
    cout<<jam<<"jam"<<menit<<"menit"<<detik<<"detik"<<endl;
    return 0;
}
