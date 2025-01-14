/* File object interface (what's left of it -- see io.py) */

#ifndef Py_FILEOBJECT_H
#define Py_FILEOBJECT_H
#ifdef __cplusplus
extern "C" {
#endif

#define PY_STDIOTEXTMODE "b"

PyAPI_FUNC(PyObject *) PyFile_FromFd(int, const char *, const char *, int,
                                     const char *, const char *,
                                     const char *, int);
PyAPI_FUNC(PyObject *) PyFile_GetLine(PyObject *, int);
PyAPI_FUNC(int) PyFile_WriteObject(PyObject *, PyObject *, int);
PyAPI_FUNC(int) PyFile_WriteString(const char *, PyObject *);
PyAPI_FUNC(int) PyObject_AsFileDescriptor(PyObject *);
<<<<<<< HEAD
#ifndef Py_LIMITED_API
PyAPI_FUNC(char *) Py_UniversalNewlineFgets(char *, int, FILE*, PyObject *);
#endif
=======
>>>>>>> 716b15a33aed978ded8a6bde17855cb6c6aa7f78

/* The default encoding used by the platform file system APIs
   If non-NULL, this is different than the default encoding for strings
*/
PyAPI_DATA(const char *) Py_FileSystemDefaultEncoding;
<<<<<<< HEAD
#if !defined(Py_LIMITED_API) || Py_LIMITED_API+0 >= 0x03060000
PyAPI_DATA(const char *) Py_FileSystemDefaultEncodeErrors;
#endif
PyAPI_DATA(int) Py_HasFileSystemDefaultEncoding;

#if !defined(Py_LIMITED_API) || Py_LIMITED_API+0 >= 0x03070000
PyAPI_DATA(int) Py_UTF8Mode;
#endif

/* Internal API

   The std printer acts as a preliminary sys.stderr until the new io
   infrastructure is in place. */
#ifndef Py_LIMITED_API
PyAPI_FUNC(PyObject *) PyFile_NewStdPrinter(int);
PyAPI_DATA(PyTypeObject) PyStdPrinter_Type;
#endif /* Py_LIMITED_API */

=======
PyAPI_DATA(int) Py_HasFileSystemDefaultEncoding;

>>>>>>> 716b15a33aed978ded8a6bde17855cb6c6aa7f78
/* A routine to check if a file descriptor can be select()-ed. */
#ifdef _MSC_VER
    /* On Windows, any socket fd can be select()-ed, no matter how high */
    #define _PyIsSelectable_fd(FD) (1)
#else
    #define _PyIsSelectable_fd(FD) ((unsigned int)(FD) < (unsigned int)FD_SETSIZE)
#endif

<<<<<<< HEAD
=======
#ifndef Py_LIMITED_API
#  define Py_CPYTHON_FILEOBJECT_H
#  include  "cpython/fileobject.h"
#  undef Py_CPYTHON_FILEOBJECT_H
#endif

>>>>>>> 716b15a33aed978ded8a6bde17855cb6c6aa7f78
#ifdef __cplusplus
}
#endif
#endif /* !Py_FILEOBJECT_H */
