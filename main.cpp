#include<iostream>
#include "Database/Mahasiswa.h"
#include "Database/Array.h"
#include "library/Input.h"
#include "library/Proses.h"
#include "library/Output.h"
using namespace std;

int main(){
    Input objectInput = Input();
    Proses objectProses = Proses();
    Output objectOutput = Output();
    Array array;
    array = objectInput.inputArray();
    array = objectProses.transform(array);
    array = objectProses.sorting(array);
    objectOutput.cetak(array);
    return 0;
}