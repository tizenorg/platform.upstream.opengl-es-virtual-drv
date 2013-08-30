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

#include "GLES/gl.h"

/* Available only in Common profile */
void glAlphaFunc (GLenum func, GLclampf ref) { return; }
void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) { return; }
void glClearDepthf (GLclampf depth) { return; }
void glClipPlanef (GLenum plane, const GLfloat *equation) { return; }
void glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { return; }
void glDepthRangef (GLclampf zNear, GLclampf zFar) { return; }
void glFogf (GLenum pname, GLfloat param) { return; }
void glFogfv (GLenum pname, const GLfloat *params) { return; }
void glFrustumf (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar) { return; }
void glGetClipPlanef (GLenum pname, GLfloat eqn[4]) { return; }
void glGetFloatv (GLenum pname, GLfloat *params) { return; }
void glGetLightfv (GLenum light, GLenum pname, GLfloat *params) { return; }
void glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params) { return; }
void glGetTexEnvfv (GLenum env, GLenum pname, GLfloat *params) { return; }
void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params) { return; }
void glLightModelf (GLenum pname, GLfloat param) { return; }
void glLightModelfv (GLenum pname, const GLfloat *params) { return; }
void glLightf (GLenum light, GLenum pname, GLfloat param) { return; }
void glLightfv (GLenum light, GLenum pname, const GLfloat *params) { return; }
void glLineWidth (GLfloat width) { return; }
void glLoadMatrixf (const GLfloat *m) { return; }
void glMaterialf (GLenum face, GLenum pname, GLfloat param) { return; }
void glMaterialfv (GLenum face, GLenum pname, const GLfloat *params) { return; }
void glMultMatrixf (const GLfloat *m) { return; }
void glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) { return; }
void glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz) { return; }
void glOrthof (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar) { return; }
void glPointParameterf (GLenum pname, GLfloat param) { return; }
void glPointParameterfv (GLenum pname, const GLfloat *params) { return; }
void glPointSize (GLfloat size) { return; }
void glPolygonOffset (GLfloat factor, GLfloat units) { return; }
void glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z) { return; }
void glScalef (GLfloat x, GLfloat y, GLfloat z) { return; }
void glTexEnvf (GLenum target, GLenum pname, GLfloat param) { return; }
void glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params) { return; }
void glTexParameterf (GLenum target, GLenum pname, GLfloat param) { return; }
void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params) { return; }
void glTranslatef (GLfloat x, GLfloat y, GLfloat z) { return; }

/* Available in both Common and Common-Lite profiles */
void glActiveTexture (GLenum texture) { return; }
void glAlphaFuncx (GLenum func, GLclampx ref) { return; }
void glBindBuffer (GLenum target, GLuint buffer) { return; }
void glBindTexture (GLenum target, GLuint texture) { return; }
void glBlendFunc (GLenum sfactor, GLenum dfactor) { return; }
void glBufferData (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage) { return; }
void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data) { return; }
void glClear (GLbitfield mask) { return; }
void glClearColorx (GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha) { return; }
void glClearDepthx (GLclampx depth) { return; }
void glClearStencil (GLint s) { return; }
void glClientActiveTexture (GLenum texture) { return; }
void glClipPlanex (GLenum plane, const GLfixed *equation) { return; }
void glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) { return; }
void glColor4x (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) { return; }
void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) { return; }
void glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) { return; }
void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data) { return; }
void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data) { return; }
void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { return; }
void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { return; }
void glCullFace (GLenum mode) { return; }
void glDeleteBuffers (GLsizei n, const GLuint *buffers) { return; }
void glDeleteTextures (GLsizei n, const GLuint *textures) { return; }
void glDepthFunc (GLenum func) { return; }
void glDepthMask (GLboolean flag) { return; }
void glDepthRangex (GLclampx zNear, GLclampx zFar) { return; }
void glDisable (GLenum cap) { return; }
void glDisableClientState (GLenum array) { return; }
void glDrawArrays (GLenum mode, GLint first, GLsizei count) { return; }
void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices) { return; }
void glEnable (GLenum cap) { return; }
void glEnableClientState (GLenum array) { return; }
void glFinish (void) { return; }
void glFlush (void) { return; }
void glFogx (GLenum pname, GLfixed param) { return; }
void glFogxv (GLenum pname, const GLfixed *params) { return; }
void glFrontFace (GLenum mode) { return; }
void glFrustumx (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar) { return; }
void glGetBooleanv (GLenum pname, GLboolean *params) { return; }
void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params) { return; }
void glGetClipPlanex (GLenum pname, GLfixed eqn[4]) { return; }
void glGenBuffers (GLsizei n, GLuint *buffers) { return; }
void glGenTextures (GLsizei n, GLuint *textures) { return; }
GLenum glGetError (void) { return 0; }
void glGetFixedv (GLenum pname, GLfixed *params) { return; }
void glGetIntegerv (GLenum pname, GLint *params) { return; }
void glGetLightxv (GLenum light, GLenum pname, GLfixed *params) { return; }
void glGetMaterialxv (GLenum face, GLenum pname, GLfixed *params) { return; }
void glGetPointerv (GLenum pname, GLvoid **params) { return; }
const GLubyte * GL_APIENTRY glGetString (GLenum name) { return 0; }
void glGetTexEnviv (GLenum env, GLenum pname, GLint *params) { return; }
void glGetTexEnvxv (GLenum env, GLenum pname, GLfixed *params) { return; }
void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params) { return; }
void glGetTexParameterxv (GLenum target, GLenum pname, GLfixed *params) { return; }
void glHint (GLenum target, GLenum mode) { return; }
GLboolean glIsBuffer (GLuint buffer) { return 0; }
GLboolean glIsEnabled (GLenum cap) { return 0; }
GLboolean glIsTexture (GLuint texture) { return 0; }
void glLightModelx (GLenum pname, GLfixed param) { return; }
void glLightModelxv (GLenum pname, const GLfixed *params) { return; }
void glLightx (GLenum light, GLenum pname, GLfixed param) { return; }
void glLightxv (GLenum light, GLenum pname, const GLfixed *params) { return; }
void glLineWidthx (GLfixed width) { return; }
void glLoadIdentity (void) { return; }
void glLoadMatrixx (const GLfixed *m) { return; }
void glLogicOp (GLenum opcode) { return; }
void glMaterialx (GLenum face, GLenum pname, GLfixed param) { return; }
void glMaterialxv (GLenum face, GLenum pname, const GLfixed *params) { return; }
void glMatrixMode (GLenum mode) { return; }
void glMultMatrixx (const GLfixed *m) { return; }
void glMultiTexCoord4x (GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q) { return; }
void glNormal3x (GLfixed nx, GLfixed ny, GLfixed nz) { return; }
void glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer) { return; }
void glOrthox (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar) { return; }
void glPixelStorei (GLenum pname, GLint param) { return; }
void glPointParameterx (GLenum pname, GLfixed param) { return; }
void glPointParameterxv (GLenum pname, const GLfixed *params) { return; }
void glPointSizex (GLfixed size) { return; }
void glPolygonOffsetx (GLfixed factor, GLfixed units) { return; }
void glPopMatrix (void) { return; }
void glPushMatrix (void) { return; }
void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels) { return; }
void glRotatex (GLfixed angle, GLfixed x, GLfixed y, GLfixed z) { return; }
void glSampleCoverage (GLclampf value, GLboolean invert) { return; }
void glSampleCoveragex (GLclampx value, GLboolean invert) { return; }
void glScalex (GLfixed x, GLfixed y, GLfixed z) { return; }
void glScissor (GLint x, GLint y, GLsizei width, GLsizei height) { return; }
void glShadeModel (GLenum mode) { return; }
void glStencilFunc (GLenum func, GLint ref, GLuint mask) { return; }
void glStencilMask (GLuint mask) { return; }
void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass) { return; }
void glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) { return; }
void glTexEnvi (GLenum target, GLenum pname, GLint param) { return; }
void glTexEnvx (GLenum target, GLenum pname, GLfixed param) { return; }
void glTexEnviv (GLenum target, GLenum pname, const GLint *params) { return; }
void glTexEnvxv (GLenum target, GLenum pname, const GLfixed *params) { return; }
void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels) { return; }
void glTexParameteri (GLenum target, GLenum pname, GLint param) { return; }
void glTexParameterx (GLenum target, GLenum pname, GLfixed param) { return; }
void glTexParameteriv (GLenum target, GLenum pname, const GLint *params) { return; }
void glTexParameterxv (GLenum target, GLenum pname, const GLfixed *params) { return; }
void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels) { return; }
void glTranslatex (GLfixed x, GLfixed y, GLfixed z) { return; }
void glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) { return; }
void glViewport (GLint x, GLint y, GLsizei width, GLsizei height) { return; }
void glPointSizePointerOES (GLenum type, GLsizei stride, const GLvoid *pointer) { return; }



