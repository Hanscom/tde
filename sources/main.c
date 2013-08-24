#include "gui/init.h"

int     main(int ac, char **av)
{
	GtkWidget	*MainWindow;
	
	MainWindow = 0;
    gui_init(ac, av, &MainWindow, "TDE - Trash Data Eraser");
	gui_start(&MainWindow);
    return (0);
}
