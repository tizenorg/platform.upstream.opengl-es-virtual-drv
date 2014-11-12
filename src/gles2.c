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

#include "GLES2/gl2.h"

void glActiveTexture (GLenum texture) { return; }
void glAttachShader (GLuint program, GLuint shader) { return; }
void glBindAttribLocation (GLuint program, GLuint index, const GLchar* name) { return; }
void glBindBuffer (GLenum target, GLuint buffer) { return; }
void glBindFramebuffer (GLenum target, GLuint framebuffer) { return; }
void glBindRenderbuffer (GLenum target, GLuint renderbuffer) { return; }
void glBindTexture (GLenum target, GLuint texture) { return; }
void glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) { return; }
void glBlendEquation( GLenum mode ) { return; }
void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) { return; }
void glBlendFunc (GLenum sfactor, GLenum dfactor) { return; }
void glBlendFuncSeparate (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) { return; }
void glBufferData (GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage) { return; }
void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data) { return; }
GLenum glCheckFramebufferStatus (GLenum target) { return 0; }
void glClear (GLbitfield mask) { return; }
void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) { return; }
void glClearDepthf (GLclampf depth) { return; }
void glClearStencil (GLint s) { return; }
void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) { return; }
void glCompileShader (GLuint shader) { return; }
void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data) { return; }
void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data) { return; }
void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { return; }
void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { return; }
GLuint glCreateProgram (void) { return 0; }
GLuint glCreateShader (GLenum type) { return 0; }
void glCullFace (GLenum mode) { return; }
void glDeleteBuffers (GLsizei n, const GLuint* buffers) { return; }
void glDeleteFramebuffers (GLsizei n, const GLuint* framebuffers) { return; }
void glDeleteProgram (GLuint program) { return; }
void glDeleteRenderbuffers (GLsizei n, const GLuint* renderbuffers) { return; }
void glDeleteShader (GLuint shader) { return; }
void glDeleteTextures (GLsizei n, const GLuint* textures) { return; }
void glDepthFunc (GLenum func) { return; }
void glDepthMask (GLboolean flag) { return; }
void glDepthRangef (GLclampf zNear, GLclampf zFar) { return; }
void glDetachShader (GLuint program, GLuint shader) { return; }
void glDisable (GLenum cap) { return; }
void glDisableVertexAttribArray (GLuint index) { return; }
void glDrawArrays (GLenum mode, GLint first, GLsizei count) { return; }
void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid* indices) { return; }
void glEnable (GLenum cap) { return; }
void glEnableVertexAttribArray (GLuint index) { return; }
void glFinish (void) { return; }
void glFlush (void) { return; }
void glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) { return; }
void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { return; }
void glFrontFace (GLenum mode) { return; }
void glGenBuffers (GLsizei n, GLuint* buffers) { return; }
void glGenerateMipmap (GLenum target) { return; }
void glGenFramebuffers (GLsizei n, GLuint* framebuffers) { return; }
void glGenRenderbuffers (GLsizei n, GLuint* renderbuffers) { return; }
void glGenTextures (GLsizei n, GLuint* textures) { return; }
void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, char* name) { return; }
void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, char* name) { return; }
void glGetAttachedShaders (GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders) { return; }
int glGetAttribLocation (GLuint program, const GLchar* name) { return 0; }
void glGetBooleanv (GLenum pname, GLboolean* params) { return; }
void glGetBufferParameteriv (GLenum target, GLenum pname, GLint* params) { return; }
GLenum glGetError (void) { return 0; }
void glGetFloatv (GLenum pname, GLfloat* params) { return; }
void glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint* params) { return; }
void glGetIntegerv (GLenum pname, GLint* params) { return; }
void glGetProgramiv (GLuint program, GLenum pname, GLint* params) { return; }
void glGetProgramInfoLog (GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog) { return; }
void glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint* params) { return; }
void glGetShaderiv (GLuint shader, GLenum pname, GLint* params) { return; }
void glGetShaderInfoLog (GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog) { return; }
void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision) { return; }
void glGetShaderSource (GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source) { return; }
const GLubyte* glGetString (GLenum name) { return 0; }
void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat* params) { return; }
void glGetTexParameteriv (GLenum target, GLenum pname, GLint* params) { return; }
void glGetUniformfv (GLuint program, GLint location, GLfloat* params) { return; }
void glGetUniformiv (GLuint program, GLint location, GLint* params) { return; }
int glGetUniformLocation (GLuint program, const GLchar* name) { return 0; }
void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat* params) { return; }
void glGetVertexAttribiv (GLuint index, GLenum pname, GLint* params) { return; }
void glGetVertexAttribPointerv (GLuint index, GLenum pname, GLvoid** pointer) { return; }
void glHint (GLenum target, GLenum mode) { return; }
GLboolean glIsBuffer (GLuint buffer) { return 0; }
GLboolean glIsEnabled (GLenum cap) { return 0; }
GLboolean glIsFramebuffer (GLuint framebuffer) { return 0; }
GLboolean glIsProgram (GLuint program) { return 0; }
GLboolean glIsRenderbuffer (GLuint renderbuffer) { return 0; }
GLboolean glIsShader (GLuint shader) { return 0; }
GLboolean glIsTexture (GLuint texture) { return 0; }
void glLineWidth (GLfloat width) { return; }
void glLinkProgram (GLuint program) { return; }
void glPixelStorei (GLenum pname, GLint param) { return; }
void glPolygonOffset (GLfloat factor, GLfloat units) { return; }
void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels) { return; }
void glReleaseShaderCompiler (void) { return; }
void glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height) { return; }
void glSampleCoverage (GLclampf value, GLboolean invert) { return; }
void glScissor (GLint x, GLint y, GLsizei width, GLsizei height) { return; }
void glShaderBinary (GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length) { return; }
void glShaderSource (GLuint shader, GLsizei count, const GLchar* const * string, const GLint* length) { return; }
void glStencilFunc (GLenum func, GLint ref, GLuint mask) { return; }
void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask) { return; }
void glStencilMask (GLuint mask) { return; }
void glStencilMaskSeparate (GLenum face, GLuint mask) { return; }
void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass) { return; }
void glStencilOpSeparate (GLenum face, GLenum fail, GLenum zfail, GLenum zpass) { return; }
void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels) { return; }
void glTexParameterf (GLenum target, GLenum pname, GLfloat param) { return; }
void glTexParameterfv (GLenum target, GLenum pname, const GLfloat* params) { return; }
void glTexParameteri (GLenum target, GLenum pname, GLint param) { return; }
void glTexParameteriv (GLenum target, GLenum pname, const GLint* params) { return; }
void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels) { return; }
void glUniform1f (GLint location, GLfloat x) { return; }
void glUniform1fv (GLint location, GLsizei count, const GLfloat* v) { return; }
void glUniform1i (GLint location, GLint x) { return; }
void glUniform1iv (GLint location, GLsizei count, const GLint* v) { return; }
void glUniform2f (GLint location, GLfloat x, GLfloat y) { return; }
void glUniform2fv (GLint location, GLsizei count, const GLfloat* v) { return; }
void glUniform2i (GLint location, GLint x, GLint y) { return; }
void glUniform2iv (GLint location, GLsizei count, const GLint* v) { return; }
void glUniform3f (GLint location, GLfloat x, GLfloat y, GLfloat z) { return; }
void glUniform3fv (GLint location, GLsizei count, const GLfloat* v) { return; }
void glUniform3i (GLint location, GLint x, GLint y, GLint z) { return; }
void glUniform3iv (GLint location, GLsizei count, const GLint* v) { return; }
void glUniform4f (GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { return; }
void glUniform4fv (GLint location, GLsizei count, const GLfloat* v) { return; }
void glUniform4i (GLint location, GLint x, GLint y, GLint z, GLint w) { return; }
void glUniform4iv (GLint location, GLsizei count, const GLint* v) { return; }
void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { return; }
void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { return; }
void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) { return; }
void glUseProgram (GLuint program) { return; }
void glValidateProgram (GLuint program) { return; }
void glVertexAttrib1f (GLuint indx, GLfloat x) { return; }
void glVertexAttrib1fv (GLuint indx, const GLfloat* values) { return; }
void glVertexAttrib2f (GLuint indx, GLfloat x, GLfloat y) { return; }
void glVertexAttrib2fv (GLuint indx, const GLfloat* values) { return; }
void glVertexAttrib3f (GLuint indx, GLfloat x, GLfloat y, GLfloat z) { return; }
void glVertexAttrib3fv (GLuint indx, const GLfloat* values) { return; }
void glVertexAttrib4f (GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { return; }
void glVertexAttrib4fv (GLuint indx, const GLfloat* values) { return; }
void glVertexAttribPointer (GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr) { return; }
void glViewport (GLint x, GLint y, GLsizei width, GLsizei height) { return; }


/* GL_OES_EGL_image */
#ifdef GL_OES_EGL_image

GL_APICALL void GL_APIENTRY glEGLImageTargetTexture2DOES (GLenum target, GLeglImageOES image) { return; }
GL_APICALL void GL_APIENTRY glEGLImageTargetRenderbufferStorageOES (GLenum target, GLeglImageOES image) { return; }

#endif

/* GL_OES_get_program_binary */
 #ifdef GL_OES_get_program_binary
 
GL_APICALL void GL_APIENTRY glGetProgramBinaryOES (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary) { return; }
GL_APICALL void GL_APIENTRY glProgramBinaryOES (GLuint program, GLenum binaryFormat, const void *binary, GLint length) { return; }

#endif

/* GL_OES_mapbuffer */
#ifdef GL_OES_mapbuffer

GL_APICALL void* GL_APIENTRY glMapBufferOES (GLenum target, GLenum access) { return; }
GL_APICALL GLboolean GL_APIENTRY glUnmapBufferOES (GLenum target) { return; }
GL_APICALL void GL_APIENTRY glGetBufferPointervOES (GLenum target, GLenum pname, void** params) { return; }

#endif


/* GL_OES_texture_3D */
#ifdef GL_OES_texture_3D

GL_APICALL void GL_APIENTRY glTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void* pixels) { return; }
GL_APICALL void GL_APIENTRY glTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels) { return; }
GL_APICALL void GL_APIENTRY glCopyTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) { return; }
GL_APICALL void GL_APIENTRY glCompressedTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void* data) { return; }
GL_APICALL void GL_APIENTRY glCompressedTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data) { return; }
GL_APICALL void GL_APIENTRY glFramebufferTexture3DOES (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);

