#ifndef MYPYC_NATIVE_H
#define MYPYC_NATIVE_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
static tuple_T2OO tuple_undefined_T2OO = { NULL, NULL };
#endif

#ifndef MYPYC_DECLARED_tuple_T2II
#define MYPYC_DECLARED_tuple_T2II
typedef struct tuple_T2II {
    CPyTagged f0;
    CPyTagged f1;
} tuple_T2II;
static tuple_T2II tuple_undefined_T2II = { CPY_INT_TAG, CPY_INT_TAG };
#endif

#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
static tuple_T3OOO tuple_undefined_T3OOO = { NULL, NULL, NULL };
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} sudoku___SudokuErrorObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_canvas;
    CPyTagged _col;
    PyObject *_game;
    PyObject *_parent;
    CPyTagged _row;
} sudoku___SudokuUIObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_board;
} sudoku___SudokuBoardObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_board_file;
    PyObject *_game_over;
    PyObject *_puzzle;
    PyObject *_start_puzzle;
} sudoku___SudokuGameObject;

#endif
