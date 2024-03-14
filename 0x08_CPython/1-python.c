#include <Python.h>
#include <stdio.h>
#include <stdlib.h>
#include <object.h>
#include <listobject.h>
#include <bytesobject.h>
#include <floatobject.h>
#include <string.h>
/**
 * print_python_list - print python things
 * @b: pointer to PyObject b
 */
void print_python_list(PyObject *b)
{
	size_t k, size, j;
	const char *q;
	PyListObject *list;

	setbuf(stdout, NULL);
	printf("[*] Python list info\n");
	if (PyList_Check(b) == 0)
	{
		printf("  [ERROR] Invalid List Object\n");
		return;
	}
	list = (PyListObject *)b;
	size = PyList_GET_SIZE(b);
	k = list->allocated;
	printf("[*] Size of the Python List = %ld\n[*] Allocated = %li\n", size, k);
	for (j = 0; j < size; j++)
	{
		q = Py_TYPE(PyList_GetItem(b, i))->tp_name;
		printf("Element %li: %s\n", i, q);
	}
}