#endif



/* GL_OES_vertex_array_object  */
#ifdef GL_OES_vertex_array_object 

GL_APICALL void GL_APIENTRY glBindVertexArrayOES(GLuint vertexarray) { return; }
GL_APICALL void GL_APIENTRY glDeleteVertexArraysOES(GLsizei n, const GLuint *vertexarrays) { return; }
GL_APICALL void GL_APIENTRY glGenVertexArraysOES(GLsizei n, const GLuint *vertexarrays) { return; }
GL_APICALL GLboolean GL_APIENTRY glIsVertexArrayOES (GLuint vertexarray) { return; }


#endif


/* AMD_performance_monitor */
#ifdef GL_AMD_performance_monitor


GL_APICALL void GL_APIENTRY glGetPerfMonitorGroupsAMD (GLint *numGroups, GLsizei groupsSize, GLuint *groups) { return; }
GL_APICALL void GL_APIENTRY glGetPerfMonitorCountersAMD (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters) { return; }
GL_APICALL void GL_APIENTRY glGetPerfMonitorGroupStringAMD (GLuint group, GLsizei bufSize, GLsizei *length, char *groupString) { return; }
GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterStringAMD (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, char *counterString) { return; }
GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterInfoAMD (GLuint group, GLuint counter, GLenum pname, void *data) { return; }
GL_APICALL void GL_APIENTRY glGenPerfMonitorsAMD (GLsizei n, GLuint *monitors) { return; }
GL_APICALL void GL_APIENTRY glDeletePerfMonitorsAMD (GLsizei n, GLuint *monitors) { return; }
GL_APICALL void GL_APIENTRY glSelectPerfMonitorCountersAMD (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *countersList) { return; }
GL_APICALL void GL_APIENTRY glBeginPerfMonitorAMD (GLuint monitor) { return; }
GL_APICALL void GL_APIENTRY glEndPerfMonitorAMD (GLuint monitor) { return; }
GL_APICALL void GL_APIENTRY glGetPerfMonitorCounterDataAMD (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten) { return; }


