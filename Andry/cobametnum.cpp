#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

int main()
{
    char menu;
    int bil_pertama, bil_kedua, hasil, i;
    menu:
    printf("                           ====================================\n");
    printf("                                     PROGRAM ARITMATIKA\n");
    printf("                           ====================================\n\n");
    printf("NAMA : Andry Christian SIE-A\n");
    printf("NIM : 3411151043\n\n");
    printf(" MENU :\n");
    printf(" \t[1] PENJUMLAHAN\n");
    printf(" \t[2] PENGURANGAN\n");
    printf(" \t[3] PERKALIAN\n");
    printf(" \t[4] PEMBAGIAN\n");
    printf(" \t[5] PERPANGKATAN\n");
    printf(" \t[6] FUNGSI\n");
    printf(" \t[7] KELUAR\n");
    printf(" PILIH MENU : ");
    scanf("%c",&menu);
    system("cls");
    if(menu == '1')
    {
        printf("\n [1] PENJUMLAHAN :\n");
        printf("     -------------------------------\n");
        printf("     Masukan bilangan pertama : ");
        scanf("%d",&bil_pertama);
        printf("     Masukan bilangan kedua   : ");
        scanf("%d",&bil_kedua);
        hasil = bil_pertama + bil_kedua;
        printf("     ------------------------------- +\n");
        printf("     Hasil                    : %d", hasil);
        getch();
	    system("cls");
	    goto menu;
    }
    else if(menu == '2')
    {
        printf("\n [2] PENGURANGAN :\n");
        printf("     -------------------------------\n");
        printf("     Masukan bilangan pertama : ");
        scanf("%d",&bil_pertama);
        printf("     Masukan bilangan kedua   : ");
        scanf("%d",&bil_kedua);
        hasil = bil_pertama - bil_kedua;
        printf("     ------------------------------- -\n");
        printf("     Hasil                    : %d", hasil);
        getch();
	    system("cls");
		goto menu;
    }
    else if(menu == '3')
    {
        printf("\n [3] PERKALIAN :\n");
        printf("     -------------------------------\n");
        printf("     Masukan bilangan pertama : ");
        scanf("%d",&bil_pertama);
        printf("     Masukan bilangan kedua   : ");
        scanf("%d",&bil_kedua);
        hasil = bil_pertama * bil_kedua;
        printf("     ------------------------------- x\n");
        printf("     Hasil                    : %d", hasil);
        getch();
		system("cls");
	    goto menu;
    }
    else if(menu == '4')
    {
        printf("\n [4] PEMBAGIAN :\n");
        printf("     -------------------------------\n");
        printf("     Masukan Bilangan Pertama : ");
        scanf("%d",&bil_pertama);
        printf("     Masukan Bilangan Kedua   : ");
        scanf("%d",&bil_kedua);
        hasil = bil_pertama / bil_kedua;
        printf("     ------------------------------- :\n");
        printf("     Hasil                    : %d", hasil);
        getch();
		system("cls");
		goto menu;
    } else if (menu == '5')
    {
     	printf("\n [5] PERPANGKATAN :\n");
	    printf("     -------------------------------\n");
	    printf("Masukan Bilangan Pertama : ");
        scanf("%d",&bil_pertama);
        printf("Masukan Nilai Pangkat   : ");
        scanf("%d",&bil_kedua);
		printf("\n");
		hasil = pow(bil_pertama,bil_kedua);
		printf("%d ^ %d= %d", bil_pertama, bil_kedua,hasil);
		
		getch();
		system("cls");
		goto menu; 
	}

    else if(menu == '6')
    {
    	printf("\n [6] HITUNG F(X)");
	    printf("\n---------------------------------------------\n");
		printf("Masukan Bilangan x : ");
        scanf("%d",&bil_pertama);
        printf("Masukan Bilangan y : ");
        scanf("%d",&bil_kedua);
        printf("\n---------------------------------------------\n");
        printf("Syarat %d >= %d <= %d \n",bil_pertama , bil_pertama, bil_kedua);
        printf ("Berapa hasilnya jika f(x) = 2x^2 - 3x + 1 ? \n");
                            
			for (i=bil_pertama;i<=bil_kedua;i++){
			    printf ("\nJika x = %d \n", i);
	            hasil=((2 * (pow(i,2)) - ( 3 * i) + 1));
	            printf("\nf(%d)=2(%d)^2 - 3(%d) + 1= %d", i, i, i, hasil);
             printf("\n---------------------------------------------\n");
			}
						    
			getch();
			system("cls");
			goto menu;
	}else if (menu == '7'){
						    
      printf("APAKAH ANDA YAKIN INGIN KELUAR ?");
      printf("\n\n ====================================\n");
    
    }
    getch();
    return 0;
}