typedef void (*__egl_funcptr)();


typedef struct gles1_ExtProcedure
{
	const char *pProcname;
	__egl_funcptr pfnProc;
} GLES1_ExtProcedures; 

GLES1_ExtProcedures gles1ExtProcedures[] =
{
 
#ifdef GL_OES_blend_equation_separate 
                     {glBlendEquationSeparateOES,(__egl_funcptr)glBlendEquationSeparateOES },  
#endif
 
#ifdef GL_OES_blend_func_separate
                     {glBlendFuncSeparateOES,(__egl_funcptr)glBlendFuncSeparateOES },   
#endif
 
#ifdef GL_OES_blend_subtract
                     {glBlendEquationOES,(__egl_funcptr)glBlendEquationOES },  
#endif
 
#ifdef GL_OES_draw_texture
                     {glDrawTexsOES,(__egl_funcptr)glDrawTexsOES },  
                     {glDrawTexiOES,(__egl_funcptr)glDrawTexiOES },  
                     {glDrawTexxOES,(__egl_funcptr)glDrawTexxOES },  
                     {glDrawTexsvOES,(__egl_funcptr)glDrawTexsvOES },  
                     {glDrawTexivOES,(__egl_funcptr)glDrawTexivOES },  
                     {glDrawTexxvOES,(__egl_funcptr)glDrawTexxvOES },  
                     {glDrawTexfOES,(__egl_funcptr)glDrawTexfOES },  
                     {glDrawTexfvOES,(__egl_funcptr)glDrawTexfvOES },   

#endif
 
#ifdef GL_OES_EGL_image
                     {glEGLImageTargetTexture2DOES,(__egl_funcptr)glDrawTexfOES },  
                     {glEGLImageTargetRenderbufferStorageOES,(__egl_funcptr)glDrawTexfvOES },   
#endif
 
#ifdef GL_OES_fixed_point
                     {glAlphaFuncxOES,(__egl_funcptr)glAlphaFuncxOES },  
                     {glClearColorxOES,(__egl_funcptr)glClearColorxOES },  
                     {glClearDepthxOES,(__egl_funcptr)glClearDepthxOES },  
                     {glClipPlanexOES,(__egl_funcptr)glClipPlanexOES },  
                     {glColor4xOES,(__egl_funcptr)glColor4xOES },  
                     {glDepthRangexOES,(__egl_funcptr)glDepthRangexOES },  
                     {glFogxOES,(__egl_funcptr)glFogxOES },  
                     {glFogxvOES,(__egl_funcptr)glFogxvOES },   
                     {glFrustumxOES,(__egl_funcptr)glFrustumxOES },  
                     {glGetClipPlanexOES,(__egl_funcptr)glGetClipPlanexOES },  
                     {glGetFixedvOES,(__egl_funcptr)glGetFixedvOES },  
                     {glGetLightxvOES,(__egl_funcptr)glGetLightxvOES },  
                     {glGetMaterialxvOES,(__egl_funcptr)glGetMaterialxvOES },  
                     {glGetTexEnvxvOES,(__egl_funcptr)glGetTexEnvxvOES },  
                     {glGetTexParameterxvOES,(__egl_funcptr)glGetTexParameterxvOES },  
                     {glLightModelxOES,(__egl_funcptr)glLightModelxOES },   
                     {glLightModelxvOES,(__egl_funcptr)glLightModelxvOES },  
                     {glLightxOES,(__egl_funcptr)glLightxOES },  
                     {glLineWidthxOES,(__egl_funcptr)glLineWidthxOES },  
                     {glLoadMatrixxOES,(__egl_funcptr)glLoadMatrixxOES },  
                     {glMaterialxOES,(__egl_funcptr)glMaterialxOES },  
                     {glMaterialxvOES,(__egl_funcptr)glMaterialxvOES },  
                     {glMultMatrixxOES,(__egl_funcptr)glMultMatrixxOES },  
                     {glMultiTexCoord4xOES,(__egl_funcptr)glMultiTexCoord4xOES },   
                     {glNormal3xOES,(__egl_funcptr)glNormal3xOES },  
                     {glOrthoxOES,(__egl_funcptr)glOrthoxOES },  
                     {glPointParameterxOES,(__egl_funcptr)glPointParameterxOES },  
                     {glPointParameterxvOES,(__egl_funcptr)glPointParameterxvOES },  
                     {glPointSizexOES,(__egl_funcptr)glPointSizexOES },  
                     {glPolygonOffsetxOES,(__egl_funcptr)glPolygonOffsetxOES },  
                     {glRotatexOES,(__egl_funcptr)glRotatexOES },  
                     {glSampleCoveragexOES,(__egl_funcptr)glSampleCoveragexOES },   
                     {glScalexOES,(__egl_funcptr)glScalexOES },  
                     {glTexEnvxOES,(__egl_funcptr)glTexEnvxOES },  
                     {glTexEnvxvOES,(__egl_funcptr)glTexEnvxvOES },  
                     {glTexParameterxOES,(__egl_funcptr)glTexParameterxOES },  
                     {glTexParameterxvOES,(__egl_funcptr)glTexParameterxvOES },  
                     {glTranslatexOES,(__egl_funcptr)glTranslatexOES }, 
 

#endif
 
#ifdef GL_OES_framebuffer_object
                     {glIsRenderbufferOES,(__egl_funcptr)glIsRenderbufferOES },   
                     {glBindRenderbufferOES,(__egl_funcptr)glBindRenderbufferOES },  
                     {glDeleteRenderbuffersOES,(__egl_funcptr)glDeleteRenderbuffersOES },  
                     {glGenRenderbuffersOES,(__egl_funcptr)glGenRenderbuffersOES },  
                     {glRenderbufferStorageOES,(__egl_funcptr)glRenderbufferStorageOES },  
                     {glGetRenderbufferParameterivOES,(__egl_funcptr)glGetRenderbufferParameterivOES },  
                     {glIsFramebufferOES,(__egl_funcptr)glIsFramebufferOES },  
                     {glBindFramebufferOES,(__egl_funcptr)glBindFramebufferOES },  
                     {glDeleteFramebuffersOES,(__egl_funcptr)glDeleteFramebuffersOES },   
                     {glGenFramebuffersOES,(__egl_funcptr)glGenFramebuffersOES },  
                     {glCheckFramebufferStatusOES,(__egl_funcptr)glCheckFramebufferStatusOES },  
                     {glFramebufferRenderbufferOES,(__egl_funcptr)glFramebufferRenderbufferOES },  
                     {glFramebufferTexture2DOES,(__egl_funcptr)glFramebufferTexture2DOES },  
                     {glGetFramebufferAttachmentParameterivOES,(__egl_funcptr)glGetFramebufferAttachmentParameterivOES },  
                     {glGenerateMipmapOES,(__egl_funcptr)glGenerateMipmapOES },   

#endif
 
#ifdef GL_OES_mapbuffer
                     {glMapBufferOES,(__egl_funcptr)glMapBufferOES },  
                     {glUnmapBufferOES,(__egl_funcptr)glUnmapBufferOES },  
                     {glGetBufferPointervOES,(__egl_funcptr)glGetBufferPointervOES },    

#endif
 
#ifdef GL_OES_matrix_palette
                     {glCurrentPaletteMatrixOES,(__egl_funcptr)glCurrentPaletteMatrixOES },  
                     {glLoadPaletteFromModelViewMatrixOES,(__egl_funcptr)glLoadPaletteFromModelViewMatrixOES },  
                     {glMatrixIndexPointerOES,(__egl_funcptr)glMatrixIndexPointerOES },   
                     {glWeightPointerOES,(__egl_funcptr)glWeightPointerOES },     

#endif
 
#ifdef GL_OES_query_matrix
                     {glQueryMatrixxOES,(__egl_funcptr)glQueryMatrixxOES },   

#endif
 
#ifdef GL_OES_single_precision
                     {glDepthRangefOES,(__egl_funcptr)glDepthRangefOES },  
                     {glFrustumfOES,(__egl_funcptr)glFrustumfOES },  
                     {glOrthofOES,(__egl_funcptr)glOrthofOES },  
                     {glClipPlanefOES,(__egl_funcptr)glClipPlanefOES },  
                     {glGetClipPlanefOES,(__egl_funcptr)glGetClipPlanefOES },  
                     {glClearDepthfOES,(__egl_funcptr)glClearDepthfOES },  

#endif
 
#ifdef GL_OES_texture_cube_map
                     {glTexGenfOES,(__egl_funcptr)glTexGenfOES },  
                     {glTexGenfvOES,(__egl_funcptr)glTexGenfvOES },  
                     {glTexGeniOES,(__egl_funcptr)glTexGeniOES },  
                     {glTexGenivOES,(__egl_funcptr)glTexGenivOES },  
                     {glTexGenxOES,(__egl_funcptr)glTexGenxOES },  
                     {glTexGenxvOES,(__egl_funcptr)glTexGenxvOES },  
                     {glGetTexGenfvOES,(__egl_funcptr)glGetTexGenfvOES },  
                     {glGetTexGenivOES,(__egl_funcptr)glGetTexGenivOES },  
                     {glGetTexGenxvOES,(__egl_funcptr)glGetTexGenxvOES },    

#endif
 
#ifdef GL_OES_vertex_array_object 
                     {glBindVertexArrayOES,(__egl_funcptr)glBindVertexArrayOES },  
                     {glDeleteVertexArraysOES,(__egl_funcptr)glDeleteVertexArraysOES },  
                     {glGenVertexArraysOES,(__egl_funcptr)glGenVertexArraysOES },  
                     {glIsVertexArrayOES,(__egl_funcptr)glIsVertexArrayOES },  

#endif
 
#ifdef GL_APPLE_framebuffer_multisample
                     {glRenderbufferStorageMultisampleAPPLE,(__egl_funcptr)glGenVertexArraysOES },  
                     {glResolveMultisampleFramebufferAPPLE,(__egl_funcptr)glIsVertexArrayOES },   

#endif

 
#ifdef GL_EXT_discard_framebuffer
                     {glDiscardFramebufferEXT,(__egl_funcptr)glDiscardFramebufferEXT },    
#endif
 
#ifdef GL_EXT_multi_draw_arrays
                     {glMultiDrawArraysEXT,(__egl_funcptr)glMultiDrawArraysEXT },  
                     {glMultiDrawElementsEXT,(__egl_funcptr)glMultiDrawElementsEXT }, 

#endif
 
#ifdef GL_EXT_multisampled_render_to_texture
                     {glRenderbufferStorageMultisampleEXT,(__egl_funcptr)glMultiDrawArraysEXT },  
                     {glFramebufferTexture2DMultisampleEXT,(__egl_funcptr)glMultiDrawElementsEXT },  
#endif
 
 
#ifdef GL_IMG_user_clip_plane
                     {glClipPlanefIMG,(__egl_funcptr)glClipPlanefIMG },  
                     {glClipPlanexIMG,(__egl_funcptr)glClipPlanexIMG },   

#endif
 
#ifdef GL_IMG_multisampled_render_to_texture
                     {glRenderbufferStorageMultisampleIMG,(__egl_funcptr)glRenderbufferStorageMultisampleIMG },  
                     {glFramebufferTexture2DMultisampleIMG,(__egl_funcptr)glFramebufferTexture2DMultisampleIMG },    

#endif
 
#ifdef GL_IMG_texture_stream
                     {glTexBindStreamIMG,(__egl_funcptr)glTexBindStreamIMG },  
                     {glGetTexStreamDeviceAttributeivIMG,(__egl_funcptr)glGetTexStreamDeviceAttributeivIMG },  
                     {glGetTexStreamDeviceNameIMG,(__egl_funcptr)glGetTexStreamDeviceNameIMG },   
#endif
 
#ifdef GL_IMG_vertex_program
                     {glVertexAttrib4fARB,(__egl_funcptr)glVertexAttrib4fARB },  
                     {glProgramEnvParameter4fARB,(__egl_funcptr)glProgramEnvParameter4fARB },  
                     {glProgramEnvParameter4fvARB,(__egl_funcptr)glProgramEnvParameter4fvARB },   
                     {glProgramLocalParameter4fARB,(__egl_funcptr)glProgramLocalParameter4fARB },  
                     {glProgramLocalParameter4fvARB,(__egl_funcptr)glProgramLocalParameter4fvARB },  
                     {glVertexAttrib4xIMG,(__egl_funcptr)glVertexAttrib4xIMG },   
                     {glProgramLocalParameter4xIMG,(__egl_funcptr)glProgramLocalParameter4xIMG },  
                     {glProgramLocalParameter4xvIMG,(__egl_funcptr)glProgramLocalParameter4xvIMG },  
                     {glProgramEnvParameter4xIMG,(__egl_funcptr)glProgramEnvParameter4xIMG },   
                     {glProgramEnvParameter4xvIMG,(__egl_funcptr)glProgramEnvParameter4xvIMG },  
                     {glVertexAttribPointerARB,(__egl_funcptr)glVertexAttribPointerARB },  
                     {glEnableVertexAttribArrayARB,(__egl_funcptr)glEnableVertexAttribArrayARB },   
                     {glDisableVertexAttribArrayARB,(__egl_funcptr)glDisableVertexAttribArrayARB },  
                     {glProgramStringARB,(__egl_funcptr)glProgramStringARB },  
                     {glBindProgramARB,(__egl_funcptr)glBindProgramARB },   
                     {glDeleteProgramsARB,(__egl_funcptr)glProgramStringARB },  
                     {glGenProgramsARB,(__egl_funcptr)glBindProgramARB },  

#endif
 
#ifdef GL_NV_fence
                     {glDeleteFencesNV,(__egl_funcptr)glDeleteFencesNV },  
                     {glGenFencesNV,(__egl_funcptr)glGenFencesNV },   
                     {glIsFenceNV,(__egl_funcptr)glIsFenceNV },  
                     {glTestFenceNV,(__egl_funcptr)glTestFenceNV },  
                     {glGetFenceivNV,(__egl_funcptr)glGetFenceivNV },   
                     {glFinishFenceNV,(__egl_funcptr)glFinishFenceNV },  
                     {glSetFenceNV,(__egl_funcptr)glSetFenceNV },   

#endif
 
#ifdef GL_QCOM_driver_control
                     {glGetDriverControlsQCOM,(__egl_funcptr)glGetDriverControlsQCOM },  
                     {glGetDriverControlStringQCOM,(__egl_funcptr)glGetDriverControlStringQCOM },   
                     {glEnableDriverControlQCOM,(__egl_funcptr)glEnableDriverControlQCOM },  
                     {glDisableDriverControlQCOM,(__egl_funcptr)glDisableDriverControlQCOM },    

#endif
 
#ifdef GL_QCOM_extended_get
                     {glExtGetTexturesQCOM,(__egl_funcptr)glExtGetTexturesQCOM },  
                     {glExtGetBuffersQCOM,(__egl_funcptr)glExtGetBuffersQCOM },   
                     {glExtGetRenderbuffersQCOM,(__egl_funcptr)glExtGetRenderbuffersQCOM },  
                     {glExtGetFramebuffersQCOM,(__egl_funcptr)glExtGetFramebuffersQCOM }, 
                     {glExtGetTexLevelParameterivQCOM,(__egl_funcptr)glExtGetTexLevelParameterivQCOM },  
                     {glExtTexObjectStateOverrideiQCOM,(__egl_funcptr)glExtTexObjectStateOverrideiQCOM },   
                     {glExtGetTexSubImageQCOM,(__egl_funcptr)glExtGetTexSubImageQCOM },  
                     {glExtGetBufferPointervQCOM,(__egl_funcptr)glExtGetBufferPointervQCOM },  
#endif
 
#ifdef GL_QCOM_extended_get2
                     {glExtGetShadersQCOM,(__egl_funcptr)glExtGetShadersQCOM },  
                     {glExtGetProgramsQCOM,(__egl_funcptr)glExtGetProgramsQCOM },   
                     {glExtIsProgramBinaryQCOM,(__egl_funcptr)glExtIsProgramBinaryQCOM },  
                     {glExtGetProgramBinarySourceQCOM,(__egl_funcptr)glExtGetProgramBinarySourceQCOM },  
 
#endif
 
#ifdef GL_QCOM_tiled_rendering
                     {glStartTilingQCOM,(__egl_funcptr)glStartTilingQCOM },  
                     {glEndTilingQCOM,(__egl_funcptr)glEndTilingQCOM },   
#endif
                      {0,0}
};


