#ifndef XMMS_UTIL_H
#define XMMS_UTIL_H
#include <gtk/gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

	GtkWidget *xmms_show_message(gchar * title, gchar * text, gchar * button_text, gboolean modal, GtkSignalFunc button_action, gpointer action_data);
	gboolean xmms_check_realtime_priority(void);
	void xmms_usleep(gint usec);

#ifdef __cplusplus
}
#endif
	
#endif
