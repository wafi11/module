// memasukkan ke libary nya
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// memnaggil function pemanggil
int main ()
{
    char name_depan[10];//deklarasikan variable nama
    char nama_belakang[10];
    int j_bakar,j_goreng,j_bebek,j_bbakar,j_esteh;//deklarasikan variable jumlah tiap barang yang dijual
    int total,total_j_bakar,total_j_goreng,total_j_bebek_,total_bbakar,total_j_esteh;// deklarasikan total tiap barang sam total keseluruhan
    int pembayaran,kembalian;// deklarasikan variable kembalian dan uang yang ingin dibayarkan
    const int harga_ayam         = 10000;// mendeklarasikan varibel constan
    const int harga_ayam_goreng  = 8000;// mendeklarsikan variabel constan
    const int harga_Bebek_Goreng = 17000;// mendeklarasikan varibel constan
    const int harga_Bebek_Bakar  = 20000;// mendeklarasikan varibel constan
    const int harga_Esteh        = 3000;// mendeklarasikan varibel constan

    printf ("         Menu Pembelian                   \n");
    printf ("------------------------------------------\n");

    printf (" Nama : ");
    scanf ("%s",name_depan);// memasukkan nama pelnaggan
    printf (" Nama Belakanag : ");
    scanf ("%s",nama_belakang);

    strcat (name_depan,nama_belakang);
    printf (" \nHai %s\n",name_depan);
    printf ("NOTE : Jika tidak ingin membeli silahkan ketik 0");

    printf ("\n1. Ayam bakar\t\t Rp.%i  : ",harga_ayam);
    scanf ("%i",&j_bakar);
                                                
    printf ("2. Ayam goreng\t\t Rp.%i   : ",harga_ayam_goreng);
    scanf ("%i",&j_goreng);

    printf ("3. Bebek goreng\t\t Rp.%i  : ",harga_Bebek_Goreng);
    scanf ("%i",&j_bebek);

    printf ("4. Bebek bakar\t\t Rp.%i  : ",harga_Bebek_Bakar);
    scanf ("%i",&j_bbakar);

    printf ("5. Es teh\t\t Rp.%i   : ",harga_Esteh);
    scanf ("%i",&j_esteh);

    total_j_bakar = harga_ayam * j_bakar;
    total_j_goreng = harga_ayam_goreng * j_goreng;
    total_j_bebek_= harga_Bebek_Goreng * j_bebek;
    total_bbakar = harga_Bebek_Bakar * j_bbakar;
    total_j_esteh = harga_Esteh * j_esteh;

    total = (total_bbakar + total_j_bakar + total_j_bebek_ + total_j_esteh + total_j_esteh) ;
    


    printf (" \n--------------- Nota Pembelian --------------------\n");
    printf ("------------------------------------------------------\n");

    printf (" Menu \t\t jumlah \t   Harga\n");
    printf (" 1. Ayam Bakar\t  %i\t\t Rp.%i",j_bakar,total_j_bakar);
    printf (" \n 2. Ayam goreng\t  %i\t\t Rp.%i",j_goreng,total_j_goreng);
    printf (" \n 3. Bebek goreng  %i\t\t Rp.%i",j_bebek,total_j_bebek_);
    printf (" \n 4. Bebek bakar\t  %i\t\t Rp.%i",j_bbakar,total_bbakar);
    printf (" \n 5. Es teh \t  %i\t\t Rp.%i",j_esteh,total_j_esteh);

    printf ("\n---------------------------------------------------\n");
    printf (" Total : %i\n",total);
    printf (" Uang yang ingin di bayarkan : ");
    scanf  (" %i",&pembayaran);
    kembalian = pembayaran - total;
    printf (" Kembalian : %i ",kembalian);
    bool hasil;
    if (pembayaran >= total){
        hasil = true;
    } else {
        hasil = false;
    }
    if (hasil == true){
        printf ("uang anda pas");
    }else {
        printf ("uang anda kurang");
    }
    printf ("\n-----------------------------------------------------\n");

    return 0;
}