typedef void (*__eglMustCastToProperFunctionPointerType)(void);

 __eglMustCastToProperFunctionPointerType glGetGles1Proc(const char *procname) 
{
		GLint uIndex;
		

		if (procname== 0)
		{
			return 0;
		}
		
 	        for (uIndex = 0 ; gles1ExtProcedures[uIndex].pProcname !=0 ; uIndex++)
		{
			if( strncmp( gles1ExtProcedures[uIndex].pProcname, procname, strlen( gles1ExtProcedures[uIndex].pProcname )+1 )==0 )
			{
				return gles1ExtProcedures[uIndex].pfnProc;
			}
		}

  return 0;

}
/*------------------------------------------------------------------------*
 * End of extension tokens, start of corresponding extension functions
 *------------------------------------------------------------------------*/

/*------------------------------------------------------------------------*
 * OES extension functions
 *------------------------------------------------------------------------*/

/* GL_OES_blend_equation_separate */
#ifdef GL_OES_blend_equation_separate 
 
GL_API void GL_APIENTRY glBlendEquationSeparateOES (GLenum modeRGB, GLenum modeAlpha){ return; }
 
#endif

/* GL_OES_blend_func_separate */
#ifdef GL_OES_blend_func_separate

GL_API void GL_APIENTRY glBlendFuncSeparateOES (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha){ return; }

