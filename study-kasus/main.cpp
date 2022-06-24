#include <iostream>
using namespace std;

class pointer{
    public:
        void input();
        void proses();
        void output();
        
    private:
        int n;
        int *nim;
        int nimMhs[5];
        string *nama;
        string namaMhs[5];
};

void pointer::input(){
    cout << "Total Finalis Mahasiswa Yang Masuk Final : ";
    cin >> n;
    cout << "\n----------------------------------------------"<<endl;
    cout << "Data Mahasiswa Yang Berhasil Masuk Babak Final "<<endl;
    cout << "----------------------------------------------\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Input Nim Finalis  : ";
        cin >> nimMhs[i];
        cin.ignore();
        cout << "Input Nama Finalis : ";
        getline(cin, (namaMhs[i]));
    }
}

void pointer::proses(){
    nim = new int[n];
    nama = new string[n];
    for (int i = 0; i < n; i++)
    {
        *nim = nimMhs[i];
        nim += 1;
        *nama = namaMhs[i];
        nama += 1;
    }
}

void pointer::output(){
    nim -= n;
    nama -= n;
    cout << "\n\n----------------------------"<<endl;
    cout << " Menampilkan Data Mahasiswa"<<endl;
    cout << "----------------------------\n"<<endl;
    for (int i = 0; i < n; i++)
      
    {
        cout << "Finalis Ke-\t" << i + 1 <<" : "<< *nama << endl;
        nama += 1;
        cout << "Nim\t\t\t  : " << *nim << endl;
        nim += 1;
    }
}
int main(){
    pointer p;

    p.input();
    p.proses();
    p.output();


    return 0;
}
