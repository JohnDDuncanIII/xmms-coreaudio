osxsources = OSX.c \
OSX.h \
mixer.c \
about.c \
configure.c \
audio.c \
init.c \
convert.c \
dbconvert.c 

osxltlibs = libOSX.la
osxbuildsources = $(osxsources)

EXTRA_DIST = $(osxsources) dbaudiolib.h

lib_LTLIBRARIES = $(osxltlibs)

libdir = $(XMMS_OUTPUT_PLUGIN_DIR)

#libdir = $(plugindir)/$(OUTPUT_PLUGIN_DIR)

libOSX_la_LDFLAGS = @PLUGIN_LDFLAGS@ -flat_namespace -Wl,-framework,CoreAudio
libOSX_la_LIBADD = @GTK_LIBS@ 
libOSX_la_SOURCES= $(osxbuildsources)
INCLUDES = @GTK_CFLAGS@ @XMMS_CFLAGS@