#endif

/* GL_OES_blend_subtract */
#ifdef GL_OES_blend_subtract

GL_API void GL_APIENTRY glBlendEquationOES (GLenum mode){ return; }

#endif



/* GL_OES_draw_texture */
#ifdef GL_OES_draw_texture

GL_API void GL_APIENTRY glDrawTexsOES (GLshort x, GLshort y, GLshort z, GLshort width, GLshort height){ return; }
GL_API void GL_APIENTRY glDrawTexiOES (GLint x, GLint y, GLint z, GLint width, GLint height){ return; }
GL_API void GL_APIENTRY glDrawTexxOES (GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height){ return; }
GL_API void GL_APIENTRY glDrawTexsvOES (const GLshort *coords){ return; }
GL_API void GL_APIENTRY glDrawTexivOES (const GLint *coords){ return; }
GL_API void GL_APIENTRY glDrawTexxvOES (const GLfixed *coords){ return; }
GL_API void GL_APIENTRY glDrawTexfOES (GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height){ return; }
GL_API void GL_APIENTRY glDrawTexfvOES (const GLfloat *coords){ return; }

#endif

/* GL_OES_EGL_image */
#ifdef GL_OES_EGL_image


GL_API void GL_APIENTRY glEGLImageTargetTexture2DOES (GLenum target, GLeglImageOES image){ return; }
GL_API void GL_APIENTRY glEGLImageTargetRenderbufferStorageOES (GLenum target, GLeglImageOES image){ return; }

