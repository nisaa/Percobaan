#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

void tukarbilangan(int A_534, int B_534);

int main(int argc, char *argv[])
{
  int A_534, B_534;
  
  gotoxy(26,1); 
  textcolor(GREEN);
  printf("Menukar 2 buah variabel");
  gotoxy(26,2); 
  printf("======================= \n\n");
  
  textcolor(WHITE);
  A_534 = 2;
  B_534 = 5;
  
  printf("Nilai bilangan A \t: %i\n",A_534);
  printf("Nilai bilangan B \t: %i\n",B_534);
  textcolor(YELLOW);
  printf("\nHasil pertukaran nilai A dan B adalah \n\n");
  
  tukarbilangan(A_534, B_534); 
  
  system("PAUSE");	
  return 0;
}
void tukarbilangan(int A_534, int B_534)
{
  int temp_534;
 
  temp_534 = A_534;
  A_534 = B_534;
  B_534 = temp_534;   
  
  textcolor(WHITE);
  printf("Nilai A \t: %i \n",A_534);
  printf("Nilai B \t: %i \n",B_534);
  printf("\n");
}
