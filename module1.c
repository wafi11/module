// memasukkan ke libary nya
#include <stdio.h>

// memnaggil function pemanggil
int main ()
{
    char name[10];//deklarasikan variable nama
    int j_bakar,j_goreng,j_bebek,j_bbakar,j_esteh;//deklarasikan variable jumlah tiap barang yang dijual
    int total,total_j_bakar,total_j_goreng,total_j_bebek_,total_bbakar,total_j_esteh;// deklarasikan total tiap barang sam total keseluruhan
    int pembayaran,kembalian;// deklarasikan variable kembalian dan uang yang ingin dibayarkan

    printf ("         Menu Pembelian                   \n");
    printf ("------------------------------------------\n");

    printf ("Nama : ");
    scanf ("%s",name);// memasukkan nama pelnaggan

    printf ("\nHai %s\t\n",name);
    printf ("NOTE : Jika tidak ingin membeli silahkan ketik 0");

    printf ("\n1. Ayam bakar\t\t Rp. 10000 \t : ");
    scanf ("%i",&j_bakar);
                                                
    printf ("2. Ayam goreng\t\t Rp. 8000 \t : ");
    scanf ("%i",&j_goreng);

    printf ("3. Bebek goreng\t\t Rp. 17000 \t : ");
    scanf ("%i",&j_bebek);

    printf ("4. Bebek bakar\t\t Rp. 20000 \t : ");
    scanf ("%i",&j_bbakar);

    printf ("5. Es teh\t\t Rp. 3000 \t : ");
    scanf ("%i",&j_esteh);

    total_j_bakar = 10000 * j_bakar;
    total_j_goreng = 8000 * j_goreng;
    total_j_bebek_= 17000 * j_bebek;
    total_bbakar = 20000 * j_bbakar;
    total_j_esteh = 3000 * j_esteh;

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
    printf ("\njika pembayaran mu +,maka kamu memiliki kemablian sebesar nominal diatas\n");
    printf ("Tapi,jika pembayaranmu - maka kamu mempunyai utang");
    printf ("\n-----------------------------------------------------\n");

    
    return 0;
}