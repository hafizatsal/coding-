#include <ncurses/ncurses.h>
#include <windows.h>

int main()
{
	initscr();
	while(true){
	clear();
	mvprintw(1, 7, "| I |");
	refresh();
	Sleep(500);
	
	mvprintw(2, 7, "|   |");
	refresh();
	Sleep(500);
	 
	mvprintw(3, 7, "| W |");
	refresh();
	Sleep(500);
	
	mvprintw(4, 7, "| A |");
	refresh();
	Sleep(500);
	
	mvprintw(5, 7, "| N |");
	refresh();
	Sleep(500);
	
	mvprintw(6, 7, "| N |");
	refresh();
	Sleep(500);
	
	mvprintw(7, 7, "| A |");
	refresh();
	Sleep(500);
	
	mvprintw(8, 7, "|   |");
	refresh();
	Sleep(500);
	
	mvprintw(3, 14, "| T |");
	refresh();
	Sleep(500);
	
	mvprintw(5, 14, "| O |");
	refresh();
	Sleep(500);
	
	mvprintw(2, 21, "| S |");
	refresh();
	Sleep(500);
	 
	mvprintw(4, 21, "| A |");
	refresh();
	Sleep(500);
	
	mvprintw(6, 21, "| Y |");
	refresh();
	Sleep(500);
	
	mvprintw(10, 14, "| L O V E |");
	refresh();
	Sleep(500);
	
	mvprintw(13, 15, "| Y O U |");
	refresh();
	Sleep(500);
	
}
    getch();
    endwin();

}

	

