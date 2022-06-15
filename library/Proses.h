using namespace std;

class Proses{
    public:
        Proses(){}
        Array sorting(Array array);
        Array transform(Array array);

    private:
        int i, j, k, temp, indexA, indexB, indexC;
};

Array Proses::sorting(Array array){
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            for(k=j+1;k<5;k++){
                if(array.arr2d[i][j].nim > array.arr2d[i][k].nim){
                Mahasiswa temp = Mahasiswa();
                temp.nim = array.arr2d[i][j].nim;
                array.arr2d[i][j].nim = array.arr2d[i][k].nim;
                array.arr2d[i][k].nim = temp.nim;

                temp.nama = array.arr2d[i][j].nama;
                array.arr2d[i][j].nama = array.arr2d[i][k].nama;
                array.arr2d[i][k].nama = temp.nama;

                temp.kelas = array.arr2d[i][j].kelas;
                array.arr2d[i][j].kelas = array.arr2d[i][k].kelas;
                array.arr2d[i][k].kelas = temp.kelas;
                }
            }
        }
    }
    return array;
}

Array Proses::transform(Array array){
    indexA = 0;
    indexB = 0;
    indexC = 0;
    for(i=0;i<15;i++){
        if(array.arr[i].kelas == 'A' || array.arr[i].kelas == 'a'){
            array.arr2d[0][indexA] = array.arr[i];
            indexA++;
        }else if(array.arr[i].kelas == 'B' || array.arr[i].kelas == 'b'){
            array.arr2d[1][indexB] = array.arr[i];
            indexB++;
        }else{
            array.arr2d[2][indexC] = array.arr[i];
            indexC++;
        }
    }
    return array;
}