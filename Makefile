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
	@mkdir -p $(prefix)/include/EGL
	@cp $(EGL_FNAME) $(prefix)/lib/
	@cp $(SRC_DIR)/include/EGL/egl.h $(prefix)/include/EGL/
	@cp $(SRC_DIR)/include/EGL/eglext.h $(prefix)/include/EGL/
	@cp $(SRC_DIR)/include/EGL/eglplatform.h $(prefix)/include/EGL/
	@echo "installing GLESv1..."
	@mkdir -p $(prefix)/include/GLES
	@cp $(GLES11_FNAME) $(prefix)/lib/
	@cp $(SRC_DIR)/include/GLES/egl.h $(prefix)/include/GLES/
	@cp $(SRC_DIR)/include/GLES/gl.h $(prefix)/include/GLES/
	@cp $(SRC_DIR)/include/GLES/glext.h $(prefix)/include/GLES/
	@cp $(SRC_DIR)/include/GLES/glplatform.h $(prefix)/include/GLES/
	@echo "installing GLESv2..."
	@mkdir -p $(prefix)/include/GLES2
	@cp $(GLES20_FNAME) $(prefix)/lib/
	@cp $(SRC_DIR)/include/GLES2/gl2.h $(prefix)/include/GLES2/
	@cp $(SRC_DIR)/include/GLES2/gl2ext.h $(prefix)/include/GLES2/
	@cp $(SRC_DIR)/include/GLES2/gl2platform.h $(prefix)/include/GLES2/
	@echo "installing GLESv3..."
	@mkdir -p $(prefix)/include/GLES3
	@cp $(GLES31_FNAME) $(prefix)/lib/
	@cp $(SRC_DIR)/include/GLES3/gl3.h $(prefix)/include/GLES3/
	@cp $(SRC_DIR)/include/GLES3/gl31.h $(prefix)/include/GLES3/
	@cp $(SRC_DIR)/include/GLES3/gl3platform.h $(prefix)/include/GLES3/
	@echo "installing KHR..."
	@mkdir -p $(prefix)/include/KHR
	@cp $(SRC_DIR)/include/KHR/khrplatform.h $(prefix)/include/KHR/
	@echo "installing pkgconfig..."
	@mkdir -p $(prefix)/lib/pkgconfig
	@cp pkgconfig/gles11.pc $(prefix)/lib/pkgconfig/
	@cp pkgconfig/glesv1_cm.pc $(prefix)/lib/pkgconfig/
	@cp pkgconfig/gles20.pc $(prefix)/lib/pkgconfig/
	@cp pkgconfig/glesv2.pc $(prefix)/lib/pkgconfig/
	@cp pkgconfig/gles30.pc $(prefix)/lib/pkgconfig/
	@cp pkgconfig/gles31.pc $(prefix)/lib/pkgconfig/
	@echo "install completed."

uninstall:
	@echo "uninstalling..."
	@rm -fr $(prefix)/include/EGL/
	@rm -fr $(prefix)/lib/$(EGL_FNAME)
	@rm -fr $(prefix)/include/GLES/
	@rm -fr $(prefix)/lib/$(GLES11_FNAME)
	@rm -fr $(prefix)/include/GLES2/
	@rm -fr $(prefix)/lib/$(GLES20_FNAME)
	@rm -fr $(prefix)/include/GLES3/
	@rm -fr $(prefix)/lib/$(GLES31_FNAME)
	@rm -fr $(prefix)/include/KHR/
	@rm -fr $(prefix)/lib/pkgconfig/gles11.pc
	@rm -fr $(prefix)/lib/pkgconfig/glesv1_cm.pc
	@rm -fr $(prefix)/lib/pkgconfig/gles20.pc
	@rm -fr $(prefix)/lib/pkgconfig/glesv2.pc
	@rm -fr $(prefix)/lib/pkgconfig/gles30.pc
	@rm -fr $(prefix)/lib/pkgconfig/gles31.pc
	@echo "uninstall completed"
