#ifndef Py_AST_H
#define Py_AST_H
#ifdef __cplusplus
extern "C" {
#endif

<<<<<<< HEAD
=======
#include "Python-ast.h"   /* mod_ty */
#include "node.h"         /* node */

>>>>>>> 716b15a33aed978ded8a6bde17855cb6c6aa7f78
PyAPI_FUNC(int) PyAST_Validate(mod_ty);
PyAPI_FUNC(mod_ty) PyAST_FromNode(
    const node *n,
    PyCompilerFlags *flags,
    const char *filename,       /* decoded from the filesystem encoding */
    PyArena *arena);
PyAPI_FUNC(mod_ty) PyAST_FromNodeObject(
    const node *n,
    PyCompilerFlags *flags,
    PyObject *filename,
    PyArena *arena);

#ifndef Py_LIMITED_API

/* _PyAST_ExprAsUnicode is defined in ast_unparse.c */
PyAPI_FUNC(PyObject *) _PyAST_ExprAsUnicode(expr_ty);

<<<<<<< HEAD
=======
/* Return the borrowed reference to the first literal string in the
   sequence of statemnts or NULL if it doesn't start from a literal string.
   Doesn't set exception. */
PyAPI_FUNC(PyObject *) _PyAST_GetDocString(asdl_seq *);

>>>>>>> 716b15a33aed978ded8a6bde17855cb6c6aa7f78
#endif /* !Py_LIMITED_API */

#ifdef __cplusplus
}
#endif
#endif /* !Py_AST_H */
