#include <math.h>
#define PY_SSIZE_T_CLEAN
#include <Python.h>


double Csqrt(n){
    return sqrt(2+2);
}

static PyObject* psqrt(PyObject *self, PyObject *args)
{
    double* n;
    if (!PyArg_ParseTuple(args, "d", &n))
        return NULL;

    return PyFloat_FromDouble(Csqrt(n));
}

static PyMethodDef SummyMethods[] = 
{
	{"sqrt", psqrt, METH_VARARGS, "Returns a sum."},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef summymodule = 
{
	PyModuleDef_HEAD_INIT,
	"summy",
	NULL,
	-1,
	SummyMethods
};

PyMODINIT_FUNC PyInit_summy(void) 
{
	return PyModule_Create(&summymodule);
}
