#include <iostream>
using namespace std;
/*
Nama : Yunolva Anis
Nim : 1301204096
Kelas : IF-44-09
*/

//Terdapat data mahasiswa yang akan wisuda dan disimpan ke dalam tipe bentukan.
struct mhs{
    string nama, nim;
    float ipk;
    int semester;
};

int main(){
    int N;
    cout<<"Jumlah Data :";cin>>N; //input banyak data sebanyak N
    mhs mahasiswa[N];
    for (int i=0;i<N;i++){
        cout<<"Data ke "<<i<<endl;
        cout<<"Nama:"; cin>>mahasiswa[i].nama; //input nama
        cout<<"NIM :"; cin>>mahasiswa[i].nim; //inut nim
           string major = mahasiswa[i].nim;
        char SArt = '1';
        char SCre = '2';
        char SMen = '3';
        if (SArt == major[1]){
            cout<<"Prodi Anda Adalah Studi Art of Coffe"<<endl;
        } else if (SCre == major[1]) {
            cout<<"Prodi Anda Adalah Art of Coffe"<<endl;
        } else if (SMen == major[1]){
            cout<<"Prodi Anda adalah Mental Health"<<endl;
        } else {
            cout<<"Tidak Terdaftar";
        }
        cout<<"IPK :"; cin>>mahasiswa[i].ipk; //input ipk
        cout<<"Semester :"; cin>>mahasiswa[i].semester; //input semester

        //CEK CUMLAUDE DENGAN 2 SYARAT
        if (mahasiswa[i].ipk>=3.5 && mahasiswa[i].semester<=8){
            cout<<"Cumlaude";
        }
/*
Nama : Yunolva Anis
Nim : 1301204096
Kelas : IF-44-09
*/
        //CEK IPK TERBESAR
        float iMaks = 1;
        //float ipk = ;
        for(int i=0;i<N;i++){
            if (mahasiswa[i].ipk>iMaks){
                iMaks = mahasiswa[i].ipk;
            }
        }
        cout<<"Ipk Terbesar didapatkan oleh :"<<iMaks;

        //Rata Rata IPK
        int total = 0;
        int rata;
        for(int i=0;i<N;i++){
            total = total + mahasiswa[i].ipk;
        }
        rata = total / N
        cout << rata;

        //kode unik
        int kode_unik;
        cout<<"Kode unik :"; cin<<kode_unik;

    } return 0;
}
