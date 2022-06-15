using namespace std;

class Input{
    public:
        Input(){}
        Array inputArray();

    private:
        int i, j;
};

Array Input::inputArray(){
    Array array = Array();
    cout << "Program Menginput Mahasiswa" << endl;
    cout << "========================================" << endl;
    for(i=0;i<15;i++){
        cout << "Masukkan Nama Mahasiswa : ";
        cin >> array.arr[i].nama;
        cout << "Masukkan NIM Mahasiswa : ";
        cin >> array.arr[i].nim;
        cout << "Masukkan Kelas Mahasiswa : ";
        cin >> array.arr[i].kelas;
        cout << "----------------------------------------" << endl;
    }
    return array;
}