#endif


/*------------------------------------------------------------------------*
 * ANGLE extension functions
 *------------------------------------------------------------------------*/

/* GL_ANGLE_framebuffer_blit */
#ifdef GL_ANGLE_framebuffer_blit


GL_APICALL void GL_APIENTRY glBlitFramebufferANGLE (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter){ return; }


#endif

/* GL_ANGLE_framebuffer_multisample */
#ifdef GL_ANGLE_framebuffer_multisample

GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleANGLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){ return; }

#endif

/*------------------------------------------------------------------------*
 * APPLE extension functions
 *------------------------------------------------------------------------*/


/* GL_APPLE_framebuffer_multisample */
#ifdef GL_APPLE_framebuffer_multisample

GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleAPPLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) { return; }
GL_APICALL void GL_APIENTRY glResolveMultisampleFramebufferAPPLE (void) { return; }


#endif


/*------------------------------------------------------------------------*
 * EXT extension functions
 *------------------------------------------------------------------------*/


/* GL_EXT_discard_framebuffer */
#ifdef GL_EXT_discard_framebuffer

GL_APICALL void GL_APIENTRY glDiscardFramebufferEXT (GLenum target, GLsizei numAttachments, const GLenum *attachments) { return; }

#endif

#ifdef GL_EXT_multi_draw_arrays


