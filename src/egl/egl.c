/*
 * opengl-es-virtual-drv
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Minsu Han <minsu81.han@samsung.com>
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and 
 * limitations under the License.
 *
 */

#include "EGL/egl.h"
//#include "GLES/egl_gles1.h"
//#include "GLES2/egl_gles2.h"

 

typedef void (*__egl_funcptr)();

typedef struct egl_ExtProcedure
{
	const char *pProcname;
	__egl_funcptr pfnProc;
} EGL_ExtProcedures;

EGL_ExtProcedures eglExtProcedures[] =
	{
#ifdef EGL_KHR_lock_surface
		  {"eglLockSurfaceKHR", (__egl_funcptr)eglLockSurfaceKHR},
		  {"eglUnlockSurfaceKHR", (__egl_funcptr)eglUnlockSurfaceKHR},
#endif  
#if defined(EGL_KHR_image)
		  {"eglCreateImageKHR",             (__egl_funcptr)eglCreateImageKHR},
		  {"eglDestroyImageKHR",            (__egl_funcptr)eglDestroyImageKHR},
#endif /* defined(EGL_KHR_image) */

 
#if defined(EGL_EXTENSION_KHR_FENCE_SYNC) || defined(EGL_KHR_reusable_sync)
		  {"eglCreateSyncKHR",              (__egl_funcptr)eglCreateSyncKHR},
		  {"eglDestroySyncKHR",             (__egl_funcptr)eglDestroySyncKHR},
		  {"eglClientWaitSyncKHR",          (__egl_funcptr)eglClientWaitSyncKHR},
#if defined(EGL_KHR_reusable_sync)
		  {"eglSignalSyncKHR",              (__egl_funcptr)eglSignalSyncKHR},
#endif /* defined(EGL_KHR_reusable_sync) */
		  {"eglGetSyncAttribKHR",           (__egl_funcptr)eglGetSyncAttribKHR},
#endif /* defined(EGL_EXTENSION_KHR_FENCE_SYNC) || defined(EGL_KHR_reusable_sync) */

#ifdef EGL_NV_sync
 		  {"eglCreateFenceSyncNV",              (__egl_funcptr)eglCreateFenceSyncNV},
		  {"eglDestroySyncNV",             (__egl_funcptr)eglDestroySyncNV},
		  {"eglFenceNV",          (__egl_funcptr)eglFenceNV},
		  {"eglClientWaitSyncNV",              (__egl_funcptr)eglClientWaitSyncNV},
		  {"eglSignalSyncNV",             (__egl_funcptr)eglSignalSyncNV},
		  {"eglGetSyncAttribNV",          (__egl_funcptr)eglGetSyncAttribNV}, 
 
#endif
 

#ifdef EGL_HI_clientpixmap
 		  {"eglCreatePixmapSurfaceHI",          (__egl_funcptr)eglCreatePixmapSurfaceHI}, 
#endif	 


#ifdef EGL_MESA_drm_image
		  {"eglCreateDRMImageMESA",             (__egl_funcptr)eglCreateDRMImageMESA},
		  {"eglExportDRMImageMESA",          (__egl_funcptr)eglExportDRMImageMESA}, 
#endif


#ifdef EGL_NV_post_sub_buffer 
		  {"eglPostSubBufferNV",             (__egl_funcptr)eglPostSubBufferNV},
 
#endif


#ifdef EGL_ANGLE_query_surface_pointer
		  {"eglQuerySurfacePointerANGLE",             (__egl_funcptr)eglQuerySurfacePointerANGLE},
#endif


#ifdef EGL_SEC_client_pixmap
		  {"eglCreateClientPixmapFromClientBufferSEC",             (__egl_funcptr)eglCreateClientPixmapFromClientBufferSEC},
#endif

#ifdef EGL_NV_system_time
		  {"eglGetSystemTimeFrequencyNV",             (__egl_funcptr)eglGetSystemTimeFrequencyNV},
		  {"eglGetSystemTimeNV",          (__egl_funcptr)eglGetSystemTimeNV}, 
#endif
 

#if defined(EGL_KHR_image) && defined(EGL_SEC_image_map)
		  {"eglMapImageSEC", (__egl_funcptr)eglMapImageSEC},
		  {"eglUnmapImageSEC", (__egl_funcptr)eglUnmapImageSEC},
		  {"eglGetImageAttribSEC", (__egl_funcptr)eglGetImageAttribSEC},
#endif /* defined(EGL_KHR_image) && defined(EGL_SEC_image_map) */

		  {0,0}
	  };