#endif


/* GL_OES_fixed_point */
#ifdef GL_OES_fixed_point

GL_API void GL_APIENTRY glAlphaFuncxOES (GLenum func, GLclampx ref){ return; }
GL_API void GL_APIENTRY glClearColorxOES (GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha){ return; }
GL_API void GL_APIENTRY glClearDepthxOES (GLclampx depth){ return; }
GL_API void GL_APIENTRY glClipPlanexOES (GLenum plane, const GLfixed *equation){ return; }
GL_API void GL_APIENTRY glColor4xOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha){ return; }
GL_API void GL_APIENTRY glDepthRangexOES (GLclampx zNear, GLclampx zFar){ return; }
GL_API void GL_APIENTRY glFogxOES (GLenum pname, GLfixed param){ return; }
GL_API void GL_APIENTRY glFogxvOES (GLenum pname, const GLfixed *params){ return; }
GL_API void GL_APIENTRY glFrustumxOES (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar){ return; }
GL_API void GL_APIENTRY glGetClipPlanexOES (GLenum pname, GLfixed eqn[4]){ return; }
GL_API void GL_APIENTRY glGetFixedvOES (GLenum pname, GLfixed *params){ return; }
GL_API void GL_APIENTRY glGetLightxvOES (GLenum light, GLenum pname, GLfixed *params){ return; }
GL_API void GL_APIENTRY glGetMaterialxvOES (GLenum face, GLenum pname, GLfixed *params){ return; }
GL_API void GL_APIENTRY glGetTexEnvxvOES (GLenum env, GLenum pname, GLfixed *params){ return; }
GL_API void GL_APIENTRY glGetTexParameterxvOES (GLenum target, GLenum pname, GLfixed *params){ return; }
GL_API void GL_APIENTRY glLightModelxOES (GLenum pname, GLfixed param){ return; }
GL_API void GL_APIENTRY glLightModelxvOES (GLenum pname, const GLfixed *params){ return; }
GL_API void GL_APIENTRY glLightxOES (GLenum light, GLenum pname, GLfixed param){ return; }
GL_API void GL_APIENTRY glLightxvOES (GLenum light, GLenum pname, const GLfixed *params){ return; }
GL_API void GL_APIENTRY glLineWidthxOES (GLfixed width){ return; }
GL_API void GL_APIENTRY glLoadMatrixxOES (const GLfixed *m){ return; }
GL_API void GL_APIENTRY glMaterialxOES (GLenum face, GLenum pname, GLfixed param){ return; }
GL_API void GL_APIENTRY glMaterialxvOES (GLenum face, GLenum pname, const GLfixed *params){ return; }
GL_API void GL_APIENTRY glMultMatrixxOES (const GLfixed *m){ return; }
GL_API void GL_APIENTRY glMultiTexCoord4xOES (GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q){ return; }
GL_API void GL_APIENTRY glNormal3xOES (GLfixed nx, GLfixed ny, GLfixed nz){ return; }
GL_API void GL_APIENTRY glOrthoxOES (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar){ return; }
GL_API void GL_APIENTRY glPointParameterxOES (GLenum pname, GLfixed param){ return; }
GL_API void GL_APIENTRY glPointParameterxvOES (GLenum pname, const GLfixed *params){ return; }
GL_API void GL_APIENTRY glPointSizexOES (GLfixed size){ return; }
GL_API void GL_APIENTRY glPolygonOffsetxOES (GLfixed factor, GLfixed units){ return; }
GL_API void GL_APIENTRY glRotatexOES (GLfixed angle, GLfixed x, GLfixed y, GLfixed z){ return; }
GL_API void GL_APIENTRY glSampleCoveragexOES (GLclampx value, GLboolean invert){ return; }
GL_API void GL_APIENTRY glScalexOES (GLfixed x, GLfixed y, GLfixed z){ return; }
GL_API void GL_APIENTRY glTexEnvxOES (GLenum target, GLenum pname, GLfixed param){ return; }
GL_API void GL_APIENTRY glTexEnvxvOES (GLenum target, GLenum pname, const GLfixed *params){ return; }
GL_API void GL_APIENTRY glTexParameterxOES (GLenum target, GLenum pname, GLfixed param){ return; }
GL_API void GL_APIENTRY glTexParameterxvOES (GLenum target, GLenum pname, const GLfixed *params){ return; }
GL_API void GL_APIENTRY glTranslatexOES (GLfixed x, GLfixed y, GLfixed z){ return; }