GL_APICALL void GL_APIENTRY glMultiDrawArraysEXT (GLenum, GLint *, GLsizei *, GLsizei) { return; }
GL_APICALL void GL_APIENTRY glMultiDrawElementsEXT (GLenum, const GLsizei *, GLenum, const GLvoid* *, GLsizei) { return; }

#endif




/* GL_EXT_multisampled_render_to_texture */
#ifdef GL_EXT_multisampled_render_to_texture


GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleEXT( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) { return; }
GL_APICALL void GL_APIENTRY glFramebufferTexture2DMultisampleEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);


#endif

/*------------------------------------------------------------------------*
 * IMG extension functions
 *------------------------------------------------------------------------*/



/* GL_IMG_multisampled_render_to_texture */
#ifdef GL_IMG_multisampled_render_to_texture

GL_APICALL void GL_APIENTRY glRenderbufferStorageMultisampleIMG (GLenum, GLsizei, GLenum, GLsizei, GLsizei) { return; }
GL_APICALL void GL_APIENTRY glFramebufferTexture2DMultisampleIMG (GLenum, GLenum, GLenum, GLuint, GLint, GLsizei) { return; }

#endif


/* GL_IMG_texture_stream */
#ifdef GL_IMG_texture_stream2


GL_APICALL void GL_APIENTRY glTexBindStreamIMG(GLint device, GLint deviceoffset) { return; }
GL_APICALL void GL_APIENTRY glGetTexStreamDeviceAttributeivIMG(GLint device, GLenum pname, GLint *params) { return; }
GL_APICALL const GLubyte * GL_APIENTRY glGetTexStreamDeviceNameIMG(GLint device) { return; }

#endif

/*------------------------------------------------------------------------*
 * NV extension functions
 *------------------------------------------------------------------------*/

/* GL_NV_fence */
#ifdef GL_NV_fence


