/*
 * Copyright (C) 2001,  Espen Skoglund <esk@ira.uka.de>
 *                
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *                
 */
#ifndef XMMS_TITLESTRING_H
#define XMMS_TITLESTRING_H

#include <glib.h>
#include <gtk/gtk.h>


/*
 * Struct which is passed to xmms_get_titlestring().  An input struct
 * is allocated and initialized with XMMS_NEW_TITLEINPUT().  Before
 * passing the struct to xmms_get_titlestring() it should be filled
 * with appropriate field values.
 */

typedef struct
{
	gint	__size;		/* Set by XMMS_NEW_TITLEINPUT() */
	gint	__version;	/* Ditto */

	gchar	*performer;	/* %p */
	gchar	*album_name;	/* %a */
	gchar	*track_name;	/* %t */
	gint	 track_number;	/* %n */
	gint	 year;		/* %y */
	gchar	*date;		/* %d */
	gchar	*genre;		/* %g */
	gchar	*comment;	/* %c */
	gchar	*file_name;	/* %f */
	gchar	*file_ext;	/* %e */
	gchar	*file_path;	/* %F */
}
TitleInput;




/*
 * Using a __size field helps the library functions detect plugins
 * that use a possibly extended version of the struct.  The __version
 * field helps the library detect possible future incompatibilities in
 * the struct layout.
 */

#define XMMS_TITLEINPUT_SIZE	sizeof(TitleInput)
#define XMMS_TITLEINPUT_VERSION	(1)

#define XMMS_NEW_TITLEINPUT(input) G_STMT_START {	\
	input = g_malloc0(sizeof(TitleInput));		\
	input->__size = XMMS_TITLEINPUT_SIZE;		\
	input->__version = XMMS_TITLEINPUT_VERSION;	\
} G_STMT_END




#ifdef __cplusplus
extern "C" {
#endif

gchar *xmms_get_titlestring(gchar *fmt, TitleInput *input);
GtkWidget* xmms_titlestring_descriptions(char* tags, int rows);

#ifdef __cplusplus
};
#endif

#endif /* !XMMS_TITLESTRING_H */