#endif

/* GL_OES_framebuffer_object */
#ifdef GL_OES_framebuffer_object

GL_API GLboolean GL_APIENTRY glIsRenderbufferOES (GLuint renderbuffer){ return; }
GL_API void GL_APIENTRY glBindRenderbufferOES (GLenum target, GLuint renderbuffer){ return; }
GL_API void GL_APIENTRY glDeleteRenderbuffersOES (GLsizei n, const GLuint* renderbuffers){ return; }
GL_API void GL_APIENTRY glGenRenderbuffersOES (GLsizei n, GLuint* renderbuffers){ return; }
GL_API void GL_APIENTRY glRenderbufferStorageOES (GLenum target, GLenum internalformat, GLsizei width, GLsizei height){ return; }
GL_API void GL_APIENTRY glGetRenderbufferParameterivOES (GLenum target, GLenum pname, GLint* params){ return; }
GL_API GLboolean GL_APIENTRY glIsFramebufferOES (GLuint framebuffer){ return; }
GL_API void GL_APIENTRY glBindFramebufferOES (GLenum target, GLuint framebuffer){ return; }
GL_API void GL_APIENTRY glDeleteFramebuffersOES (GLsizei n, const GLuint* framebuffers){ return; }
GL_API void GL_APIENTRY glGenFramebuffersOES (GLsizei n, GLuint* framebuffers){ return; }
GL_API GLenum GL_APIENTRY glCheckFramebufferStatusOES (GLenum target){ return; }
GL_API void GL_APIENTRY glFramebufferRenderbufferOES (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer){ return; }
GL_API void GL_APIENTRY glFramebufferTexture2DOES (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){ return; }
GL_API void GL_APIENTRY glGetFramebufferAttachmentParameterivOES (GLenum target, GLenum attachment, GLenum pname, GLint* params){ return; }
GL_API void GL_APIENTRY glGenerateMipmapOES (GLenum target){ return; }

#endif

/* GL_OES_mapbuffer */
#ifdef GL_OES_mapbuffer

GL_API void* GL_APIENTRY glMapBufferOES (GLenum target, GLenum access){ return; }
GL_API GLboolean GL_APIENTRY glUnmapBufferOES (GLenum target){ return; }
GL_API void GL_APIENTRY glGetBufferPointervOES (GLenum target, GLenum pname, void** params){ return; }

