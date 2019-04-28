#include<stdlib.h>
#include<iostream>

using namespace::std;
int Array[10],edit,hapus,searching,ketemu = 0,tukar,j,r,a,h,m,x,u,sorting,w;
bool kondisi=0;

void input()
{
    cout<<"\n========================= Masukkan Data Nilai =========================\n\n";
	cout << "Jumlah data : ";
	cin >>x;

        for(int i=0;i<x;i++)
        {
          cout<<"Data ke-" << i + 1 << " : ";
          cin>>Array[i];
        }
        for(int i=x-2;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
              if(Array[j]>Array[j+1])
                {
                    tukar=Array[j];
                    Array[j]=Array[j+1];
                    Array[j+1]=tukar;
                }
            }
            system("CLS");
        }
        for(int i=0;i<x;i++){cout<<"\nData Ke-"<<i+1<<" = "<<Array[i];}
}

void cari()
{ cout<<"\n\n======================== SEARCHING DATA =========================\n";
    cout << "\nCari Data = "; cin >> searching;
    for (int r = 0; r<x; r++)
    {
        if (searching == Array[r])
        {
            kondisi=true;
            kondisi++;
            if(kondisi==1)
            {
                cout << "\nNilai " << searching << " Data Yang Anda Cari Ada Di Data Ke- " << r+1 <<endl;
                ketemu = 1;
            }
        }
    }
    if (ketemu == 0) cout << "Anda Salah Memasukan Data, Data Yang Anda Cari Tidak Ditemukan";
}

    void deleted()
    {
        cout<<"\n========================== HAPUS DATA =========================\n";

        cout << "\nNilai Data Yang Ingin Dihapus = ";
        cin >> hapus;
        for (int a = 0; a < x; a++)
        {
            if (hapus == Array[a])
            {
                for (int h = a; h < x; h++)
                {
                    Array[h]= Array[h + 1];
                }
                x-= 1;
            }
        }
        cout << "\n\nData Baru :";
        for (int m = 0; m<x; m++)
        {
            cout << "\nData Ke-" << m+1 << " = " << Array[m];
        }

    }

        void ubah()
        {
            cout<<"\n\n========================== EDIT DATA ========================="<<endl;

            cout << "\nData Baru = "; cin >> edit;
            for (int u = 0; u<x; u++)
            {
                if (Array[u] == edit)
                {
                    cout << "Nilai Baru = "; cin >> Array[u];
                }
            }
            for(int i=x-2;i>=0;i--)
            {
                for(int w=0;w<=i;w++)
                {
                    if(Array[w]>Array[w+1])
                    {
                        tukar=Array[w];
                        Array[w]=Array[w+1];
                        Array[w+1]=tukar;
                    }
                }
            }

        }

            void urut()
            {
                cout << "\nData Setelah Diedit = ";
            for(int sorting=0;sorting<x;sorting++){cout<<"\nData Ke-"<<sorting+1<<" ="<<Array[sorting];}
            }

                void judul()
                {
                    cout<<"Program Input,Searching,Sorting,Hapus,dan Edit Data\n\n";
                }

                    void pembatas()
                    {
                        cout<<"\n==========================================================\n";
                    }

main()
{
    char yes;
    do{judul();
    input();
    pembatas();
    cari();
    deleted();
    pembatas();
    ubah();
    pembatas();
    urut();
    cout<<"\n\n\nApakah Ingin Mengulang Program?";
    cin>>yes;
    }
while (yes=='y');
}







