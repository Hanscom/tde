#ifndef INIT_H
# define INIT_H
# include <gtk/gtk.h>

void		callback(GtkWidget *, gpointer);
gboolean	delete_event(GtkWidget *, GdkEvent *, gpointer);

void		gui_init(int, char **, GtkWidget **, char *);
void		gui_start(GtkWidget **);

#endif
