#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main(int argc, char *argv[])
{
  textbackground(BLACK);
  clrscr();
  
  //identifier
  char nama [30],ket[40],index,h;
  float absen,tugas,uts,uas,n1,n2,n3,n4,na;
  
  //input
  kembali:
  textcolor(WHITE);
  gotoxy(25,1); printf("Program Menghitung Nilai Akhir\n");
  gotoxy(25,2); printf("==============================\n\n");
  printf("Masukkan nama Anda \t= "); fflush(stdin); gets(nama);
  printf("Masukkan nilai Absen \t= "); scanf("%f",&absen);
  printf("Masukkan nilai Tugas \t= "); scanf("%f",&tugas);
  printf("Masukkan nilai UTS \t= "); scanf("%f",&uts);
  printf("Masukkan nilai UAS \t= "); scanf("%f",&uas);
  
  //proses
  n1 = 0.1*absen;
  n2 = 0.2*tugas;
  n3 = 0.3*uts;
  n4 = 0.4*uas;
  
  na = n1+n2+n3+n4;
  
  if((na<=100)&&(na>=80))
  {
    index = 'A';
    strcpy(ket,"Anda Lulus Cumlaude");
  }
  else if ((na<80)&&(na>=68))
  {
    index = 'B';
    strcpy(ket,"Anda Lulus Baik");  
  }
  else if ((na<68)&&(na>=56))
  {
    index = 'C';
    strcpy(ket,"Anda Lulus Cukup"); 
  }
  else if ((na<56)&&(na>=45))
  {
    index = 'D';
    strcpy(ket,"Anda Tidak Lulus");
  }
  else
  {
    index = 'E';
    strcpy(ket,"Anda Gagal");
  }
  
  //output
  textcolor(GREEN);
  printf("=========================================================== \n");
  
  textcolor(WHITE); 
  printf("Mahasiswa yang bernama "); 
  
  textcolor(RED); 
  printf("%s ",nama); 
  
  textcolor(WHITE);
  printf("Dengan Nilai \n");
  printf("Nilai Absen \t %.0f*10%s \t: %.2f \n",absen,"%",n1);
  printf("Nilai Tugas \t %.0f*20%s \t: %.2f \n",tugas,"%",n2);
  printf("Nilai UTS \t %.0f*30%s \t: %.2f \n",uts,"%",n3);
  printf("Nilai UAS \t %.0f*40%s \t: %.2f \n",uas,"%",n4);
  
  textcolor(GREEN);
  printf("=========================================================== \n");
  
  textcolor(WHITE); printf("Nama Mahasiswa : "); 
  textcolor(RED); printf("%s ",nama); 
  textcolor(WHITE); printf("Memperoleh Nilai Akhir ");
  textcolor(RED); printf("%.2f \n",na);
  textcolor(WHITE); printf("Index Nilai : "); 
  textcolor(RED); printf("%c ",index);
  textcolor(WHITE); printf("Keterangan : ");
  textcolor(RED); printf("%s \n\n",ket);
  textcolor(WHITE);
  printf("Tekan h untuk mengulang perhitungan "); fflush(stdin); scanf("%c",&h);
  
  if(h == 'h')
  {
    clrscr();
    goto kembali;
  }
  
  //system("PAUSE");	
  return 0;
}
