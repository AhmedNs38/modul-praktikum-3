#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
  int i=0;
  char teks[100];
  char c;
  cout<<"Masukkan teks dalam huruf kecil= "; gets(teks);
  getche();
  cout<<"\nTampilam teks dalam huruf kapital = ";
  while (teks[i])
   {
   c=teks[i];
   if (islower(c)) c=toupper(c);
   putchar (c);
   i++;
   }
getch();
}
