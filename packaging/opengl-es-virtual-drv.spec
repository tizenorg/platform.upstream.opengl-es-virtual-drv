Name :		opengl-es-virtual-drv
Summary :	OpenGL ES Virtual Driver
Version :	0.1.6
Release :	01
AutoReq:	0
Group :		System/Libraries
License :	Apache-2.0
Source0:	%{name}-%{version}.tar.gz
Provides:	opengl-es-drv
Conflicts:	opengl-es-mali400mp
Conflicts:	opengl-es-omap4430-sgx540
Conflicts:	opengl-es-sgx540

%description
The OpenGL ES Virtual Library provides the following capabilities
- EGL v1.0, v1.1, v1.2, v1.3, v1.4, v1.5 (virtual)
- OpenGL ES v1.1, v2.0, v3.0, v3.1 (virtual)

The contained EGL and OpenGL ES libraries are dummies and must be replaced
with appropriate GPU driver prior to use.
The relevant shared library files should "ONLY" be used to resolve dependencies
during build/compile time.

%package devel
Summary:	Development files for OpenGL ES library
Group:		System/Libraries
Requires:	%{name} = %{version}-%{release}
Provides:	opengl-es-drv-devel
Conflicts:	opengl-es-mali400mp-devel
Conflicts:	opengl-es-omap4430-sgx540-devel
Conflicts:	opengl-es-sgx540-devel

%description devel
This package contains the development libraries, header files needed by
programs that needs to be compiled with OpenGL ES dependency.

%prep
%setup -q -n %{name}-%{version}

%build
export CFLAGS+=" -Wcast-align -Wcast-qual "
export CFLAGS+=" -Wextra -Wno-array-bounds "
export CFLAGS+=" -Wno-ignored-qualifiers -Wno-unused-parameter -Wshadow "
export CFLAGS+=" -Wwrite-strings -Wswitch-default "
make clean
make

%install
mkdir -p %{buildroot}%{_includedir}
mkdir -p %{buildroot}%{_libdir}/pkgconfig
mkdir -p %{buildroot}/usr/share/license
cp LICENSE %{buildroot}/usr/share/license/%{name}

%makeinstall

ln -sf libEGL.so.1.5 %{buildroot}%{_libdir}/libEGL.so
ln -sf libEGL.so.1.5 %{buildroot}%{_libdir}/libEGL.so.1
ln -sf libGLESv1_CM.so.1.1 %{buildroot}%{_libdir}/libGLES_CM.so
ln -sf libGLESv1_CM.so.1.1 %{buildroot}%{_libdir}/libGLES_CM.so.1
ln -sf libGLESv1_CM.so.1.1 %{buildroot}%{_libdir}/libGLESv1_CM.so
ln -sf libGLESv1_CM.so.1.1 %{buildroot}%{_libdir}/libGLESv1_CM.so.1
ln -sf libGLESv2.so.2.0 %{buildroot}%{_libdir}/libGLESv2.so
ln -sf libGLESv2.so.2.0 %{buildroot}%{_libdir}/libGLESv2.so.2
ln -sf libGLESv3.so.3.1 %{buildroot}%{_libdir}/libGLESv3.so
ln -sf libGLESv3.so.3.1 %{buildroot}%{_libdir}/libGLESv3.so.3

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files
%manifest packaging/opengl-es-virtual-drv.manifest
%defattr(-,root,root,-)
%{_libdir}/libEGL.so
%{_libdir}/libEGL.so.1
%{_libdir}/libEGL.so.1.5
%{_libdir}/libGLES_CM.so
%{_libdir}/libGLES_CM.so.1
%{_libdir}/libGLESv1_CM.so
%{_libdir}/libGLESv1_CM.so.1
%{_libdir}/libGLESv1_CM.so.1.1
%{_libdir}/libGLESv2.so
%{_libdir}/libGLESv2.so.2
%{_libdir}/libGLESv2.so.2.0
%{_libdir}/libGLESv3.so
%{_libdir}/libGLESv3.so.3
%{_libdir}/libGLESv3.so.3.1
/usr/share/license/%{name}

%files devel
%defattr(-,root,root,-)
%{_includedir}/EGL/egl.h
%{_includedir}/EGL/eglext.h
%{_includedir}/EGL/eglplatform.h
%{_includedir}/GLES/egl.h
%{_includedir}/GLES/gl.h
%{_includedir}/GLES/glext.h
%{_includedir}/GLES/glplatform.h
%{_includedir}/GLES2/gl2.h
%{_includedir}/GLES2/gl2ext.h
%{_includedir}/GLES2/gl2platform.h
%{_includedir}/GLES3/gl3.h
%{_includedir}/GLES3/gl31.h
%{_includedir}/GLES3/gl3platform.h
%{_includedir}/KHR/khrplatform.h
%{_libdir}/pkgconfig/egl.pc
%{_libdir}/pkgconfig/gles11.pc
%{_libdir}/pkgconfig/glesv1_cm.pc
%{_libdir}/pkgconfig/gles20.pc
%{_libdir}/pkgconfig/glesv2.pc
%{_libdir}/pkgconfig/gles30.pc
%{_libdir}/pkgconfig/glesv3.pc
