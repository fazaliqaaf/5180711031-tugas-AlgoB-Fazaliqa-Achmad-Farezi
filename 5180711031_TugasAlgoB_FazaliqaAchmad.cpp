#include <iostream>
using namespace::std;
int main(){
    string nomor[5]={"A001","A002","A003","A007","A008"};
    string nama[5]={"BAYU","IRVAN","SUSI","DIANA","RONI"};
    string nama1,cr,mmbr,brg,N;
    int indeks,jum=5,hrg,jumlah,tot;

    cout<<"Apakah Anda member ?[t/y] : ";cin>>mmbr;
 if(mmbr=="t")
    {cout<<"\nSilahkan masukan nama :";cin>>N;
     cout<<"\nBerapa jumlah barang yang akan beli : ";cin>>jumlah;
        cout<<"\nNama barang yang dibeli : ";cin>>brg;
        cout<<"\nHarga barang : ";cin>>hrg;
        tot=jumlah*hrg;
        cout<<"\nJumlah Harga semuanya:"<<tot;
        return 0;}
      else  if (mmbr=="y"){
            cout<<"\nSilahakan masukan no id: ";cin>>cr;
            for (int i=0;i<jum;i++){
                if(cr==nomor[i]){
                    nama1=nama[i];
                }
            }
            cout<<"\nAnda member"<<endl;
            cout<<"\nId Anda   : "<<cr<<endl;
            cout<<"\nNama Anda : "<<nama1<<endl;
            cout<<"\nBerapa jumlah barang yg anda beli : ";cin>>jumlah;
            cout<<"\nNama barang : ";cin>>brg;
            cout<<"\nHarga : ";cin>>hrg;
            tot=jumlah*hrg;
            cout<<"\nanda mendapatkan diskon 5%";
            tot=tot*5/100;
            cout<<"\nJumalah Harga semuanya:"<<tot;

}
}
