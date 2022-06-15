using namespace std;

class Output{
    public:
        Output(){}
        void cetak(Array array);

    private:
        int i, j;
};

void Output::cetak(Array array){
    cout << "========================================" << endl;
    cout << "Kelas\t\t\tNIM\t\t\tNama" << endl;
    cout << "----------------------------------------" << endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << array.arr2d[i][j].kelas << "\t\t\t" << array.arr2d[i][j].nim << "\t\t\t" << array.arr2d[i][j].nama << endl;
        }
        cout << "----------------------------------------" << endl;
    }
    cout << "========================================" << endl;
}