EGLint eglGetError(void) { return 0; }
EGLDisplay eglGetDisplay(EGLNativeDisplayType display_id) { return 0; }
EGLBoolean eglInitialize(EGLDisplay dpy, EGLint *major, EGLint *minor) { return 0; }
EGLBoolean eglTerminate(EGLDisplay dpy) { return 0; }
const char * eglQueryString(EGLDisplay dpy, EGLint name) { return 0; }
EGLBoolean eglGetConfigs(EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config) { return 0; }
EGLBoolean eglChooseConfig(EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config) { return 0; }
EGLBoolean eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value) { return 0; }
EGLSurface eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list) { return 0; }
EGLSurface eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig config, const EGLint *attrib_list) { return 0; }
EGLSurface eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list) { return 0; }
EGLBoolean eglDestroySurface(EGLDisplay dpy, EGLSurface surface) { return 0; }
EGLBoolean eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value) { return 0; }
EGLBoolean eglBindAPI(EGLenum api) { return 0; }
EGLenum eglQueryAPI(void) { return 0; }
EGLBoolean eglWaitClient(void) { return 0; }
EGLBoolean eglReleaseThread(void) { return 0; }
EGLSurface eglCreatePbufferFromClientBuffer( EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list) { return 0; }
EGLBoolean eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value) { return 0; }
EGLBoolean eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer) { return 0; }
EGLBoolean eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer) { return 0; }
EGLBoolean eglSwapInterval(EGLDisplay dpy, EGLint interval) { return 0; }
EGLContext eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint *attrib_list) { return 0; }
EGLBoolean eglDestroyContext(EGLDisplay dpy, EGLContext ctx) { return 0; }
EGLBoolean eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx) { return 0; }
EGLContext eglGetCurrentContext(void) { return 0; }
EGLSurface eglGetCurrentSurface(EGLint readdraw) { return 0; }
EGLDisplay eglGetCurrentDisplay(void) { return 0; }
EGLBoolean eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint *value) { return 0; }
EGLBoolean eglWaitGL(void) { return 0; }
EGLBoolean eglWaitNative(EGLint engine) { return 0; }
EGLBoolean eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) { return 0; }
EGLBoolean eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target) { return 0; }
__eglMustCastToProperFunctionPointerType eglGetProcAddress(const char *procname) 
{
		EGLint uIndex;
                __eglMustCastToProperFunctionPointerType glesproc;		

		if (procname== 0)
		{
			return 0;
		}
		
		for (uIndex = 0 ; eglExtProcedures[uIndex].pProcname !=0 ; uIndex++)
		{
			if( strncmp( eglExtProcedures[uIndex].pProcname, procname, strlen( eglExtProcedures[uIndex].pProcname )+1 )==0 )
			{
				return eglExtProcedures[uIndex].pfnProc;
			}
		}


/*		//gles1
                glesproc = glGetGles1Proc( procname); 		
                if( glesproc != 0 )
                { 
                         return glesproc;
                }
		//gles2
                glesproc = glGetGles2Proc( procname);

                if( glesproc != 0 )
                { 
                         return glesproc;
                }*/
 return 0;
}

#ifdef EGL_KHR_lock_surface
 
EGLAPI EGLBoolean EGLAPIENTRY eglLockSurfaceKHR (EGLDisplay display, EGLSurface surface, const EGLint *attrib_list) { return 0; }
EGLAPI EGLBoolean EGLAPIENTRY eglUnlockSurfaceKHR (EGLDisplay display, EGLSurface surface){ return 0; }
 
