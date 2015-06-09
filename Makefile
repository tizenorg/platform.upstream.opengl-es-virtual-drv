EGL_ABI = libEGL.so.1
EGL_FNAME = $(EGL_ABI).5
GLES11_ABI = libGLESv1_CM.so
GLES11_FNAME = $(GLES11_ABI).1.1
GLES20_ABI = libGLESv2.so.2
GLES20_FNAME = $(GLES20_ABI).0
GLES31_ABI = libGLESv3.so.3
GLES31_FNAME = $(GLES31_ABI).1

CC = gcc
CFLAGS += -fPIC -I./$(SRC_DIR)/include/

SRC_DIR = src
SRCS += \
		egl.c \
		gles1.c \
		gles2.c \
		gles3.c

%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

OBJS := $(SRCS:.c=.o)

$(EGL_FNAME): egl.o
	$(CC) -shared -Wl,-soname,$(EGL_ABI) -o $@ $<

$(GLES11_FNAME): gles1.o
	$(CC) -shared -Wl,-soname,$(GLES11_ABI) -o $@ $<

$(GLES20_FNAME): gles2.o
	$(CC) -shared -Wl,-soname,$(GLES20_ABI) -o $@ $<

$(GLES31_FNAME): gles3.o
	$(CC) -shared -Wl,-soname,$(GLES31_ABI) -o $@ $<

.DEFAULT_GOAL = all
all: $(EGL_FNAME) $(GLES11_FNAME) $(GLES20_FNAME) $(GLES31_FNAME)

clean:
	@echo "cleaning up..."
	@rm -fR $(OBJS)
	@rm -fR $(EGL_FNAME) $(GLES11_FNAME) $(GLES20_FNAME) $(GLES31_FNAME)
	@echo "done"

install: all
	@echo "installing EGL..."
	@mkdir -p $(includedir)/EGL
	@cp $(EGL_FNAME) $(libdir)/
	@cp $(SRC_DIR)/include/EGL/egl.h $(includedir)/EGL/
	@cp $(SRC_DIR)/include/EGL/eglext.h $(includedir)/EGL/
	@cp $(SRC_DIR)/include/EGL/eglplatform.h $(includedir)/EGL/
	@echo "installing GLESv1..."
	@mkdir -p $(includedir)/GLES
	@cp $(GLES11_FNAME) $(libdir)/
	@cp $(SRC_DIR)/include/GLES/egl.h $(includedir)/GLES/
	@cp $(SRC_DIR)/include/GLES/gl.h $(includedir)/GLES/
	@cp $(SRC_DIR)/include/GLES/glext.h $(includedir)/GLES/
	@cp $(SRC_DIR)/include/GLES/glplatform.h $(includedir)/GLES/
	@echo "installing GLESv2..."
	@mkdir -p $(includedir)/GLES2
	@cp $(GLES20_FNAME) $(libdir)/
	@cp $(SRC_DIR)/include/GLES2/gl2.h $(includedir)/GLES2/
	@cp $(SRC_DIR)/include/GLES2/gl2ext.h $(includedir)/GLES2/
	@cp $(SRC_DIR)/include/GLES2/gl2platform.h $(includedir)/GLES2/
	@echo "installing GLESv3..."
	@mkdir -p $(includedir)/GLES3
	@cp $(GLES31_FNAME) $(libdir)/
	@cp $(SRC_DIR)/include/GLES3/gl3.h $(includedir)/GLES3/
	@cp $(SRC_DIR)/include/GLES3/gl31.h $(includedir)/GLES3/
	@cp $(SRC_DIR)/include/GLES3/gl3platform.h $(includedir)/GLES3/
	@echo "installing KHR..."
	@mkdir -p $(includedir)/KHR
	@cp $(SRC_DIR)/include/KHR/khrplatform.h $(includedir)/KHR/
	@echo "installing pkgconfig..."
	@mkdir -p $(libdir)/pkgconfig
	@cp pkgconfig/egl.pc $(libdir)/pkgconfig/
	@cp pkgconfig/gles11.pc $(libdir)/pkgconfig/
	@cp pkgconfig/glesv1_cm.pc $(libdir)/pkgconfig/
	@cp pkgconfig/gles20.pc $(libdir)/pkgconfig/
	@cp pkgconfig/glesv2.pc $(libdir)/pkgconfig/
	@cp pkgconfig/gles30.pc $(libdir)/pkgconfig/
	@cp pkgconfig/glesv3.pc $(libdir)/pkgconfig/
	@echo "install completed."

uninstall:
	@echo "uninstalling..."
	@rm -fr $(includedir)/EGL/
	@rm -fr $(libdir)/$(EGL_FNAME)
	@rm -fr $(includedir)/GLES/
	@rm -fr $(libdir)/$(GLES11_FNAME)
	@rm -fr $(includedir)/GLES2/
	@rm -fr $(libdir)/$(GLES20_FNAME)
	@rm -fr $(includedir)/GLES3/
	@rm -fr $(libdir)/$(GLES31_FNAME)
	@rm -fr $(includedir)/KHR/
	@rm -fr $(libdir)/pkgconfig/gles11.pc
	@rm -fr $(libdir)/pkgconfig/glesv1_cm.pc
	@rm -fr $(libdir)/pkgconfig/gles20.pc
	@rm -fr $(libdir)/pkgconfig/glesv2.pc
	@rm -fr $(libdir)/pkgconfig/gles30.pc
	@rm -fr $(libdir)/pkgconfig/gles31.pc
	@echo "uninstall completed"