#endif



/* GL_OES_matrix_palette */
#ifdef GL_OES_matrix_palette

GL_API void GL_APIENTRY glCurrentPaletteMatrixOES (GLuint matrixpaletteindex){ return; }
GL_API void GL_APIENTRY glLoadPaletteFromModelViewMatrixOES (void){ return; }
GL_API void GL_APIENTRY glMatrixIndexPointerOES (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer){ return; }
GL_API void GL_APIENTRY glWeightPointerOES (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer){ return; }

#endif



/* GL_OES_query_matrix */
#ifdef GL_OES_query_matrix

GL_API GLbitfield GL_APIENTRY glQueryMatrixxOES (GLfixed mantissa[16], GLint exponent[16]){ return; }

#endif



/* GL_OES_single_precision */
#ifdef GL_OES_single_precision

GL_API void GL_APIENTRY glDepthRangefOES (GLclampf zNear, GLclampf zFar){ return; }
GL_API void GL_APIENTRY glFrustumfOES (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar){ return; }
GL_API void GL_APIENTRY glOrthofOES (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar){ return; }
GL_API void GL_APIENTRY glClipPlanefOES (GLenum plane, const GLfloat *equation){ return; }
GL_API void GL_APIENTRY glGetClipPlanefOES (GLenum pname, GLfloat eqn[4]){ return; }
GL_API void GL_APIENTRY glClearDepthfOES (GLclampf depth){ return; }

#endif

/* GL_OES_texture_cube_map */
#ifdef GL_OES_texture_cube_map

GL_API void GL_APIENTRY glTexGenfOES (GLenum coord, GLenum pname, GLfloat param){ return; }
GL_API void GL_APIENTRY glTexGenfvOES (GLenum coord, GLenum pname, const GLfloat *params){ return; }
GL_API void GL_APIENTRY glTexGeniOES (GLenum coord, GLenum pname, GLint param){ return; }
GL_API void GL_APIENTRY glTexGenivOES (GLenum coord, GLenum pname, const GLint *params){ return; }
GL_API void GL_APIENTRY glTexGenxOES (GLenum coord, GLenum pname, GLfixed param){ return; }
GL_API void GL_APIENTRY glTexGenxvOES (GLenum coord, GLenum pname, const GLfixed *params){ return; }
GL_API void GL_APIENTRY glGetTexGenfvOES (GLenum coord, GLenum pname, GLfloat *params){ return; }
GL_API void GL_APIENTRY glGetTexGenivOES (GLenum coord, GLenum pname, GLint *params){ return; }
GL_API void GL_APIENTRY glGetTexGenxvOES (GLenum coord, GLenum pname, GLfixed *params){ return; }

#endif


/* GL_OES_vertex_array_object  */
#ifdef GL_OES_vertex_array_object 

GL_API void GL_APIENTRY glBindVertexArrayOES(GLuint vertexarray){ return; }
GL_API void GL_APIENTRY glDeleteVertexArraysOES(GLsizei n, const GLuint *vertexarrays){ return; }
GL_API void GL_APIENTRY glGenVertexArraysOES(GLsizei n, const GLuint *vertexarrays){ return; }
GL_API GLboolean GL_APIENTRY glIsVertexArrayOES (GLuint vertexarray){ return; }

#endif




/* GL_APPLE_framebuffer_multisample */
#ifdef GL_APPLE_framebuffer_multisample

GL_API void GL_APIENTRY glRenderbufferStorageMultisampleAPPLE (GLenum, GLsizei, GLenum, GLsizei, GLsizei){ return; }
GL_API void GL_APIENTRY glResolveMultisampleFramebufferAPPLE (void){ return; }

#endif



/* GL_EXT_discard_framebuffer */
#ifdef GL_EXT_discard_framebuffer

GL_API void GL_APIENTRY glDiscardFramebufferEXT (GLenum target, GLsizei numAttachments, const GLenum *attachments){ return; }

#endif

/* GL_EXT_multi_draw_arrays */
#ifdef GL_EXT_multi_draw_arrays

GL_API void GL_APIENTRY glMultiDrawArraysEXT (GLenum, GLint *, GLsizei *, GLsizei){ return; }
GL_API void GL_APIENTRY glMultiDrawElementsEXT (GLenum, const GLsizei *, GLenum, const GLvoid* *, GLsizei){ return; }

#endif



/* GL_EXT_multisampled_render_to_texture */
#ifdef GL_EXT_multisampled_render_to_texture

GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleEXT( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){ return; }
GL_APICALL void GL_APIENTRY glFramebufferTexture2DMultisampleEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples){ return; }

#endif



/* GL_IMG_user_clip_plane */
#ifdef GL_IMG_user_clip_plane

GL_API void GL_APIENTRY glClipPlanefIMG (GLenum, const GLfloat *){ return; }
GL_API void GL_APIENTRY glClipPlanexIMG (GLenum, const GLfixed *){ return; }

#endif

/* GL_IMG_multisampled_render_to_texture */
#ifdef GL_IMG_multisampled_render_to_texture

GL_API void GL_APIENTRY glRenderbufferStorageMultisampleIMG (GLenum, GLsizei, GLenum, GLsizei, GLsizei){ return; }
GL_API void GL_APIENTRY glFramebufferTexture2DMultisampleIMG (GLenum, GLenum, GLenum, GLuint, GLint, GLsizei){ return; }

#endif


/* GL_IMG_texture_stream */
#ifdef GL_IMG_texture_stream

GL_API void GL_APIENTRY glTexBindStreamIMG(GLint device, GLint deviceoffset){ return; }
GL_API void GL_APIENTRY glGetTexStreamDeviceAttributeivIMG(GLint device, GLenum pname, GLint *params){ return; }
GL_API const GLubyte * GL_APIENTRY glGetTexStreamDeviceNameIMG(GLint device){ return; }

