#include <gtk/gtk.h>
#include "gui/init.h"

/*
* Initials functions for GUI system. 
* Like how to show window, create buttons of differents types, etc.
*/

void		callback(GtkWidget *widget, gpointer data)
{
	widget = widget;
	g_print("%s was pressed", (char *)data);
}

void		gui_init(int ac, char **av, GtkWidget **window, char *label)
{
	GtkWidget	*table;
	GtkWidget	*frame;
	GtkWidget	*body;

	gtk_init(&ac, &av);

	*window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(*window), "delete-event", G_CALLBACK(gtk_main_quit), G_OBJECT(*window));

	gtk_window_set_title(GTK_WINDOW(*window), label);
	gtk_window_set_default_size(GTK_WINDOW(*window), 350, 400);

	table = gtk_table_new(1, 1, TRUE);
	gtk_container_add(GTK_CONTAINER(*window), table);

	frame = gtk_frame_new("Options");
	body  = gtk_label_new("Hey!");
	gtk_label_set_justify(GTK_LABEL(body), GTK_JUSTIFY_LEFT);
	gtk_container_add(GTK_CONTAINER(frame), body);
	gtk_table_attach_defaults(GTK_TABLE(table), frame, 0, 1, 0, 1);
}

void		gui_start(GtkWidget **window)
{
	gtk_widget_show_all(*window);
	gtk_main();
}

