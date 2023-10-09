#include<iostream.h>
#include<string.h>
#include <conio.h>
class Buku{
    private :
        char judul[35];
        char pengarang[25];
        int jumlah;
    public:
    void inisialisasiBuku(char *jdl,char *pngarang,int jmlh){
        strcpy(judul, jdl);
        strcpy(pengarang, pngarang);
        jumlah = jmlh;
    }
    void infoBuku(){
        cout<<" Judul :"<<judul<<endl;
        cout<<" Pengarang :"<<pengarang<<endl;
        cout<<" Jumlah buku :"<<jumlah<<endl;
    }
};
int main (){
    Buku novel,fiksi;
    novel. inisialisasiBuku
    ("Meriam Benteng navarone","Alistair Maclean",12);
    fiksi. inisialisasiBuku
    ("Jurassic park","Michael Crichton",3);
     novel. infoBuku();
    fiksi. infoBuku();
    getch();
    return 0;
}