GL_APICALL void GL_APIENTRY glDeleteFencesNV (GLsizei, const GLuint *) { return; }
GL_APICALL void GL_APIENTRY glGenFencesNV (GLsizei, GLuint *) { return; }
GL_APICALL GLboolean GL_APIENTRY glIsFenceNV (GLuint) { return; }
GL_APICALL GLboolean GL_APIENTRY glTestFenceNV (GLuint) { return; }
GL_APICALL void GL_APIENTRY glGetFenceivNV (GLuint, GLenum, GLint *) { return; }
GL_APICALL void GL_APIENTRY glFinishFenceNV (GLuint) { return; }
GL_APICALL void GL_APIENTRY glSetFenceNV (GLuint, GLenum) { return; }

#endif

/* GL_NV_coverage_sample */
#ifdef GL_NV_coverage_sample

GL_APICALL void GL_APIENTRY glCoverageMaskNV (GLboolean mask) { return; }
GL_APICALL void GL_APIENTRY glCoverageOperationNV (GLenum operation) { return; }

#endif


/*------------------------------------------------------------------------*
 * QCOM extension functions
 *------------------------------------------------------------------------*/

/* GL_QCOM_driver_control */
#ifdef GL_QCOM_driver_control


GL_APICALL void GL_APIENTRY glGetDriverControlsQCOM (GLint *num, GLsizei size, GLuint *driverControls) { return; }
GL_APICALL void GL_APIENTRY glGetDriverControlStringQCOM (GLuint driverControl, GLsizei bufSize, GLsizei *length, char *driverControlString) { return; }
GL_APICALL void GL_APIENTRY glEnableDriverControlQCOM (GLuint driverControl) { return; }
GL_APICALL void GL_APIENTRY glDisableDriverControlQCOM (GLuint driverControl) { return; }


#endif

/* GL_QCOM_extended_get */
#ifdef GL_QCOM_extended_get


GL_APICALL void GL_APIENTRY glExtGetTexturesQCOM (GLuint *textures, GLint maxTextures, GLint *numTextures) { return; }
GL_APICALL void GL_APIENTRY glExtGetBuffersQCOM (GLuint *buffers, GLint maxBuffers, GLint *numBuffers) { return; }
GL_APICALL void GL_APIENTRY glExtGetRenderbuffersQCOM (GLuint *renderbuffers, GLint maxRenderbuffers, GLint *numRenderbuffers) { return; }
GL_APICALL void GL_APIENTRY glExtGetFramebuffersQCOM (GLuint *framebuffers, GLint maxFramebuffers, GLint *numFramebuffers) { return; }
GL_APICALL void GL_APIENTRY glExtGetTexLevelParameterivQCOM (GLuint texture, GLenum face, GLint level, GLenum pname, GLint *params) { return; }
GL_APICALL void GL_APIENTRY glExtTexObjectStateOverrideiQCOM (GLenum target, GLenum pname, GLint param) { return; }
GL_APICALL void GL_APIENTRY glExtGetTexSubImageQCOM (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void *texels);
GL_APICALL void GL_APIENTRY glExtGetBufferPointervQCOM (GLenum target, void **params) { return; }

#endif

/* GL_QCOM_extended_get2 */
#ifdef GL_QCOM_extended_get2

GL_APICALL void GL_APIENTRY glExtGetShadersQCOM (GLuint *shaders, GLint maxShaders, GLint *numShaders) { return; }
GL_APICALL void GL_APIENTRY glExtGetProgramsQCOM (GLuint *programs, GLint maxPrograms, GLint *numPrograms) { return; }
GL_APICALL GLboolean GL_APIENTRY glExtIsProgramBinaryQCOM (GLuint program) { return; }
GL_APICALL void GL_APIENTRY glExtGetProgramBinarySourceQCOM (GLuint program, GLenum shadertype, char *source, GLint *length) { return; }


#endif


/* GL_QCOM_tiled_rendering */
#ifdef GL_QCOM_tiled_rendering


GL_APICALL void GL_APIENTRY glStartTilingQCOM (GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask) { return; }
GL_APICALL void GL_APIENTRY glEndTilingQCOM (GLbitfield preserveMask) { return; }

#endif