#endif



/* GL_IMG_vertex_program */
#ifdef GL_IMG_vertex_program


GL_API void GL_APIENTRY glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){ return; }
GL_API void GL_APIENTRY glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){ return; }
GL_API void GL_APIENTRY glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat *params){ return; }
GL_API void GL_APIENTRY glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){ return; }
GL_API void GL_APIENTRY glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat *params){ return; }
GL_API void GL_APIENTRY glVertexAttrib4xIMG(GLuint index, GLfixed x, GLfixed y, GLfixed z, GLfixed w){ return; }
GL_API void GL_APIENTRY glProgramLocalParameter4xIMG(GLenum target, GLuint index, GLfixed x, GLfixed y, GLfixed z, GLfixed w){ return; }
GL_API void GL_APIENTRY glProgramLocalParameter4xvIMG(GLenum target, GLuint index, const GLfixed *params){ return; }
GL_API void GL_APIENTRY glProgramEnvParameter4xIMG(GLenum target, GLuint index, GLfixed x, GLfixed y, GLfixed z, GLfixed w){ return; }
GL_API void GL_APIENTRY glProgramEnvParameter4xvIMG(GLenum target, GLuint index, const GLfixed *params){ return; }
GL_API void GL_APIENTRY glVertexAttribPointerARB(GLuint index, GLsizei size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer){ return; }
GL_API void GL_APIENTRY glEnableVertexAttribArrayARB(GLuint index){ return; }
GL_API void GL_APIENTRY glDisableVertexAttribArrayARB(GLuint index){ return; }
GL_API void GL_APIENTRY glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void *string){ return; }
GL_API void GL_APIENTRY glBindProgramARB(GLenum target, GLuint program){ return; }
GL_API void GL_APIENTRY glDeleteProgramsARB(GLsizei n, const GLuint *programs){ return; }
GL_API void GL_APIENTRY glGenProgramsARB(GLsizei n, GLuint *programs){ return; }

#endif



/*------------------------------------------------------------------------*
 * NV extension functions
 *------------------------------------------------------------------------*/

/* NV_fence */
#ifdef GL_NV_fence

GL_API void GL_APIENTRY glDeleteFencesNV (GLsizei, const GLuint *){ return; }
GL_API void GL_APIENTRY glGenFencesNV (GLsizei, GLuint *){ return; }
GL_API GLboolean GL_APIENTRY glIsFenceNV (GLuint){ return; }
GL_API GLboolean GL_APIENTRY glTestFenceNV (GLuint){ return; }
GL_API void GL_APIENTRY glGetFenceivNV (GLuint, GLenum, GLint *){ return; }
GL_API void GL_APIENTRY glFinishFenceNV (GLuint){ return; }
GL_API void GL_APIENTRY glSetFenceNV (GLuint, GLenum){ return; }

#endif

/*------------------------------------------------------------------------*
 * QCOM extension functions
 *------------------------------------------------------------------------*/

/* GL_QCOM_driver_control */
#ifdef GL_QCOM_driver_control

GL_API void GL_APIENTRY glGetDriverControlsQCOM (GLint *num, GLsizei size, GLuint *driverControls){ return; }
GL_API void GL_APIENTRY glGetDriverControlStringQCOM (GLuint driverControl, GLsizei bufSize, GLsizei *length, char *driverControlString){ return; }
GL_API void GL_APIENTRY glEnableDriverControlQCOM (GLuint driverControl){ return; }
GL_API void GL_APIENTRY glDisableDriverControlQCOM (GLuint driverControl){ return; }

#endif

/* GL_QCOM_extended_get */
#ifdef GL_QCOM_extended_get

GL_API void GL_APIENTRY glExtGetTexturesQCOM (GLuint *textures, GLint maxTextures, GLint *numTextures){ return; }
GL_API void GL_APIENTRY glExtGetBuffersQCOM (GLuint *buffers, GLint maxBuffers, GLint *numBuffers){ return; }
GL_API void GL_APIENTRY glExtGetRenderbuffersQCOM (GLuint *renderbuffers, GLint maxRenderbuffers, GLint *numRenderbuffers){ return; }
GL_API void GL_APIENTRY glExtGetFramebuffersQCOM (GLuint *framebuffers, GLint maxFramebuffers, GLint *numFramebuffers){ return; }
GL_API void GL_APIENTRY glExtGetTexLevelParameterivQCOM (GLuint texture, GLenum face, GLint level, GLenum pname, GLint *params){ return; }
GL_API void GL_APIENTRY glExtTexObjectStateOverrideiQCOM (GLenum target, GLenum pname, GLint param){ return; }
GL_API void GL_APIENTRY glExtGetTexSubImageQCOM (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void *texels){ return; }
GL_API void GL_APIENTRY glExtGetBufferPointervQCOM (GLenum target, void **params){ return; }

#endif

/* GL_QCOM_extended_get2 */
#ifdef GL_QCOM_extended_get2


GL_API void GL_APIENTRY glExtGetShadersQCOM (GLuint *shaders, GLint maxShaders, GLint *numShaders){ return; }
GL_API void GL_APIENTRY glExtGetProgramsQCOM (GLuint *programs, GLint maxPrograms, GLint *numPrograms){ return; }
GL_API GLboolean GL_APIENTRY glExtIsProgramBinaryQCOM (GLuint program){ return; }
GL_API void GL_APIENTRY glExtGetProgramBinarySourceQCOM (GLuint program, GLenum shadertype, char *source, GLint *length){ return; }

#endif



/* GL_QCOM_tiled_rendering */
#ifdef GL_QCOM_tiled_rendering


GL_API void GL_APIENTRY glStartTilingQCOM (GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask){ return; }
GL_API void GL_APIENTRY glEndTilingQCOM (GLbitfield preserveMask){ return; }

#endif

