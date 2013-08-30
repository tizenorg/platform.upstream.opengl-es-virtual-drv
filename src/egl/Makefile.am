#
# created by Gwanglim Lee <gl77.lee@samsung.com>
#

lib_LTLIBRARIES = libEGL.la
libEGL_la_CPPFLAGS = -I$(srcdir)/../include
libEGL_la_CFLAGS =
libEGL_la_LIBADD =
libEGL_la_LDFLAGS = -avoid-version
libEGL_la_SOURCES = egl.c

libEGL_la_HEADERS = \
					../include/EGL/egl.h \
					../include/EGL/eglplatform.h \
					../include/EGL/eglext.h

libEGL_ladir = $(includedir)/EGL

MAINTAINERCLEANFILES = Makefile.in
