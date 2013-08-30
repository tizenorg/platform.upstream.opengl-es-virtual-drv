#
# created by Gwanglim Lee <gl77.lee@samsung.com>
#

lib_LTLIBRARIES = libGLESv2.la
libGLESv2_la_CPPFLAGS = -I$(srcdir)/../include
libGLESv2_la_CFLAGS =
libGLESv2_la_LIBADD =
libGLESv2_la_LDFLAGS = -avoid-version
libGLESv2_la_SOURCES = gles2.c

libGLESv2_la_HEADERS = \
					../include/GLES2/gl2.h \
					../include/GLES2/gl2platform.h \
					../include/GLES2/gl2ext.h

libGLESv2_ladir = $(includedir)/GLES2

MAINTAINERCLEANFILES = Makefile.in
