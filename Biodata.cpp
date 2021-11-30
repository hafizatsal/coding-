#include <ncurses/ncurses.h>
using namespace std;

int main(){
	initscr();
	char Nama[50],Alamat[75],Hobi[100];
	
	printw("-------------------------------------------------------------\n");
	printw("-----------------PLEASE INPUT YOUR BIODATA-------------------\n");
	printw("-------------------------------------------------------------\n");
	printw("\n");
	getstr(Nama);
	getstr(Alamat);
	getstr(Hobi);
	printw("\n\n\n");
	printw("-------------------------------------------------------------\n");
	printw("-------------------------YOUR BIODATA------------------------\n");
	printw("-------------------------------------------------------------\n");
	printw("\n");
	printw("Nama   : %s \n", Nama);
	printw("Alamat : %s \n", Alamat);
	printw("Hobi   : %s \n", Hobi);
	
	getch();
	refresh();
	endwin();
	return 0;
}
