#ifndef XMMS_FORMATTER_H

#define XMMS_FORMATTER_H

typedef struct {
	gchar *values[256];
} Formatter;

Formatter *xmms_formatter_new(void);
void xmms_formatter_destroy(Formatter *formatter);
void xmms_formatter_associate(Formatter *formatter, guchar id, gchar *value);
void xmms_formatter_dissociate(Formatter *formatter, guchar id);
gchar *xmms_formatter_format(Formatter *formatter, gchar *format);

#endif

