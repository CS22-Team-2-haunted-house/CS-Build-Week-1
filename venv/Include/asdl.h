#ifndef Py_ASDL_H
#define Py_ASDL_H

typedef PyObject * identifier;
typedef PyObject * string;
typedef PyObject * bytes;
typedef PyObject * object;
typedef PyObject * singleton;
typedef PyObject * constant;

/* It would be nice if the code generated by asdl_c.py was completely
   independent of Python, but it is a goal the requires too much work
   at this stage.  So, for example, I'll represent identifiers as
   interned Python strings.
*/

/* XXX A sequence should be typed so that its use can be typechecked. */

typedef struct {
    Py_ssize_t size;
    void *elements[1];
} asdl_seq;

typedef struct {
    Py_ssize_t size;
    int elements[1];
} asdl_int_seq;

asdl_seq *_Py_asdl_seq_new(Py_ssize_t size, PyArena *arena);
asdl_int_seq *_Py_asdl_int_seq_new(Py_ssize_t size, PyArena *arena);

#define asdl_seq_GET(S, I) (S)->elements[(I)]
#define asdl_seq_LEN(S) ((S) == NULL ? 0 : (S)->size)
#ifdef Py_DEBUG
#define asdl_seq_SET(S, I, V) \
    do { \
        Py_ssize_t _asdl_i = (I); \
        assert((S) != NULL); \
<<<<<<< HEAD
        assert(_asdl_i < (S)->size); \
=======
        assert(0 <= _asdl_i && _asdl_i < (S)->size); \
>>>>>>> 716b15a33aed978ded8a6bde17855cb6c6aa7f78
        (S)->elements[_asdl_i] = (V); \
    } while (0)
#else
#define asdl_seq_SET(S, I, V) (S)->elements[I] = (V)
#endif

#endif /* !Py_ASDL_H */