#endif

#ifdef EGL_KHR_image
 
EGLAPI EGLImageKHR EGLAPIENTRY eglCreateImageKHR (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint *attrib_list){ return 0; }
EGLAPI EGLBoolean EGLAPIENTRY eglDestroyImageKHR (EGLDisplay dpy, EGLImageKHR image){ return 0; }
 
#endif


#ifdef EGL_KHR_reusable_sync
 
EGLAPI EGLSyncKHR EGLAPIENTRY eglCreateSyncKHR(EGLDisplay dpy, EGLenum type, const EGLint *attrib_list){ return 0; }
EGLAPI EGLBoolean EGLAPIENTRY eglDestroySyncKHR(EGLDisplay dpy, EGLSyncKHR sync){ return 0; }
EGLAPI EGLint EGLAPIENTRY eglClientWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout){ return 0; }
EGLAPI EGLBoolean EGLAPIENTRY eglSignalSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode){ return 0; }
EGLAPI EGLBoolean EGLAPIENTRY eglGetSyncAttribKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint *value){ return 0; }
 
#endif

#ifdef EGL_NV_sync
 
EGLSyncNV eglCreateFenceSyncNV (EGLDisplay dpy, EGLenum condition, const EGLint *attrib_list){ return 0; }
EGLBoolean eglDestroySyncNV (EGLSyncNV sync){ return 0; }
EGLBoolean eglFenceNV (EGLSyncNV sync){ return 0; }
EGLint eglClientWaitSyncNV (EGLSyncNV sync, EGLint flags, EGLTimeNV timeout){ return 0; }
EGLBoolean eglSignalSyncNV (EGLSyncNV sync, EGLenum mode){ return 0; }
EGLBoolean eglGetSyncAttribNV (EGLSyncNV sync, EGLint attribute, EGLint *value){ return 0; }
 
#endif




#ifdef EGL_HI_clientpixmap
 
EGLAPI EGLSurface EGLAPIENTRY eglCreatePixmapSurfaceHI(EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI* pixmap){ return 0; }

#endif	/* EGL_HI_clientpixmap */


#ifdef EGL_MESA_drm_image

EGLAPI EGLImageKHR EGLAPIENTRY eglCreateDRMImageMESA (EGLDisplay dpy, const EGLint *attrib_list){ return 0; }
EGLAPI EGLBoolean EGLAPIENTRY eglExportDRMImageMESA (EGLDisplay dpy, EGLImageKHR image, EGLint *name, EGLint *handle, EGLint *stride){ return 0; }
#endif


#ifdef EGL_NV_post_sub_buffer


EGLAPI EGLBoolean EGLAPIENTRY eglPostSubBufferNV (EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height){ return 0; }

#endif


#ifdef EGL_ANGLE_query_surface_pointer

EGLAPI EGLBoolean eglQuerySurfacePointerANGLE(EGLDisplay dpy, EGLSurface surface, EGLint attribute, void **value){ return 0; }

#endif


#ifdef EGL_SEC_client_pixmap

EGLAPI EGLSurface eglCreateClientPixmapFromClientBufferSEC (EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list){ return 0; }

#endif

#ifdef EGL_NV_system_time
#ifdef EGL_SEC_image_map

EGLAPI void * EGLAPIENTRY eglMapImageSEC (EGLDisplay dpy, EGLImageKHR image){ return 0; }
EGLAPI EGLBoolean EGLAPIENTRY eglUnmapImageSEC (EGLDisplay dpy, EGLImageKHR image){ return 0; }
EGLAPI EGLBoolean EGLAPIENTRY eglGetImageAttribSEC (EGLDisplay dpy, EGLImageKHR image, EGLint attribute, EGLint *value){ return 0; }

#endif

EGLAPI EGLuint64NV EGLAPIENTRY eglGetSystemTimeFrequencyNV(void){ return 0; }
EGLAPI EGLuint64NV EGLAPIENTRY eglGetSystemTimeNV(void){ return 0; }

#endif
 

