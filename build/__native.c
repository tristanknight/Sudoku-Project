#include "CPy.c"
#include "getargs.c"
#include "__native.h"
#include "__native_internal.h"

PyMemberDef SudokuError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef SudokuError_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef SudokuError_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_SudokuError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SudokuError",
    .tp_getset = SudokuError_getseters,
    .tp_methods = SudokuError_methods,
    .tp_members = SudokuError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_SudokuError_template = &CPyType_SudokuError_template_;


static int
SudokuUI_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_SudokuUI_____init__(self, args, kwds) != NULL ? 0 : -1;
}
PyMemberDef SudokuUI_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(sudoku___SudokuUIObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(sudoku___SudokuUIObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *SudokuUI_setup(PyTypeObject *type);
PyObject *CPyDef_SudokuUI(PyObject *cpy_r_parent, PyObject *cpy_r_game);

static PyObject *
SudokuUI_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_SudokuUI) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return SudokuUI_setup(type);
}

static int
SudokuUI_traverse(sudoku___SudokuUIObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_canvas);
    if (CPyTagged_CheckLong(self->_col)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_col));
    }
    Py_VISIT(self->_game);
    Py_VISIT(self->_parent);
    if (CPyTagged_CheckLong(self->_row)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_row));
    }
    Py_VISIT(*((PyObject **)((char *)self + sizeof(sudoku___SudokuUIObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(sudoku___SudokuUIObject))));
    return 0;
}

static int
SudokuUI_clear(sudoku___SudokuUIObject *self)
{
    Py_CLEAR(self->_canvas);
    if (CPyTagged_CheckLong(self->_col)) {
        CPyTagged __tmp = self->_col;
        self->_col = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_game);
    Py_CLEAR(self->_parent);
    if (CPyTagged_CheckLong(self->_row)) {
        CPyTagged __tmp = self->_row;
        self->_row = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(sudoku___SudokuUIObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(sudoku___SudokuUIObject))));
    return 0;
}

static void
SudokuUI_dealloc(sudoku___SudokuUIObject *self)
{
    PyObject_GC_UnTrack(self);
    SudokuUI_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
}

PyObject *native_SudokuUI_getcanvas(sudoku___SudokuUIObject *self)
{
    if (self->_canvas == NULL) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'canvas' of 'SudokuUI' undefined");
    } else {
        CPy_INCREF(self->_canvas);
    }
    return self->_canvas;
}

bool native_SudokuUI_setcanvas(sudoku___SudokuUIObject *self, PyObject *value)
{
    if (self->_canvas != NULL) {
        CPy_DecRef(self->_canvas);
    }
    self->_canvas = value;
    return 1;
}

CPyTagged native_SudokuUI_getcol(sudoku___SudokuUIObject *self)
{
    if (self->_col == CPY_INT_TAG) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'col' of 'SudokuUI' undefined");
    } else {
        CPyTagged_IncRef(self->_col);
    }
    return self->_col;
}

bool native_SudokuUI_setcol(sudoku___SudokuUIObject *self, CPyTagged value)
{
    if (self->_col != CPY_INT_TAG) {
        CPyTagged_DecRef(self->_col);
    }
    self->_col = value;
    return 1;
}

PyObject *native_SudokuUI_getgame(sudoku___SudokuUIObject *self)
{
    if (self->_game == NULL) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'game' of 'SudokuUI' undefined");
    } else {
        CPy_INCREF(self->_game);
    }
    return self->_game;
}

bool native_SudokuUI_setgame(sudoku___SudokuUIObject *self, PyObject *value)
{
    if (self->_game != NULL) {
        CPy_DecRef(self->_game);
    }
    self->_game = value;
    return 1;
}

PyObject *native_SudokuUI_getparent(sudoku___SudokuUIObject *self)
{
    if (self->_parent == NULL) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'parent' of 'SudokuUI' undefined");
    } else {
        CPy_INCREF(self->_parent);
    }
    return self->_parent;
}

bool native_SudokuUI_setparent(sudoku___SudokuUIObject *self, PyObject *value)
{
    if (self->_parent != NULL) {
        CPy_DecRef(self->_parent);
    }
    self->_parent = value;
    return 1;
}

CPyTagged native_SudokuUI_getrow(sudoku___SudokuUIObject *self)
{
    if (self->_row == CPY_INT_TAG) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'row' of 'SudokuUI' undefined");
    } else {
        CPyTagged_IncRef(self->_row);
    }
    return self->_row;
}

bool native_SudokuUI_setrow(sudoku___SudokuUIObject *self, CPyTagged value)
{
    if (self->_row != CPY_INT_TAG) {
        CPyTagged_DecRef(self->_row);
    }
    self->_row = value;
    return 1;
}

static CPyVTableItem SudokuUI_vtable[11];
static bool
CPyDef_SudokuUI_trait_vtable_setup(void)
{
    CPyVTableItem SudokuUI_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_SudokuUI_____init__,
        (CPyVTableItem)CPyDef_SudokuUI____init_ui,
        (CPyVTableItem)CPyDef_SudokuUI____draw_grid,
        (CPyVTableItem)CPyDef_SudokuUI___find_square,
        (CPyVTableItem)CPyDef_SudokuUI___check_conflict,
        (CPyVTableItem)CPyDef_SudokuUI____draw_puzzle,
        (CPyVTableItem)CPyDef_SudokuUI____clear_answers,
        (CPyVTableItem)CPyDef_SudokuUI____cell_clicked,
        (CPyVTableItem)CPyDef_SudokuUI____draw_cursor,
        (CPyVTableItem)CPyDef_SudokuUI____key_pressed,
        (CPyVTableItem)CPyDef_SudokuUI____draw_victory,
    };
    memcpy(SudokuUI_vtable, SudokuUI_vtable_scratch, sizeof(SudokuUI_vtable));
    return 1;
}

static PyObject *
SudokuUI_getcanvas(sudoku___SudokuUIObject *self, void *closure);
static int
SudokuUI_setcanvas(sudoku___SudokuUIObject *self, PyObject *value, void *closure);
static PyObject *
SudokuUI_getcol(sudoku___SudokuUIObject *self, void *closure);
static int
SudokuUI_setcol(sudoku___SudokuUIObject *self, PyObject *value, void *closure);
static PyObject *
SudokuUI_getgame(sudoku___SudokuUIObject *self, void *closure);
static int
SudokuUI_setgame(sudoku___SudokuUIObject *self, PyObject *value, void *closure);
static PyObject *
SudokuUI_getparent(sudoku___SudokuUIObject *self, void *closure);
static int
SudokuUI_setparent(sudoku___SudokuUIObject *self, PyObject *value, void *closure);
static PyObject *
SudokuUI_getrow(sudoku___SudokuUIObject *self, void *closure);
static int
SudokuUI_setrow(sudoku___SudokuUIObject *self, PyObject *value, void *closure);

static PyGetSetDef SudokuUI_getseters[] = {
    {"canvas",
     (getter)SudokuUI_getcanvas, (setter)SudokuUI_setcanvas,
     NULL, NULL},
    {"col",
     (getter)SudokuUI_getcol, (setter)SudokuUI_setcol,
     NULL, NULL},
    {"game",
     (getter)SudokuUI_getgame, (setter)SudokuUI_setgame,
     NULL, NULL},
    {"parent",
     (getter)SudokuUI_getparent, (setter)SudokuUI_setparent,
     NULL, NULL},
    {"row",
     (getter)SudokuUI_getrow, (setter)SudokuUI_setrow,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef SudokuUI_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_SudokuUI_____init__,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_init_ui",
     (PyCFunction)CPyPy_SudokuUI____init_ui,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_draw_grid",
     (PyCFunction)CPyPy_SudokuUI____draw_grid,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"find_square",
     (PyCFunction)CPyPy_SudokuUI___find_square,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"check_conflict",
     (PyCFunction)CPyPy_SudokuUI___check_conflict,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_draw_puzzle",
     (PyCFunction)CPyPy_SudokuUI____draw_puzzle,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_clear_answers",
     (PyCFunction)CPyPy_SudokuUI____clear_answers,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_cell_clicked",
     (PyCFunction)CPyPy_SudokuUI____cell_clicked,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_draw_cursor",
     (PyCFunction)CPyPy_SudokuUI____draw_cursor,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_key_pressed",
     (PyCFunction)CPyPy_SudokuUI____key_pressed,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_draw_victory",
     (PyCFunction)CPyPy_SudokuUI____draw_victory,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_SudokuUI_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SudokuUI",
    .tp_new = SudokuUI_new,
    .tp_dealloc = (destructor)SudokuUI_dealloc,
    .tp_traverse = (traverseproc)SudokuUI_traverse,
    .tp_clear = (inquiry)SudokuUI_clear,
    .tp_getset = SudokuUI_getseters,
    .tp_methods = SudokuUI_methods,
    .tp_init = SudokuUI_init,
    .tp_members = SudokuUI_members,
    .tp_basicsize = sizeof(sudoku___SudokuUIObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(sudoku___SudokuUIObject),
    .tp_weaklistoffset = sizeof(sudoku___SudokuUIObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_SudokuUI_template = &CPyType_SudokuUI_template_;

static PyObject *
SudokuUI_setup(PyTypeObject *type)
{
    sudoku___SudokuUIObject *self;
    self = (sudoku___SudokuUIObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = SudokuUI_vtable;
    self->_canvas = NULL;
    self->_col = CPY_INT_TAG;
    self->_game = NULL;
    self->_parent = NULL;
    self->_row = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_SudokuUI(PyObject *cpy_r_parent, PyObject *cpy_r_game)
{
    PyObject *self = SudokuUI_setup(CPyType_SudokuUI);
    if (self == NULL)
        return NULL;
    char res = CPyDef_SudokuUI_____init__(self, cpy_r_parent, cpy_r_game);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
SudokuUI_getcanvas(sudoku___SudokuUIObject *self, void *closure)
{
    if (self->_canvas == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'canvas' of 'SudokuUI' undefined");
        return NULL;
    }
    CPy_INCREF(self->_canvas);
    PyObject *retval = self->_canvas;
    return retval;
}

static int
SudokuUI_setcanvas(sudoku___SudokuUIObject *self, PyObject *value, void *closure)
{
    if (self->_canvas != NULL) {
        CPy_DecRef(self->_canvas);
    }
    if (value != NULL) {
        PyObject *tmp = value;
        CPy_INCREF(tmp);
        self->_canvas = tmp;
    } else
        self->_canvas = NULL;
    return 0;
}

static PyObject *
SudokuUI_getcol(sudoku___SudokuUIObject *self, void *closure)
{
    if (self->_col == CPY_INT_TAG) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'col' of 'SudokuUI' undefined");
        return NULL;
    }
    CPyTagged_IncRef(self->_col);
    PyObject *retval = CPyTagged_StealAsObject(self->_col);
    return retval;
}

static int
SudokuUI_setcol(sudoku___SudokuUIObject *self, PyObject *value, void *closure)
{
    if (self->_col != CPY_INT_TAG) {
        CPyTagged_DecRef(self->_col);
    }
    if (value != NULL) {
        CPyTagged tmp;
        if (likely(PyLong_Check(value)))
            tmp = CPyTagged_FromObject(value);
        else {
            CPy_TypeError("int", value);
            return -1;
        }
        CPyTagged_IncRef(tmp);
        self->_col = tmp;
    } else
        self->_col = CPY_INT_TAG;
    return 0;
}

static PyObject *
SudokuUI_getgame(sudoku___SudokuUIObject *self, void *closure)
{
    if (self->_game == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'game' of 'SudokuUI' undefined");
        return NULL;
    }
    CPy_INCREF(self->_game);
    PyObject *retval = self->_game;
    return retval;
}

static int
SudokuUI_setgame(sudoku___SudokuUIObject *self, PyObject *value, void *closure)
{
    if (self->_game != NULL) {
        CPy_DecRef(self->_game);
    }
    if (value != NULL) {
        PyObject *tmp = value;
        CPy_INCREF(tmp);
        self->_game = tmp;
    } else
        self->_game = NULL;
    return 0;
}

static PyObject *
SudokuUI_getparent(sudoku___SudokuUIObject *self, void *closure)
{
    if (self->_parent == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'parent' of 'SudokuUI' undefined");
        return NULL;
    }
    CPy_INCREF(self->_parent);
    PyObject *retval = self->_parent;
    return retval;
}

static int
SudokuUI_setparent(sudoku___SudokuUIObject *self, PyObject *value, void *closure)
{
    if (self->_parent != NULL) {
        CPy_DecRef(self->_parent);
    }
    if (value != NULL) {
        PyObject *tmp = value;
        CPy_INCREF(tmp);
        self->_parent = tmp;
    } else
        self->_parent = NULL;
    return 0;
}

static PyObject *
SudokuUI_getrow(sudoku___SudokuUIObject *self, void *closure)
{
    if (self->_row == CPY_INT_TAG) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'row' of 'SudokuUI' undefined");
        return NULL;
    }
    CPyTagged_IncRef(self->_row);
    PyObject *retval = CPyTagged_StealAsObject(self->_row);
    return retval;
}

static int
SudokuUI_setrow(sudoku___SudokuUIObject *self, PyObject *value, void *closure)
{
    if (self->_row != CPY_INT_TAG) {
        CPyTagged_DecRef(self->_row);
    }
    if (value != NULL) {
        CPyTagged tmp;
        if (likely(PyLong_Check(value)))
            tmp = CPyTagged_FromObject(value);
        else {
            CPy_TypeError("int", value);
            return -1;
        }
        CPyTagged_IncRef(tmp);
        self->_row = tmp;
    } else
        self->_row = CPY_INT_TAG;
    return 0;
}

static int
SudokuBoard_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_SudokuBoard_____init__(self, args, kwds) != NULL ? 0 : -1;
}
static PyObject *SudokuBoard_setup(PyTypeObject *type);
PyObject *CPyDef_SudokuBoard(PyObject *cpy_r_board_file);

static PyObject *
SudokuBoard_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_SudokuBoard) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return SudokuBoard_setup(type);
}

static int
SudokuBoard_traverse(sudoku___SudokuBoardObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_board);
    return 0;
}

static int
SudokuBoard_clear(sudoku___SudokuBoardObject *self)
{
    Py_CLEAR(self->_board);
    return 0;
}

static void
SudokuBoard_dealloc(sudoku___SudokuBoardObject *self)
{
    PyObject_GC_UnTrack(self);
    SudokuBoard_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
}

PyObject *native_SudokuBoard_getboard(sudoku___SudokuBoardObject *self)
{
    if (self->_board == NULL) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'board' of 'SudokuBoard' undefined");
    } else {
        CPy_INCREF(self->_board);
    }
    return self->_board;
}

bool native_SudokuBoard_setboard(sudoku___SudokuBoardObject *self, PyObject *value)
{
    if (self->_board != NULL) {
        CPy_DecRef(self->_board);
    }
    self->_board = value;
    return 1;
}

static CPyVTableItem SudokuBoard_vtable[2];
static bool
CPyDef_SudokuBoard_trait_vtable_setup(void)
{
    CPyVTableItem SudokuBoard_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_SudokuBoard_____init__,
        (CPyVTableItem)CPyDef_SudokuBoard____create_board,
    };
    memcpy(SudokuBoard_vtable, SudokuBoard_vtable_scratch, sizeof(SudokuBoard_vtable));
    return 1;
}

static PyObject *
SudokuBoard_getboard(sudoku___SudokuBoardObject *self, void *closure);
static int
SudokuBoard_setboard(sudoku___SudokuBoardObject *self, PyObject *value, void *closure);

static PyGetSetDef SudokuBoard_getseters[] = {
    {"board",
     (getter)SudokuBoard_getboard, (setter)SudokuBoard_setboard,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef SudokuBoard_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_SudokuBoard_____init__,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_create_board",
     (PyCFunction)CPyPy_SudokuBoard____create_board,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_SudokuBoard_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SudokuBoard",
    .tp_new = SudokuBoard_new,
    .tp_dealloc = (destructor)SudokuBoard_dealloc,
    .tp_traverse = (traverseproc)SudokuBoard_traverse,
    .tp_clear = (inquiry)SudokuBoard_clear,
    .tp_getset = SudokuBoard_getseters,
    .tp_methods = SudokuBoard_methods,
    .tp_init = SudokuBoard_init,
    .tp_basicsize = sizeof(sudoku___SudokuBoardObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_SudokuBoard_template = &CPyType_SudokuBoard_template_;

static PyObject *
SudokuBoard_setup(PyTypeObject *type)
{
    sudoku___SudokuBoardObject *self;
    self = (sudoku___SudokuBoardObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = SudokuBoard_vtable;
    self->_board = NULL;
    return (PyObject *)self;
}

PyObject *CPyDef_SudokuBoard(PyObject *cpy_r_board_file)
{
    PyObject *self = SudokuBoard_setup(CPyType_SudokuBoard);
    if (self == NULL)
        return NULL;
    char res = CPyDef_SudokuBoard_____init__(self, cpy_r_board_file);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
SudokuBoard_getboard(sudoku___SudokuBoardObject *self, void *closure)
{
    if (self->_board == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'board' of 'SudokuBoard' undefined");
        return NULL;
    }
    CPy_INCREF(self->_board);
    PyObject *retval = self->_board;
    return retval;
}

static int
SudokuBoard_setboard(sudoku___SudokuBoardObject *self, PyObject *value, void *closure)
{
    if (self->_board != NULL) {
        CPy_DecRef(self->_board);
    }
    if (value != NULL) {
        PyObject *tmp = value;
        CPy_INCREF(tmp);
        self->_board = tmp;
    } else
        self->_board = NULL;
    return 0;
}

static int
SudokuGame_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_SudokuGame_____init__(self, args, kwds) != NULL ? 0 : -1;
}
static PyObject *SudokuGame_setup(PyTypeObject *type);
PyObject *CPyDef_SudokuGame(PyObject *cpy_r_board_file);

static PyObject *
SudokuGame_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_SudokuGame) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return SudokuGame_setup(type);
}

static int
SudokuGame_traverse(sudoku___SudokuGameObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_board_file);
    Py_VISIT(self->_game_over);
    Py_VISIT(self->_puzzle);
    Py_VISIT(self->_start_puzzle);
    return 0;
}

static int
SudokuGame_clear(sudoku___SudokuGameObject *self)
{
    Py_CLEAR(self->_board_file);
    Py_CLEAR(self->_game_over);
    Py_CLEAR(self->_puzzle);
    Py_CLEAR(self->_start_puzzle);
    return 0;
}

static void
SudokuGame_dealloc(sudoku___SudokuGameObject *self)
{
    PyObject_GC_UnTrack(self);
    SudokuGame_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
}

PyObject *native_SudokuGame_getboard_file(sudoku___SudokuGameObject *self)
{
    if (self->_board_file == NULL) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'board_file' of 'SudokuGame' undefined");
    } else {
        CPy_INCREF(self->_board_file);
    }
    return self->_board_file;
}

bool native_SudokuGame_setboard_file(sudoku___SudokuGameObject *self, PyObject *value)
{
    if (self->_board_file != NULL) {
        CPy_DecRef(self->_board_file);
    }
    self->_board_file = value;
    return 1;
}

PyObject *native_SudokuGame_getgame_over(sudoku___SudokuGameObject *self)
{
    if (self->_game_over == NULL) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'game_over' of 'SudokuGame' undefined");
    } else {
        CPy_INCREF(self->_game_over);
    }
    return self->_game_over;
}

bool native_SudokuGame_setgame_over(sudoku___SudokuGameObject *self, PyObject *value)
{
    if (self->_game_over != NULL) {
        CPy_DecRef(self->_game_over);
    }
    self->_game_over = value;
    return 1;
}

PyObject *native_SudokuGame_getpuzzle(sudoku___SudokuGameObject *self)
{
    if (self->_puzzle == NULL) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'puzzle' of 'SudokuGame' undefined");
    } else {
        CPy_INCREF(self->_puzzle);
    }
    return self->_puzzle;
}

bool native_SudokuGame_setpuzzle(sudoku___SudokuGameObject *self, PyObject *value)
{
    if (self->_puzzle != NULL) {
        CPy_DecRef(self->_puzzle);
    }
    self->_puzzle = value;
    return 1;
}

PyObject *native_SudokuGame_getstart_puzzle(sudoku___SudokuGameObject *self)
{
    if (self->_start_puzzle == NULL) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'start_puzzle' of 'SudokuGame' undefined");
    } else {
        CPy_INCREF(self->_start_puzzle);
    }
    return self->_start_puzzle;
}

bool native_SudokuGame_setstart_puzzle(sudoku___SudokuGameObject *self, PyObject *value)
{
    if (self->_start_puzzle != NULL) {
        CPy_DecRef(self->_start_puzzle);
    }
    self->_start_puzzle = value;
    return 1;
}

static CPyVTableItem SudokuGame_vtable[7];
static bool
CPyDef_SudokuGame_trait_vtable_setup(void)
{
    CPyVTableItem SudokuGame_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_SudokuGame_____init__,
        (CPyVTableItem)CPyDef_SudokuGame___start,
        (CPyVTableItem)CPyDef_SudokuGame___check_win,
        (CPyVTableItem)CPyDef_SudokuGame____check_block,
        (CPyVTableItem)CPyDef_SudokuGame____check_row,
        (CPyVTableItem)CPyDef_SudokuGame____check_col,
        (CPyVTableItem)CPyDef_SudokuGame____check_square,
    };
    memcpy(SudokuGame_vtable, SudokuGame_vtable_scratch, sizeof(SudokuGame_vtable));
    return 1;
}

static PyObject *
SudokuGame_getboard_file(sudoku___SudokuGameObject *self, void *closure);
static int
SudokuGame_setboard_file(sudoku___SudokuGameObject *self, PyObject *value, void *closure);
static PyObject *
SudokuGame_getgame_over(sudoku___SudokuGameObject *self, void *closure);
static int
SudokuGame_setgame_over(sudoku___SudokuGameObject *self, PyObject *value, void *closure);
static PyObject *
SudokuGame_getpuzzle(sudoku___SudokuGameObject *self, void *closure);
static int
SudokuGame_setpuzzle(sudoku___SudokuGameObject *self, PyObject *value, void *closure);
static PyObject *
SudokuGame_getstart_puzzle(sudoku___SudokuGameObject *self, void *closure);
static int
SudokuGame_setstart_puzzle(sudoku___SudokuGameObject *self, PyObject *value, void *closure);

static PyGetSetDef SudokuGame_getseters[] = {
    {"board_file",
     (getter)SudokuGame_getboard_file, (setter)SudokuGame_setboard_file,
     NULL, NULL},
    {"game_over",
     (getter)SudokuGame_getgame_over, (setter)SudokuGame_setgame_over,
     NULL, NULL},
    {"puzzle",
     (getter)SudokuGame_getpuzzle, (setter)SudokuGame_setpuzzle,
     NULL, NULL},
    {"start_puzzle",
     (getter)SudokuGame_getstart_puzzle, (setter)SudokuGame_setstart_puzzle,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef SudokuGame_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_SudokuGame_____init__,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"start",
     (PyCFunction)CPyPy_SudokuGame___start,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"check_win",
     (PyCFunction)CPyPy_SudokuGame___check_win,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_check_block",
     (PyCFunction)CPyPy_SudokuGame____check_block,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_check_row",
     (PyCFunction)CPyPy_SudokuGame____check_row,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_check_col",
     (PyCFunction)CPyPy_SudokuGame____check_col,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"_check_square",
     (PyCFunction)CPyPy_SudokuGame____check_square,
     METH_VARARGS | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_SudokuGame_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SudokuGame",
    .tp_new = SudokuGame_new,
    .tp_dealloc = (destructor)SudokuGame_dealloc,
    .tp_traverse = (traverseproc)SudokuGame_traverse,
    .tp_clear = (inquiry)SudokuGame_clear,
    .tp_getset = SudokuGame_getseters,
    .tp_methods = SudokuGame_methods,
    .tp_init = SudokuGame_init,
    .tp_basicsize = sizeof(sudoku___SudokuGameObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_SudokuGame_template = &CPyType_SudokuGame_template_;

static PyObject *
SudokuGame_setup(PyTypeObject *type)
{
    sudoku___SudokuGameObject *self;
    self = (sudoku___SudokuGameObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = SudokuGame_vtable;
    self->_board_file = NULL;
    self->_game_over = NULL;
    self->_puzzle = NULL;
    self->_start_puzzle = NULL;
    return (PyObject *)self;
}

PyObject *CPyDef_SudokuGame(PyObject *cpy_r_board_file)
{
    PyObject *self = SudokuGame_setup(CPyType_SudokuGame);
    if (self == NULL)
        return NULL;
    char res = CPyDef_SudokuGame_____init__(self, cpy_r_board_file);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
SudokuGame_getboard_file(sudoku___SudokuGameObject *self, void *closure)
{
    if (self->_board_file == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'board_file' of 'SudokuGame' undefined");
        return NULL;
    }
    CPy_INCREF(self->_board_file);
    PyObject *retval = self->_board_file;
    return retval;
}

static int
SudokuGame_setboard_file(sudoku___SudokuGameObject *self, PyObject *value, void *closure)
{
    if (self->_board_file != NULL) {
        CPy_DecRef(self->_board_file);
    }
    if (value != NULL) {
        PyObject *tmp = value;
        CPy_INCREF(tmp);
        self->_board_file = tmp;
    } else
        self->_board_file = NULL;
    return 0;
}

static PyObject *
SudokuGame_getgame_over(sudoku___SudokuGameObject *self, void *closure)
{
    if (self->_game_over == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'game_over' of 'SudokuGame' undefined");
        return NULL;
    }
    CPy_INCREF(self->_game_over);
    PyObject *retval = self->_game_over;
    return retval;
}

static int
SudokuGame_setgame_over(sudoku___SudokuGameObject *self, PyObject *value, void *closure)
{
    if (self->_game_over != NULL) {
        CPy_DecRef(self->_game_over);
    }
    if (value != NULL) {
        PyObject *tmp = value;
        CPy_INCREF(tmp);
        self->_game_over = tmp;
    } else
        self->_game_over = NULL;
    return 0;
}

static PyObject *
SudokuGame_getpuzzle(sudoku___SudokuGameObject *self, void *closure)
{
    if (self->_puzzle == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'puzzle' of 'SudokuGame' undefined");
        return NULL;
    }
    CPy_INCREF(self->_puzzle);
    PyObject *retval = self->_puzzle;
    return retval;
}

static int
SudokuGame_setpuzzle(sudoku___SudokuGameObject *self, PyObject *value, void *closure)
{
    if (self->_puzzle != NULL) {
        CPy_DecRef(self->_puzzle);
    }
    if (value != NULL) {
        PyObject *tmp = value;
        CPy_INCREF(tmp);
        self->_puzzle = tmp;
    } else
        self->_puzzle = NULL;
    return 0;
}

static PyObject *
SudokuGame_getstart_puzzle(sudoku___SudokuGameObject *self, void *closure)
{
    if (self->_start_puzzle == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'start_puzzle' of 'SudokuGame' undefined");
        return NULL;
    }
    CPy_INCREF(self->_start_puzzle);
    PyObject *retval = self->_start_puzzle;
    return retval;
}

static int
SudokuGame_setstart_puzzle(sudoku___SudokuGameObject *self, PyObject *value, void *closure)
{
    if (self->_start_puzzle != NULL) {
        CPy_DecRef(self->_start_puzzle);
    }
    if (value != NULL) {
        PyObject *tmp = value;
        CPy_INCREF(tmp);
        self->_start_puzzle = tmp;
    } else
        self->_start_puzzle = NULL;
    return 0;
}
static PyMethodDef module_methods[] = {
    {"parse_arguments", (PyCFunction)CPyPy_parse_arguments, METH_VARARGS | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "sudoku",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyMODINIT_FUNC PyInit_sudoku(void)
{
    if (CPyModule_sudoku_internal) {
        Py_INCREF(CPyModule_sudoku_internal);
        return CPyModule_sudoku_internal;
    }
    CPyModule_sudoku_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_sudoku_internal == NULL))
        return NULL;
    PyObject *modname = PyObject_GetAttrString((PyObject *)CPyModule_sudoku_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_sudoku_internal);
    if (unlikely(CPyStatic_globals == NULL))
        return NULL;
    if (CPyGlobalsInit() < 0)
        return NULL;
    char result = CPyDef___top_level__();
    if (result == 2)
        return NULL;
    Py_DECREF(modname);
    return CPyModule_sudoku_internal;
}

PyObject *CPyDef_parse_arguments(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_parser;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
CPyL0: ;
    cpy_r_r0 = CPyModule_argparse;
    cpy_r_r1 = CPyStatic_unicode_24; /* 'ArgumentParser' */
    cpy_r_r2 = PyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 23, CPyStatic_globals);
        goto CPyL13;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r3 = PyObject_CallFunctionObjArgs(cpy_r_r2, NULL);
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 23, CPyStatic_globals);
        goto CPyL13;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_parser = cpy_r_r3;
    cpy_r_r4 = CPyStatic_unicode_25; /* '--board' */
    cpy_r_r5 = CPyStatic_unicode_26; /* 'Desired board name' */
    cpy_r_r6 = (PyObject *)&PyUnicode_Type;
    cpy_r_r7 = CPyStatic_globals;
    cpy_r_r8 = CPyStatic_unicode_14; /* 'BOARDS' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 28, CPyStatic_globals);
        goto CPyL14;
    } else
        goto CPyL3;
CPyL3: ;
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeError("list", cpy_r_r9);
        cpy_r_r10 = NULL;
    }
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 28, CPyStatic_globals);
        goto CPyL14;
    } else
        goto CPyL4;
CPyL4: ;
    cpy_r_r11 = 1;
    cpy_r_r12 = CPyStatic_unicode_27; /* 'add_argument' */
    cpy_r_r13 = PyObject_GetAttr(cpy_r_parser, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 25, CPyStatic_globals);
        goto CPyL15;
    } else
        goto CPyL5;
CPyL5: ;
    cpy_r_r14 = CPyStatic_unicode_28; /* 'help' */
    cpy_r_r15 = CPyStatic_unicode_29; /* 'type' */
    cpy_r_r16 = CPyStatic_unicode_30; /* 'choices' */
    cpy_r_r17 = CPyStatic_unicode_31; /* 'required' */
    cpy_r_r18 = PyTuple_Pack(1, cpy_r_r4);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 25, CPyStatic_globals);
        goto CPyL16;
    } else
        goto CPyL6;
CPyL6: ;
    cpy_r_r19 = cpy_r_r11 ? Py_True : Py_False;
    cpy_r_r20 = CPyDict_Build(4, cpy_r_r14, cpy_r_r5, cpy_r_r15, cpy_r_r6, cpy_r_r16, cpy_r_r10, cpy_r_r17, cpy_r_r19);
    CPy_DecRef(cpy_r_r10);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 25, CPyStatic_globals);
        goto CPyL17;
    } else
        goto CPyL7;
CPyL7: ;
    cpy_r_r21 = PyObject_Call(cpy_r_r13, cpy_r_r18, cpy_r_r20);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 25, CPyStatic_globals);
        goto CPyL14;
    } else
        goto CPyL18;
CPyL8: ;
    cpy_r_r22 = CPyStatic_unicode_32; /* 'parse_args' */
    cpy_r_r23 = PyObject_CallMethodObjArgs(cpy_r_parser, cpy_r_r22, NULL);
    CPy_DecRef(cpy_r_parser);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 31, CPyStatic_globals);
        goto CPyL13;
    } else
        goto CPyL9;
CPyL9: ;
    cpy_r_r24 = CPyModule_builtins;
    cpy_r_r25 = CPyStatic_unicode_33; /* 'vars' */
    cpy_r_r26 = PyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 31, CPyStatic_globals);
        goto CPyL19;
    } else
        goto CPyL10;
CPyL10: ;
    cpy_r_r27 = PyObject_CallFunctionObjArgs(cpy_r_r26, cpy_r_r23, NULL);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r23);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 31, CPyStatic_globals);
        goto CPyL13;
    } else
        goto CPyL11;
CPyL11: ;
    cpy_r_args = cpy_r_r27;
    cpy_r_r28 = CPyStatic_unicode_34; /* 'board' */
    cpy_r_r29 = PyObject_GetItem(cpy_r_args, cpy_r_r28);
    CPy_DecRef(cpy_r_args);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("sudoku.py", "parse_arguments", 32, CPyStatic_globals);
        goto CPyL13;
    } else
        goto CPyL12;
CPyL12: ;
    return cpy_r_r29;
CPyL13: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL14: ;
    CPy_DecRef(cpy_r_parser);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_r10);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r13);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r18);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL8;
CPyL19: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL13;
}

PyObject *CPyPy_parse_arguments(PyObject *self, PyObject *args, PyObject *kw) {
    static char *kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, ":parse_arguments", kwlist)) {
        return NULL;
    }
    PyObject *retval = CPyDef_parse_arguments();
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "parse_arguments", 17, CPyStatic_globals);
    return NULL;
}

char CPyDef_SudokuUI_____init__(PyObject *cpy_r_self, PyObject *cpy_r_parent, PyObject *cpy_r_game) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T2OO cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
CPyL0: ;
    CPy_INCREF(cpy_r_game);
    cpy_r_r0 = native_SudokuUI_setgame((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_game); /* game */
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("sudoku.py", "__init__", 41, CPyStatic_globals);
        goto CPyL20;
    } else
        goto CPyL1;
CPyL1: ;
    CPy_INCREF(cpy_r_parent);
    cpy_r_r1 = native_SudokuUI_setparent((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_parent); /* parent */
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("sudoku.py", "__init__", 42, CPyStatic_globals);
        goto CPyL20;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_r2 = CPyStatic_globals;
    cpy_r_r3 = CPyStatic_unicode_5; /* 'Frame' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("sudoku.py", "__init__", 43, CPyStatic_globals);
        goto CPyL20;
    } else
        goto CPyL3;
CPyL3: ;
    cpy_r_r5 = CPyStatic_unicode_41; /* '__init__' */
    cpy_r_r6 = PyObject_CallMethodObjArgs(cpy_r_r4, cpy_r_r5, cpy_r_self, cpy_r_parent, NULL);
    CPy_DecRef(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("sudoku.py", "__init__", 43, CPyStatic_globals);
        goto CPyL20;
    } else
        goto CPyL21;
CPyL4: ;
    cpy_r_r7 = 0;
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r7);
    cpy_r_r9 = 0;
    cpy_r_r10 = CPyTagged_StealAsObject(cpy_r_r9);
    cpy_r_r11.f0 = cpy_r_r8;
    cpy_r_r11.f1 = cpy_r_r10;
    CPy_INCREF(cpy_r_r11.f0);
    CPy_INCREF(cpy_r_r11.f1);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    cpy_r_r12 = PyTuple_New(2);
    if (unlikely(cpy_r_r12 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = cpy_r_r11.f0;
    PyTuple_SET_ITEM(cpy_r_r12, 0, __tmp1);
    PyObject *__tmp2 = cpy_r_r11.f1;
    PyTuple_SET_ITEM(cpy_r_r12, 1, __tmp2);
    cpy_r_r13 = PyObject_GetIter(cpy_r_r12);
    CPy_DecRef(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("sudoku.py", "__init__", 45, CPyStatic_globals);
        goto CPyL20;
    } else
        goto CPyL5;
CPyL5: ;
    cpy_r_r14 = PyIter_Next(cpy_r_r13);
    if (cpy_r_r14 == NULL) {
        goto CPyL22;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("sudoku.py", "__init__", 45, CPyStatic_globals);
        goto CPyL20;
    } else
        goto CPyL7;
CPyL7: ;
    CPy_Unreachable();
CPyL8: ;
    if (likely(PyLong_Check(cpy_r_r14)))
        cpy_r_r16 = CPyTagged_FromObject(cpy_r_r14);
    else {
        CPy_TypeError("int", cpy_r_r14);
        cpy_r_r16 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r14);
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "__init__", 45, CPyStatic_globals);
        goto CPyL23;
    } else
        goto CPyL9;
CPyL9: ;
    cpy_r_r17 = native_SudokuUI_setrow((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_r16); /* row */
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("sudoku.py", "__init__", 45, CPyStatic_globals);
        goto CPyL23;
    } else
        goto CPyL10;
CPyL10: ;
    cpy_r_r18 = PyIter_Next(cpy_r_r13);
    if (cpy_r_r18 == NULL) {
        goto CPyL24;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("sudoku.py", "__init__", 45, CPyStatic_globals);
        goto CPyL20;
    } else
        goto CPyL12;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    if (likely(PyLong_Check(cpy_r_r18)))
        cpy_r_r20 = CPyTagged_FromObject(cpy_r_r18);
    else {
        CPy_TypeError("int", cpy_r_r18);
        cpy_r_r20 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r18);
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "__init__", 45, CPyStatic_globals);
        goto CPyL23;
    } else
        goto CPyL14;
CPyL14: ;
    cpy_r_r21 = native_SudokuUI_setcol((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_r20); /* col */
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("sudoku.py", "__init__", 45, CPyStatic_globals);
        goto CPyL23;
    } else
        goto CPyL15;
CPyL15: ;
    cpy_r_r22 = PyIter_Next(cpy_r_r13);
    CPy_DecRef(cpy_r_r13);
    if (cpy_r_r22 == NULL) {
        goto CPyL18;
    } else
        goto CPyL25;
CPyL16: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("sudoku.py", "__init__", 45, CPyStatic_globals);
        goto CPyL20;
    } else
        goto CPyL17;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r24 = CPyDef_SudokuUI____init_ui(cpy_r_self);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("sudoku.py", "__init__", 47, CPyStatic_globals);
        goto CPyL20;
    } else
        goto CPyL26;
CPyL19: ;
    cpy_r_r25 = 1; /* None */
    return cpy_r_r25;
CPyL20: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL21: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL4;
CPyL22: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL6;
CPyL23: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL11;
CPyL25: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL16;
CPyL26: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL19;
}

PyObject *CPyPy_SudokuUI_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"parent", "game", 0};
    PyObject *obj_parent;
    PyObject *obj_game;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO:__init__", kwlist, &obj_parent, &obj_game)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_SudokuUI))
        arg_self = obj_self;
    else {
        CPy_TypeError("sudoku.SudokuUI", obj_self);
        arg_self = NULL;
    }
    if (arg_self == NULL) goto fail;
    PyObject *arg_parent = obj_parent;
    PyObject *arg_game = obj_game;
    char retval = CPyDef_SudokuUI_____init__(arg_self, arg_parent, arg_game);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("sudoku.py", "__init__", 40, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuUI____init_ui(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_clear_button;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
CPyL0: ;
    cpy_r_r0 = native_SudokuUI_getparent((sudoku___SudokuUIObject *)cpy_r_self); /* parent */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 50, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = CPyStatic_unicode_42; /* 'Sudoku' */
    cpy_r_r2 = CPyStatic_unicode_43; /* 'title' */
    cpy_r_r3 = PyObject_CallMethodObjArgs(cpy_r_r0, cpy_r_r2, cpy_r_r1, NULL);
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 50, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL44;
CPyL2: ;
    cpy_r_r4 = CPyStatic_globals;
    cpy_r_r5 = CPyStatic_unicode_7; /* 'BOTH' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 51, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL3;
CPyL3: ;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyStatic_unicode_44; /* 'pack' */
    cpy_r_r9 = PyObject_GetAttr(cpy_r_self, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 51, CPyStatic_globals);
        goto CPyL45;
    } else
        goto CPyL4;
CPyL4: ;
    cpy_r_r10 = CPyStatic_unicode_45; /* 'fill' */
    cpy_r_r11 = CPyStatic_unicode_46; /* 'expand' */
    cpy_r_r12 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 51, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL5;
CPyL5: ;
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_r7);
    cpy_r_r14 = CPyDict_Build(2, cpy_r_r10, cpy_r_r6, cpy_r_r11, cpy_r_r13);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 51, CPyStatic_globals);
        goto CPyL47;
    } else
        goto CPyL6;
CPyL6: ;
    cpy_r_r15 = PyObject_Call(cpy_r_r9, cpy_r_r12, cpy_r_r14);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 51, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL48;
CPyL7: ;
    cpy_r_r16 = CPyStatic_globals;
    cpy_r_r17 = CPyStatic_unicode_17; /* 'WIDTH' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 54, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL8;
CPyL8: ;
    if (likely(PyLong_Check(cpy_r_r18)))
        cpy_r_r19 = CPyTagged_FromObject(cpy_r_r18);
    else {
        CPy_TypeError("int", cpy_r_r18);
        cpy_r_r19 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r18);
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 54, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL9;
CPyL9: ;
    cpy_r_r20 = CPyStatic_globals;
    cpy_r_r21 = CPyStatic_unicode_18; /* 'HEIGHT' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 55, CPyStatic_globals);
        goto CPyL49;
    } else
        goto CPyL10;
CPyL10: ;
    if (likely(PyLong_Check(cpy_r_r22)))
        cpy_r_r23 = CPyTagged_FromObject(cpy_r_r22);
    else {
        CPy_TypeError("int", cpy_r_r22);
        cpy_r_r23 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r22);
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 55, CPyStatic_globals);
        goto CPyL49;
    } else
        goto CPyL11;
CPyL11: ;
    cpy_r_r24 = CPyStatic_globals;
    cpy_r_r25 = CPyStatic_unicode_4; /* 'Canvas' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 52, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL12;
CPyL12: ;
    cpy_r_r27 = CPyStatic_unicode_47; /* 'width' */
    cpy_r_r28 = CPyStatic_unicode_48; /* 'height' */
    cpy_r_r29 = PyTuple_Pack(1, cpy_r_self);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 52, CPyStatic_globals);
        goto CPyL51;
    } else
        goto CPyL13;
CPyL13: ;
    cpy_r_r30 = CPyTagged_StealAsObject(cpy_r_r19);
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_r23);
    cpy_r_r32 = CPyDict_Build(2, cpy_r_r27, cpy_r_r30, cpy_r_r28, cpy_r_r31);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 52, CPyStatic_globals);
        goto CPyL52;
    } else
        goto CPyL14;
CPyL14: ;
    cpy_r_r33 = PyObject_Call(cpy_r_r26, cpy_r_r29, cpy_r_r32);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 52, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL15;
CPyL15: ;
    cpy_r_r34 = native_SudokuUI_setcanvas((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_r33); /* canvas */
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 52, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL16;
CPyL16: ;
    cpy_r_r35 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 58, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL17;
CPyL17: ;
    cpy_r_r36 = CPyStatic_globals;
    cpy_r_r37 = CPyStatic_unicode_7; /* 'BOTH' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 58, CPyStatic_globals);
        goto CPyL53;
    } else
        goto CPyL18;
CPyL18: ;
    cpy_r_r39 = CPyStatic_globals;
    cpy_r_r40 = CPyStatic_unicode_8; /* 'TOP' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 58, CPyStatic_globals);
        goto CPyL54;
    } else
        goto CPyL19;
CPyL19: ;
    cpy_r_r42 = CPyStatic_unicode_44; /* 'pack' */
    cpy_r_r43 = PyObject_GetAttr(cpy_r_r35, cpy_r_r42);
    CPy_DecRef(cpy_r_r35);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 58, CPyStatic_globals);
        goto CPyL55;
    } else
        goto CPyL20;
CPyL20: ;
    cpy_r_r44 = CPyStatic_unicode_45; /* 'fill' */
    cpy_r_r45 = CPyStatic_unicode_49; /* 'side' */
    cpy_r_r46 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 58, CPyStatic_globals);
        goto CPyL56;
    } else
        goto CPyL21;
CPyL21: ;
    cpy_r_r47 = CPyDict_Build(2, cpy_r_r44, cpy_r_r38, cpy_r_r45, cpy_r_r41);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r41);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 58, CPyStatic_globals);
        goto CPyL57;
    } else
        goto CPyL22;
CPyL22: ;
    cpy_r_r48 = PyObject_Call(cpy_r_r43, cpy_r_r46, cpy_r_r47);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 58, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL58;
CPyL23: ;
    cpy_r_r49 = CPyStatic_unicode_50; /* 'Clear answers' */
    cpy_r_r50 = CPyStatic_unicode_51; /* '_clear_answers' */
    cpy_r_r51 = PyObject_GetAttr(cpy_r_self, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 62, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL24;
CPyL24: ;
    cpy_r_r52 = CPyStatic_globals;
    cpy_r_r53 = CPyStatic_unicode_6; /* 'Button' */
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 59, CPyStatic_globals);
        goto CPyL59;
    } else
        goto CPyL25;
CPyL25: ;
    cpy_r_r55 = CPyStatic_unicode_52; /* 'text' */
    cpy_r_r56 = CPyStatic_unicode_53; /* 'command' */
    cpy_r_r57 = PyTuple_Pack(1, cpy_r_self);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 59, CPyStatic_globals);
        goto CPyL60;
    } else
        goto CPyL26;
CPyL26: ;
    cpy_r_r58 = CPyDict_Build(2, cpy_r_r55, cpy_r_r49, cpy_r_r56, cpy_r_r51);
    CPy_DecRef(cpy_r_r51);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 59, CPyStatic_globals);
        goto CPyL61;
    } else
        goto CPyL27;
CPyL27: ;
    cpy_r_r59 = PyObject_Call(cpy_r_r54, cpy_r_r57, cpy_r_r58);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 59, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL28;
CPyL28: ;
    cpy_r_clear_button = cpy_r_r59;
    cpy_r_r60 = CPyStatic_globals;
    cpy_r_r61 = CPyStatic_unicode_7; /* 'BOTH' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 64, CPyStatic_globals);
        goto CPyL62;
    } else
        goto CPyL29;
CPyL29: ;
    cpy_r_r63 = CPyStatic_globals;
    cpy_r_r64 = CPyStatic_unicode_9; /* 'BOTTOM' */
    cpy_r_r65 = CPyDict_GetItem(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 64, CPyStatic_globals);
        goto CPyL63;
    } else
        goto CPyL30;
CPyL30: ;
    cpy_r_r66 = CPyStatic_unicode_44; /* 'pack' */
    cpy_r_r67 = PyObject_GetAttr(cpy_r_clear_button, cpy_r_r66);
    CPy_DecRef(cpy_r_clear_button);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 64, CPyStatic_globals);
        goto CPyL64;
    } else
        goto CPyL31;
CPyL31: ;
    cpy_r_r68 = CPyStatic_unicode_45; /* 'fill' */
    cpy_r_r69 = CPyStatic_unicode_49; /* 'side' */
    cpy_r_r70 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 64, CPyStatic_globals);
        goto CPyL65;
    } else
        goto CPyL32;
CPyL32: ;
    cpy_r_r71 = CPyDict_Build(2, cpy_r_r68, cpy_r_r62, cpy_r_r69, cpy_r_r65);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r65);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 64, CPyStatic_globals);
        goto CPyL66;
    } else
        goto CPyL33;
CPyL33: ;
    cpy_r_r72 = PyObject_Call(cpy_r_r67, cpy_r_r70, cpy_r_r71);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 64, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL67;
CPyL34: ;
    cpy_r_r73 = CPyDef_SudokuUI____draw_grid(cpy_r_self);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 66, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL68;
CPyL35: ;
    cpy_r_r74 = CPyDef_SudokuUI____draw_puzzle(cpy_r_self);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 67, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL69;
CPyL36: ;
    cpy_r_r75 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 69, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL37;
CPyL37: ;
    cpy_r_r76 = CPyStatic_unicode_54; /* '<Button-1>' */
    cpy_r_r77 = CPyStatic_unicode_55; /* '_cell_clicked' */
    cpy_r_r78 = PyObject_GetAttr(cpy_r_self, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 69, CPyStatic_globals);
        goto CPyL70;
    } else
        goto CPyL38;
CPyL38: ;
    cpy_r_r79 = CPyStatic_unicode_56; /* 'bind' */
    cpy_r_r80 = PyObject_CallMethodObjArgs(cpy_r_r75, cpy_r_r79, cpy_r_r76, cpy_r_r78, NULL);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r78);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 69, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL71;
CPyL39: ;
    cpy_r_r81 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 70, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL40;
CPyL40: ;
    cpy_r_r82 = CPyStatic_unicode_57; /* '<Key>' */
    cpy_r_r83 = CPyStatic_unicode_58; /* '_key_pressed' */
    cpy_r_r84 = PyObject_GetAttr(cpy_r_self, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 70, CPyStatic_globals);
        goto CPyL72;
    } else
        goto CPyL41;
CPyL41: ;
    cpy_r_r85 = CPyStatic_unicode_56; /* 'bind' */
    cpy_r_r86 = PyObject_CallMethodObjArgs(cpy_r_r81, cpy_r_r85, cpy_r_r82, cpy_r_r84, NULL);
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r84);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_init_ui", 70, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL73;
CPyL42: ;
    cpy_r_r87 = 1; /* None */
    cpy_r_r88 = Py_None;
    CPy_INCREF(cpy_r_r88);
    return cpy_r_r88;
CPyL43: ;
    cpy_r_r89 = NULL;
    return cpy_r_r89;
CPyL44: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL2;
CPyL45: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL43;
CPyL46: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    goto CPyL43;
CPyL47: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL43;
CPyL48: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL7;
CPyL49: ;
    CPyTagged_DecRef(cpy_r_r19);
    goto CPyL43;
CPyL50: ;
    CPyTagged_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r23);
    goto CPyL43;
CPyL51: ;
    CPyTagged_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r26);
    goto CPyL43;
CPyL52: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r29);
    goto CPyL43;
CPyL53: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL43;
CPyL54: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    goto CPyL43;
CPyL55: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r41);
    goto CPyL43;
CPyL56: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r43);
    goto CPyL43;
CPyL57: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r46);
    goto CPyL43;
CPyL58: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL23;
CPyL59: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL43;
CPyL60: ;
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r54);
    goto CPyL43;
CPyL61: ;
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r57);
    goto CPyL43;
CPyL62: ;
    CPy_DecRef(cpy_r_clear_button);
    goto CPyL43;
CPyL63: ;
    CPy_DecRef(cpy_r_clear_button);
    CPy_DecRef(cpy_r_r62);
    goto CPyL43;
CPyL64: ;
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r65);
    goto CPyL43;
CPyL65: ;
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r67);
    goto CPyL43;
CPyL66: ;
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r70);
    goto CPyL43;
CPyL67: ;
    CPy_DecRef(cpy_r_r72);
    goto CPyL34;
CPyL68: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL35;
CPyL69: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL36;
CPyL70: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL43;
CPyL71: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL39;
CPyL72: ;
    CPy_DecRef(cpy_r_r81);
    goto CPyL43;
CPyL73: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL42;
}

PyObject *CPyPy_SudokuUI____init_ui(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, ":_init_ui", kwlist)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *retval = CPyDef_SudokuUI____init_ui(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_init_ui", 49, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuUI____draw_grid(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_i;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_color;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_x0;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_y0;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_x1;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_y1;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyTagged cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyTagged cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
CPyL0: ;
    cpy_r_r0 = 0;
    cpy_r_r1 = 20;
    cpy_r_r2 = cpy_r_r0;
    cpy_r_r3 = CPyTagged_StealAsObject(cpy_r_r2);
    cpy_r_i = cpy_r_r3;
    goto CPyL1;
CPyL1: ;
    cpy_r_r4 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r_r5 = PyObject_RichCompare(cpy_r_i, cpy_r_r4, Py_LT);
    CPy_DecRef(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 76, CPyStatic_globals);
        goto CPyL59;
    } else
        goto CPyL2;
CPyL2: ;
    int __tmp3 = PyObject_IsTrue(cpy_r_r5);
    if (__tmp3 < 0)
        cpy_r_r6 = 2;
    else
        cpy_r_r6 = __tmp3;
    CPy_DecRef(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 76, CPyStatic_globals);
        goto CPyL59;
    } else
        goto CPyL3;
CPyL3: ;
    if (cpy_r_r6) {
        goto CPyL4;
    } else
        goto CPyL60;
CPyL4: ;
    cpy_r_r7 = 6;
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r7);
    cpy_r_r9 = PyNumber_Remainder(cpy_r_i, cpy_r_r8);
    CPy_DecRef(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 77, CPyStatic_globals);
        goto CPyL59;
    } else
        goto CPyL5;
CPyL5: ;
    cpy_r_r10 = 0;
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r12 = PyObject_RichCompare(cpy_r_r9, cpy_r_r11, Py_EQ);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 77, CPyStatic_globals);
        goto CPyL59;
    } else
        goto CPyL6;
CPyL6: ;
    int __tmp4 = PyObject_IsTrue(cpy_r_r12);
    if (__tmp4 < 0)
        cpy_r_r13 = 2;
    else
        cpy_r_r13 = __tmp4;
    CPy_DecRef(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 77, CPyStatic_globals);
        goto CPyL59;
    } else
        goto CPyL7;
CPyL7: ;
    if (cpy_r_r13) {
        goto CPyL8;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r15 = CPyStatic_unicode_59; /* 'blue' */
    CPy_INCREF(cpy_r_r15);
    cpy_r_r14 = cpy_r_r15;
    goto CPyL10;
CPyL9: ;
    cpy_r_r16 = CPyStatic_unicode_60; /* 'gray' */
    CPy_INCREF(cpy_r_r16);
    cpy_r_r14 = cpy_r_r16;
    goto CPyL10;
CPyL10: ;
    cpy_r_color = cpy_r_r14;
    cpy_r_r17 = CPyStatic_globals;
    cpy_r_r18 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 79, CPyStatic_globals);
        goto CPyL61;
    } else
        goto CPyL11;
CPyL11: ;
    if (likely(PyLong_Check(cpy_r_r19)))
        cpy_r_r20 = CPyTagged_FromObject(cpy_r_r19);
    else {
        CPy_TypeError("int", cpy_r_r19);
        cpy_r_r20 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r19);
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 79, CPyStatic_globals);
        goto CPyL61;
    } else
        goto CPyL12;
CPyL12: ;
    cpy_r_r21 = CPyStatic_globals;
    cpy_r_r22 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 79, CPyStatic_globals);
        goto CPyL62;
    } else
        goto CPyL13;
CPyL13: ;
    if (likely(PyLong_Check(cpy_r_r23)))
        cpy_r_r24 = CPyTagged_FromObject(cpy_r_r23);
    else {
        CPy_TypeError("int", cpy_r_r23);
        cpy_r_r24 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r23);
    if (unlikely(cpy_r_r24 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 79, CPyStatic_globals);
        goto CPyL62;
    } else
        goto CPyL14;
CPyL14: ;
    cpy_r_r25 = CPyTagged_StealAsObject(cpy_r_r24);
    cpy_r_r26 = PyNumber_Multiply(cpy_r_i, cpy_r_r25);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 79, CPyStatic_globals);
        goto CPyL62;
    } else
        goto CPyL15;
CPyL15: ;
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_r20);
    cpy_r_r28 = PyNumber_Add(cpy_r_r27, cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 79, CPyStatic_globals);
        goto CPyL61;
    } else
        goto CPyL16;
CPyL16: ;
    cpy_r_x0 = cpy_r_r28;
    cpy_r_r29 = CPyStatic_globals;
    cpy_r_r30 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 80, CPyStatic_globals);
        goto CPyL63;
    } else
        goto CPyL17;
CPyL17: ;
    if (likely(PyLong_Check(cpy_r_r31)))
        cpy_r_r32 = CPyTagged_FromObject(cpy_r_r31);
    else {
        CPy_TypeError("int", cpy_r_r31);
        cpy_r_r32 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r31);
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 80, CPyStatic_globals);
        goto CPyL63;
    } else
        goto CPyL18;
CPyL18: ;
    cpy_r_r33 = CPyTagged_StealAsObject(cpy_r_r32);
    cpy_r_y0 = cpy_r_r33;
    cpy_r_r34 = CPyStatic_globals;
    cpy_r_r35 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 81, CPyStatic_globals);
        goto CPyL64;
    } else
        goto CPyL19;
CPyL19: ;
    if (likely(PyLong_Check(cpy_r_r36)))
        cpy_r_r37 = CPyTagged_FromObject(cpy_r_r36);
    else {
        CPy_TypeError("int", cpy_r_r36);
        cpy_r_r37 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r36);
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 81, CPyStatic_globals);
        goto CPyL64;
    } else
        goto CPyL20;
CPyL20: ;
    cpy_r_r38 = CPyStatic_globals;
    cpy_r_r39 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 81, CPyStatic_globals);
        goto CPyL65;
    } else
        goto CPyL21;
CPyL21: ;
    if (likely(PyLong_Check(cpy_r_r40)))
        cpy_r_r41 = CPyTagged_FromObject(cpy_r_r40);
    else {
        CPy_TypeError("int", cpy_r_r40);
        cpy_r_r41 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r40);
    if (unlikely(cpy_r_r41 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 81, CPyStatic_globals);
        goto CPyL65;
    } else
        goto CPyL22;
CPyL22: ;
    cpy_r_r42 = CPyTagged_StealAsObject(cpy_r_r41);
    cpy_r_r43 = PyNumber_Multiply(cpy_r_i, cpy_r_r42);
    CPy_DecRef(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 81, CPyStatic_globals);
        goto CPyL65;
    } else
        goto CPyL23;
CPyL23: ;
    cpy_r_r44 = CPyTagged_StealAsObject(cpy_r_r37);
    cpy_r_r45 = PyNumber_Add(cpy_r_r44, cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 81, CPyStatic_globals);
        goto CPyL64;
    } else
        goto CPyL24;
CPyL24: ;
    cpy_r_x1 = cpy_r_r45;
    cpy_r_r46 = CPyStatic_globals;
    cpy_r_r47 = CPyStatic_unicode_18; /* 'HEIGHT' */
    cpy_r_r48 = CPyDict_GetItem(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 82, CPyStatic_globals);
        goto CPyL66;
    } else
        goto CPyL25;
CPyL25: ;
    if (likely(PyLong_Check(cpy_r_r48)))
        cpy_r_r49 = CPyTagged_FromObject(cpy_r_r48);
    else {
        CPy_TypeError("int", cpy_r_r48);
        cpy_r_r49 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r48);
    if (unlikely(cpy_r_r49 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 82, CPyStatic_globals);
        goto CPyL66;
    } else
        goto CPyL26;
CPyL26: ;
    cpy_r_r50 = CPyStatic_globals;
    cpy_r_r51 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r52 = CPyDict_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 82, CPyStatic_globals);
        goto CPyL67;
    } else
        goto CPyL27;
CPyL27: ;
    if (likely(PyLong_Check(cpy_r_r52)))
        cpy_r_r53 = CPyTagged_FromObject(cpy_r_r52);
    else {
        CPy_TypeError("int", cpy_r_r52);
        cpy_r_r53 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r52);
    if (unlikely(cpy_r_r53 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 82, CPyStatic_globals);
        goto CPyL67;
    } else
        goto CPyL28;
CPyL28: ;
    cpy_r_r54 = CPyTagged_Subtract(cpy_r_r49, cpy_r_r53);
    CPyTagged_DecRef(cpy_r_r49);
    CPyTagged_DecRef(cpy_r_r53);
    cpy_r_r55 = CPyTagged_StealAsObject(cpy_r_r54);
    cpy_r_y1 = cpy_r_r55;
    cpy_r_r56 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 83, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL29;
CPyL29: ;
    cpy_r_r57 = CPyStatic_unicode_61; /* 'create_line' */
    cpy_r_r58 = PyObject_GetAttr(cpy_r_r56, cpy_r_r57);
    CPy_DecRef(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 83, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL30;
CPyL30: ;
    cpy_r_r59 = CPyStatic_unicode_45; /* 'fill' */
    cpy_r_r60 = PyTuple_Pack(4, cpy_r_x0, cpy_r_y0, cpy_r_x1, cpy_r_y1);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPy_DecRef(cpy_r_y1);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 83, CPyStatic_globals);
        goto CPyL69;
    } else
        goto CPyL31;
CPyL31: ;
    cpy_r_r61 = CPyDict_Build(1, cpy_r_r59, cpy_r_color);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 83, CPyStatic_globals);
        goto CPyL70;
    } else
        goto CPyL32;
CPyL32: ;
    cpy_r_r62 = PyObject_Call(cpy_r_r58, cpy_r_r60, cpy_r_r61);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 83, CPyStatic_globals);
        goto CPyL61;
    } else
        goto CPyL71;
CPyL33: ;
    cpy_r_r63 = CPyStatic_globals;
    cpy_r_r64 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r65 = CPyDict_GetItem(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 85, CPyStatic_globals);
        goto CPyL61;
    } else
        goto CPyL34;
CPyL34: ;
    if (likely(PyLong_Check(cpy_r_r65)))
        cpy_r_r66 = CPyTagged_FromObject(cpy_r_r65);
    else {
        CPy_TypeError("int", cpy_r_r65);
        cpy_r_r66 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r65);
    if (unlikely(cpy_r_r66 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 85, CPyStatic_globals);
        goto CPyL61;
    } else
        goto CPyL35;
CPyL35: ;
    cpy_r_r67 = CPyTagged_StealAsObject(cpy_r_r66);
    cpy_r_x0 = cpy_r_r67;
    cpy_r_r68 = CPyStatic_globals;
    cpy_r_r69 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 86, CPyStatic_globals);
        goto CPyL63;
    } else
        goto CPyL36;
CPyL36: ;
    if (likely(PyLong_Check(cpy_r_r70)))
        cpy_r_r71 = CPyTagged_FromObject(cpy_r_r70);
    else {
        CPy_TypeError("int", cpy_r_r70);
        cpy_r_r71 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r70);
    if (unlikely(cpy_r_r71 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 86, CPyStatic_globals);
        goto CPyL63;
    } else
        goto CPyL37;
CPyL37: ;
    cpy_r_r72 = CPyStatic_globals;
    cpy_r_r73 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r74 = CPyDict_GetItem(cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 86, CPyStatic_globals);
        goto CPyL72;
    } else
        goto CPyL38;
CPyL38: ;
    if (likely(PyLong_Check(cpy_r_r74)))
        cpy_r_r75 = CPyTagged_FromObject(cpy_r_r74);
    else {
        CPy_TypeError("int", cpy_r_r74);
        cpy_r_r75 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r74);
    if (unlikely(cpy_r_r75 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 86, CPyStatic_globals);
        goto CPyL72;
    } else
        goto CPyL39;
CPyL39: ;
    cpy_r_r76 = CPyTagged_StealAsObject(cpy_r_r75);
    cpy_r_r77 = PyNumber_Multiply(cpy_r_i, cpy_r_r76);
    CPy_DecRef(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 86, CPyStatic_globals);
        goto CPyL72;
    } else
        goto CPyL40;
CPyL40: ;
    cpy_r_r78 = CPyTagged_StealAsObject(cpy_r_r71);
    cpy_r_r79 = PyNumber_Add(cpy_r_r78, cpy_r_r77);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r77);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 86, CPyStatic_globals);
        goto CPyL63;
    } else
        goto CPyL41;
CPyL41: ;
    cpy_r_y0 = cpy_r_r79;
    cpy_r_r80 = CPyStatic_globals;
    cpy_r_r81 = CPyStatic_unicode_17; /* 'WIDTH' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 87, CPyStatic_globals);
        goto CPyL64;
    } else
        goto CPyL42;
CPyL42: ;
    if (likely(PyLong_Check(cpy_r_r82)))
        cpy_r_r83 = CPyTagged_FromObject(cpy_r_r82);
    else {
        CPy_TypeError("int", cpy_r_r82);
        cpy_r_r83 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r82);
    if (unlikely(cpy_r_r83 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 87, CPyStatic_globals);
        goto CPyL64;
    } else
        goto CPyL43;
CPyL43: ;
    cpy_r_r84 = CPyStatic_globals;
    cpy_r_r85 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r86 = CPyDict_GetItem(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 87, CPyStatic_globals);
        goto CPyL73;
    } else
        goto CPyL44;
CPyL44: ;
    if (likely(PyLong_Check(cpy_r_r86)))
        cpy_r_r87 = CPyTagged_FromObject(cpy_r_r86);
    else {
        CPy_TypeError("int", cpy_r_r86);
        cpy_r_r87 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r86);
    if (unlikely(cpy_r_r87 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 87, CPyStatic_globals);
        goto CPyL73;
    } else
        goto CPyL45;
CPyL45: ;
    cpy_r_r88 = CPyTagged_Subtract(cpy_r_r83, cpy_r_r87);
    CPyTagged_DecRef(cpy_r_r83);
    CPyTagged_DecRef(cpy_r_r87);
    cpy_r_r89 = CPyTagged_StealAsObject(cpy_r_r88);
    cpy_r_x1 = cpy_r_r89;
    cpy_r_r90 = CPyStatic_globals;
    cpy_r_r91 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r92 = CPyDict_GetItem(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 88, CPyStatic_globals);
        goto CPyL66;
    } else
        goto CPyL46;
CPyL46: ;
    if (likely(PyLong_Check(cpy_r_r92)))
        cpy_r_r93 = CPyTagged_FromObject(cpy_r_r92);
    else {
        CPy_TypeError("int", cpy_r_r92);
        cpy_r_r93 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r92);
    if (unlikely(cpy_r_r93 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 88, CPyStatic_globals);
        goto CPyL66;
    } else
        goto CPyL47;
CPyL47: ;
    cpy_r_r94 = CPyStatic_globals;
    cpy_r_r95 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r96 = CPyDict_GetItem(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 88, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL48;
CPyL48: ;
    if (likely(PyLong_Check(cpy_r_r96)))
        cpy_r_r97 = CPyTagged_FromObject(cpy_r_r96);
    else {
        CPy_TypeError("int", cpy_r_r96);
        cpy_r_r97 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r96);
    if (unlikely(cpy_r_r97 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 88, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL49;
CPyL49: ;
    cpy_r_r98 = CPyTagged_StealAsObject(cpy_r_r97);
    cpy_r_r99 = PyNumber_Multiply(cpy_r_i, cpy_r_r98);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 88, CPyStatic_globals);
        goto CPyL75;
    } else
        goto CPyL50;
CPyL50: ;
    cpy_r_r100 = CPyTagged_StealAsObject(cpy_r_r93);
    cpy_r_r101 = PyNumber_Add(cpy_r_r100, cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r99);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 88, CPyStatic_globals);
        goto CPyL76;
    } else
        goto CPyL51;
CPyL51: ;
    cpy_r_y1 = cpy_r_r101;
    cpy_r_r102 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 89, CPyStatic_globals);
        goto CPyL77;
    } else
        goto CPyL52;
CPyL52: ;
    cpy_r_r103 = CPyStatic_unicode_61; /* 'create_line' */
    cpy_r_r104 = PyObject_GetAttr(cpy_r_r102, cpy_r_r103);
    CPy_DecRef(cpy_r_r102);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 89, CPyStatic_globals);
        goto CPyL77;
    } else
        goto CPyL53;
CPyL53: ;
    cpy_r_r105 = CPyStatic_unicode_45; /* 'fill' */
    cpy_r_r106 = PyTuple_Pack(4, cpy_r_x0, cpy_r_y0, cpy_r_x1, cpy_r_y1);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPy_DecRef(cpy_r_y1);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 89, CPyStatic_globals);
        goto CPyL78;
    } else
        goto CPyL54;
CPyL54: ;
    cpy_r_r107 = CPyDict_Build(1, cpy_r_r105, cpy_r_color);
    CPy_DecRef(cpy_r_color);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 89, CPyStatic_globals);
        goto CPyL79;
    } else
        goto CPyL55;
CPyL55: ;
    cpy_r_r108 = PyObject_Call(cpy_r_r104, cpy_r_r106, cpy_r_r107);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    CPy_DecRef(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_grid", 89, CPyStatic_globals);
        goto CPyL58;
    } else
        goto CPyL80;
CPyL56: ;
    cpy_r_r109 = 2;
    cpy_r_r110 = cpy_r_r2 + cpy_r_r109;
    cpy_r_r2 = cpy_r_r110;
    cpy_r_r111 = CPyTagged_StealAsObject(cpy_r_r110);
    cpy_r_i = cpy_r_r111;
    goto CPyL1;
CPyL57: ;
    cpy_r_r112 = 1; /* None */
    cpy_r_r113 = Py_None;
    CPy_INCREF(cpy_r_r113);
    return cpy_r_r113;
CPyL58: ;
    cpy_r_r114 = NULL;
    return cpy_r_r114;
CPyL59: ;
    CPy_DecRef(cpy_r_i);
    goto CPyL58;
CPyL60: ;
    CPy_DecRef(cpy_r_i);
    goto CPyL57;
CPyL61: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    goto CPyL58;
CPyL62: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPyTagged_DecRef(cpy_r_r20);
    goto CPyL58;
CPyL63: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    goto CPyL58;
CPyL64: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    goto CPyL58;
CPyL65: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPyTagged_DecRef(cpy_r_r37);
    goto CPyL58;
CPyL66: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    goto CPyL58;
CPyL67: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPyTagged_DecRef(cpy_r_r49);
    goto CPyL58;
CPyL68: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPy_DecRef(cpy_r_y1);
    goto CPyL58;
CPyL69: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_r58);
    goto CPyL58;
CPyL70: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r60);
    goto CPyL58;
CPyL71: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL33;
CPyL72: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    CPyTagged_DecRef(cpy_r_r71);
    goto CPyL58;
CPyL73: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPyTagged_DecRef(cpy_r_r83);
    goto CPyL58;
CPyL74: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPyTagged_DecRef(cpy_r_r93);
    goto CPyL58;
CPyL75: ;
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPyTagged_DecRef(cpy_r_r93);
    goto CPyL58;
CPyL76: ;
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    goto CPyL58;
CPyL77: ;
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPy_DecRef(cpy_r_y1);
    goto CPyL58;
CPyL78: ;
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_r104);
    goto CPyL58;
CPyL79: ;
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    goto CPyL58;
CPyL80: ;
    CPy_DecRef(cpy_r_r108);
    goto CPyL56;
}

PyObject *CPyPy_SudokuUI____draw_grid(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, ":_draw_grid", kwlist)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *retval = CPyDef_SudokuUI____draw_grid(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_draw_grid", 72, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuUI___find_square(PyObject *cpy_r_self, PyObject *cpy_r_row, PyObject *cpy_r_col) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_square;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_row_adjustment;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_col_adjustment;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_row_start;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_col_start;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_i;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_j;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
CPyL0: ;
    cpy_r_r0 = PyList_New(0); 
    if (likely(cpy_r_r0 != NULL)) {
    }
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 92, CPyStatic_globals);
        goto CPyL27;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_square = cpy_r_r0;
    cpy_r_r1 = 6;
    cpy_r_r2 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r_r3 = PyNumber_Remainder(cpy_r_row, cpy_r_r2);
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 93, CPyStatic_globals);
        goto CPyL28;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_row_adjustment = cpy_r_r3;
    cpy_r_r4 = 6;
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_r4);
    cpy_r_r6 = PyNumber_Remainder(cpy_r_col, cpy_r_r5);
    CPy_DecRef(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 94, CPyStatic_globals);
        goto CPyL29;
    } else
        goto CPyL3;
CPyL3: ;
    cpy_r_col_adjustment = cpy_r_r6;
    cpy_r_r7 = PyNumber_Subtract(cpy_r_row, cpy_r_row_adjustment);
    CPy_DecRef(cpy_r_row_adjustment);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 95, CPyStatic_globals);
        goto CPyL30;
    } else
        goto CPyL4;
CPyL4: ;
    cpy_r_row_start = cpy_r_r7;
    cpy_r_r8 = PyNumber_Subtract(cpy_r_col, cpy_r_col_adjustment);
    CPy_DecRef(cpy_r_col_adjustment);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 96, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL5;
CPyL5: ;
    cpy_r_col_start = cpy_r_r8;
    cpy_r_r9 = PyList_New(0); 
    if (likely(cpy_r_r9 != NULL)) {
    }
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL32;
    } else
        goto CPyL6;
CPyL6: ;
    cpy_r_r10 = 6;
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r12 = PyNumber_Add(cpy_r_row_start, cpy_r_r11);
    CPy_DecRef(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL33;
    } else
        goto CPyL7;
CPyL7: ;
    CPy_INCREF(cpy_r_row_start);
    cpy_r_i = cpy_r_row_start;
    goto CPyL8;
CPyL8: ;
    cpy_r_r13 = PyObject_RichCompare(cpy_r_i, cpy_r_r12, Py_LT);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL9;
CPyL9: ;
    int __tmp5 = PyObject_IsTrue(cpy_r_r13);
    if (__tmp5 < 0)
        cpy_r_r14 = 2;
    else
        cpy_r_r14 = __tmp5;
    CPy_DecRef(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL10;
CPyL10: ;
    if (cpy_r_r14) {
        goto CPyL11;
    } else
        goto CPyL35;
CPyL11: ;
    cpy_r_r15 = 6;
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_r15);
    cpy_r_r17 = PyNumber_Add(cpy_r_col_start, cpy_r_r16);
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL12;
CPyL12: ;
    CPy_INCREF(cpy_r_col_start);
    cpy_r_j = cpy_r_col_start;
    goto CPyL13;
CPyL13: ;
    cpy_r_r18 = PyObject_RichCompare(cpy_r_j, cpy_r_r17, Py_LT);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL36;
    } else
        goto CPyL14;
CPyL14: ;
    int __tmp6 = PyObject_IsTrue(cpy_r_r18);
    if (__tmp6 < 0)
        cpy_r_r19 = 2;
    else
        cpy_r_r19 = __tmp6;
    CPy_DecRef(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL36;
    } else
        goto CPyL15;
CPyL15: ;
    if (cpy_r_r19) {
        goto CPyL16;
    } else
        goto CPyL37;
CPyL16: ;
    cpy_r_r20 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL36;
    } else
        goto CPyL17;
CPyL17: ;
    cpy_r_r21 = CPyStatic_unicode_62; /* 'puzzle' */
    cpy_r_r22 = PyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    CPy_DecRef(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL36;
    } else
        goto CPyL18;
CPyL18: ;
    cpy_r_r23 = PyObject_GetItem(cpy_r_r22, cpy_r_i);
    CPy_DecRef(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL36;
    } else
        goto CPyL19;
CPyL19: ;
    cpy_r_r24 = PyObject_GetItem(cpy_r_r23, cpy_r_j);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_j);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL38;
    } else
        goto CPyL20;
CPyL20: ;
    cpy_r_r25 = PyList_Append(cpy_r_r9, cpy_r_r24) >= 0;
    CPy_DecRef(cpy_r_r24);
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL38;
    } else
        goto CPyL21;
CPyL21: ;
    cpy_r_r26 = 2;
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_r26);
    cpy_r_r28 = PyNumber_Add(cpy_r_col_start, cpy_r_r27);
    CPy_DecRef(cpy_r_col_start);
    CPy_DecRef(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL22;
CPyL22: ;
    CPy_INCREF(cpy_r_r28);
    cpy_r_col_start = cpy_r_r28;
    cpy_r_j = cpy_r_r28;
    goto CPyL13;
CPyL23: ;
    cpy_r_r29 = 2;
    cpy_r_r30 = CPyTagged_StealAsObject(cpy_r_r29);
    cpy_r_r31 = PyNumber_Add(cpy_r_row_start, cpy_r_r30);
    CPy_DecRef(cpy_r_row_start);
    CPy_DecRef(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL40;
    } else
        goto CPyL24;
CPyL24: ;
    CPy_INCREF(cpy_r_r31);
    cpy_r_row_start = cpy_r_r31;
    cpy_r_i = cpy_r_r31;
    goto CPyL8;
CPyL25: ;
    cpy_r_r32 = PyNumber_InPlaceAdd(cpy_r_square, cpy_r_r9);
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_r9);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("sudoku.py", "find_square", 97, CPyStatic_globals);
        goto CPyL27;
    } else
        goto CPyL26;
CPyL26: ;
    cpy_r_square = cpy_r_r32;
    return cpy_r_square;
CPyL27: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL28: ;
    CPy_DecRef(cpy_r_square);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_row_adjustment);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_col_adjustment);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_row_start);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_row_start);
    CPy_DecRef(cpy_r_col_start);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_row_start);
    CPy_DecRef(cpy_r_col_start);
    CPy_DecRef(cpy_r_r9);
    goto CPyL27;
CPyL34: ;
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_row_start);
    CPy_DecRef(cpy_r_col_start);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_i);
    goto CPyL27;
CPyL35: ;
    CPy_DecRef(cpy_r_row_start);
    CPy_DecRef(cpy_r_col_start);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_i);
    goto CPyL25;
CPyL36: ;
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_row_start);
    CPy_DecRef(cpy_r_col_start);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_j);
    goto CPyL27;
CPyL37: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_j);
    goto CPyL23;
CPyL38: ;
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_row_start);
    CPy_DecRef(cpy_r_col_start);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r17);
    goto CPyL27;
CPyL39: ;
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_row_start);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r17);
    goto CPyL27;
CPyL40: ;
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_col_start);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL27;
}

PyObject *CPyPy_SudokuUI___find_square(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"row", "col", 0};
    PyObject *obj_row;
    PyObject *obj_col;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO:find_square", kwlist, &obj_row, &obj_col)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *arg_row = obj_row;
    PyObject *arg_col = obj_col;
    PyObject *retval = CPyDef_SudokuUI___find_square(arg_self, arg_row, arg_col);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "find_square", 91, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuUI___check_conflict(PyObject *cpy_r_self, PyObject *cpy_r_i, PyObject *cpy_r_j, PyObject *cpy_r_row, PyObject *cpy_r_col, PyObject *cpy_r_square) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_conflict_locations;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_current;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_i0;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_j0;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    CPyTagged cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_i1;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
CPyL0: ;
    cpy_r_r0 = PyList_New(0); 
    if (likely(cpy_r_r0 != NULL)) {
    }
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 105, CPyStatic_globals);
        goto CPyL66;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_conflict_locations = cpy_r_r0;
    cpy_r_r1 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 106, CPyStatic_globals);
        goto CPyL67;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_r2 = CPyStatic_unicode_62; /* 'puzzle' */
    cpy_r_r3 = PyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    CPy_DecRef(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 106, CPyStatic_globals);
        goto CPyL67;
    } else
        goto CPyL3;
CPyL3: ;
    cpy_r_r4 = PyObject_GetItem(cpy_r_r3, cpy_r_i);
    CPy_DecRef(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 106, CPyStatic_globals);
        goto CPyL67;
    } else
        goto CPyL4;
CPyL4: ;
    cpy_r_r5 = PyObject_GetItem(cpy_r_r4, cpy_r_j);
    CPy_DecRef(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 106, CPyStatic_globals);
        goto CPyL67;
    } else
        goto CPyL5;
CPyL5: ;
    cpy_r_current = cpy_r_r5;
    cpy_r_r6 = CPyStatic_unicode_63; /* 'count' */
    cpy_r_r7 = PyObject_CallMethodObjArgs(cpy_r_row, cpy_r_r6, cpy_r_current, NULL);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 107, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL6;
CPyL6: ;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_r8);
    cpy_r_r10 = PyObject_RichCompare(cpy_r_r7, cpy_r_r9, Py_GT);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 107, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL7;
CPyL7: ;
    int __tmp7 = PyObject_IsTrue(cpy_r_r10);
    if (__tmp7 < 0)
        cpy_r_r11 = 2;
    else
        cpy_r_r11 = __tmp7;
    CPy_DecRef(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 107, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL8;
CPyL8: ;
    if (cpy_r_r11) {
        goto CPyL9;
    } else
        goto CPyL26;
CPyL9: ;
    cpy_r_r12 = PyList_New(0); 
    if (likely(cpy_r_r12 != NULL)) {
    }
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL10;
CPyL10: ;
    cpy_r_r13 = 0;
    cpy_r_r14 = CPyObject_Size(cpy_r_row);
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_r14);
    cpy_r_r16 = cpy_r_r13;
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_r16);
    cpy_r_i0 = cpy_r_r17;
    goto CPyL11;
CPyL11: ;
    cpy_r_r18 = PyObject_RichCompare(cpy_r_i0, cpy_r_r15, Py_LT);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL69;
    } else
        goto CPyL12;
CPyL12: ;
    int __tmp8 = PyObject_IsTrue(cpy_r_r18);
    if (__tmp8 < 0)
        cpy_r_r19 = 2;
    else
        cpy_r_r19 = __tmp8;
    CPy_DecRef(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL69;
    } else
        goto CPyL13;
CPyL13: ;
    if (cpy_r_r19) {
        goto CPyL14;
    } else
        goto CPyL70;
CPyL14: ;
    cpy_r_r20 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL69;
    } else
        goto CPyL15;
CPyL15: ;
    cpy_r_r21 = CPyStatic_unicode_62; /* 'puzzle' */
    cpy_r_r22 = PyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    CPy_DecRef(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL69;
    } else
        goto CPyL16;
CPyL16: ;
    cpy_r_r23 = PyObject_GetItem(cpy_r_r22, cpy_r_i0);
    CPy_DecRef(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL69;
    } else
        goto CPyL17;
CPyL17: ;
    cpy_r_r24 = PyObject_GetItem(cpy_r_r23, cpy_r_j);
    CPy_DecRef(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL69;
    } else
        goto CPyL18;
CPyL18: ;
    cpy_r_r25 = PyObject_RichCompare(cpy_r_r24, cpy_r_current, Py_EQ);
    CPy_DecRef(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL69;
    } else
        goto CPyL19;
CPyL19: ;
    int __tmp9 = PyObject_IsTrue(cpy_r_r25);
    if (__tmp9 < 0)
        cpy_r_r26 = 2;
    else
        cpy_r_r26 = __tmp9;
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL69;
    } else
        goto CPyL20;
CPyL20: ;
    if (cpy_r_r26) {
        goto CPyL21;
    } else
        goto CPyL71;
CPyL21: ;
    CPy_INCREF(cpy_r_j);
    cpy_r_r27 = PyList_New(2); 
    if (likely(cpy_r_r27 != NULL)) {
        PyList_SET_ITEM(cpy_r_r27, 0, cpy_r_i0);
        PyList_SET_ITEM(cpy_r_r27, 1, cpy_r_j);
    }
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL72;
    } else
        goto CPyL22;
CPyL22: ;
    cpy_r_r28 = PyList_Append(cpy_r_r12, cpy_r_r27) >= 0;
    CPy_DecRef(cpy_r_r27);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL72;
    } else
        goto CPyL23;
CPyL23: ;
    cpy_r_r29 = 2;
    cpy_r_r30 = CPyTagged_Add(cpy_r_r16, cpy_r_r29);
    CPyTagged_IncRef(cpy_r_r30);
    cpy_r_r16 = cpy_r_r30;
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_r30);
    cpy_r_i0 = cpy_r_r31;
    goto CPyL11;
CPyL24: ;
    cpy_r_r32 = PyNumber_InPlaceAdd(cpy_r_conflict_locations, cpy_r_r12);
    CPy_DecRef(cpy_r_conflict_locations);
    CPy_DecRef(cpy_r_r12);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 108, CPyStatic_globals);
        goto CPyL73;
    } else
        goto CPyL25;
CPyL25: ;
    cpy_r_conflict_locations = cpy_r_r32;
    goto CPyL26;
CPyL26: ;
    cpy_r_r33 = CPyStatic_unicode_63; /* 'count' */
    cpy_r_r34 = PyObject_CallMethodObjArgs(cpy_r_col, cpy_r_r33, cpy_r_current, NULL);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 109, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL27;
CPyL27: ;
    cpy_r_r35 = 2;
    cpy_r_r36 = CPyTagged_StealAsObject(cpy_r_r35);
    cpy_r_r37 = PyObject_RichCompare(cpy_r_r34, cpy_r_r36, Py_GT);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 109, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL28;
CPyL28: ;
    int __tmp10 = PyObject_IsTrue(cpy_r_r37);
    if (__tmp10 < 0)
        cpy_r_r38 = 2;
    else
        cpy_r_r38 = __tmp10;
    CPy_DecRef(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 109, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL29;
CPyL29: ;
    if (cpy_r_r38) {
        goto CPyL30;
    } else
        goto CPyL47;
CPyL30: ;
    cpy_r_r39 = PyList_New(0); 
    if (likely(cpy_r_r39 != NULL)) {
    }
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL31;
CPyL31: ;
    cpy_r_r40 = 0;
    cpy_r_r41 = CPyObject_Size(cpy_r_col);
    cpy_r_r42 = CPyTagged_StealAsObject(cpy_r_r41);
    cpy_r_r43 = cpy_r_r40;
    cpy_r_r44 = CPyTagged_StealAsObject(cpy_r_r43);
    cpy_r_j0 = cpy_r_r44;
    goto CPyL32;
CPyL32: ;
    cpy_r_r45 = PyObject_RichCompare(cpy_r_j0, cpy_r_r42, Py_LT);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL33;
CPyL33: ;
    int __tmp11 = PyObject_IsTrue(cpy_r_r45);
    if (__tmp11 < 0)
        cpy_r_r46 = 2;
    else
        cpy_r_r46 = __tmp11;
    CPy_DecRef(cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL34;
CPyL34: ;
    if (cpy_r_r46) {
        goto CPyL35;
    } else
        goto CPyL75;
CPyL35: ;
    cpy_r_r47 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL36;
CPyL36: ;
    cpy_r_r48 = CPyStatic_unicode_62; /* 'puzzle' */
    cpy_r_r49 = PyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    CPy_DecRef(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL37;
CPyL37: ;
    cpy_r_r50 = PyObject_GetItem(cpy_r_r49, cpy_r_i);
    CPy_DecRef(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL38;
CPyL38: ;
    cpy_r_r51 = PyObject_GetItem(cpy_r_r50, cpy_r_j0);
    CPy_DecRef(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL39;
CPyL39: ;
    cpy_r_r52 = PyObject_RichCompare(cpy_r_r51, cpy_r_current, Py_EQ);
    CPy_DecRef(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL40;
CPyL40: ;
    int __tmp12 = PyObject_IsTrue(cpy_r_r52);
    if (__tmp12 < 0)
        cpy_r_r53 = 2;
    else
        cpy_r_r53 = __tmp12;
    CPy_DecRef(cpy_r_r52);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL41;
CPyL41: ;
    if (cpy_r_r53) {
        goto CPyL42;
    } else
        goto CPyL76;
CPyL42: ;
    CPy_INCREF(cpy_r_i);
    cpy_r_r54 = PyList_New(2); 
    if (likely(cpy_r_r54 != NULL)) {
        PyList_SET_ITEM(cpy_r_r54, 0, cpy_r_i);
        PyList_SET_ITEM(cpy_r_r54, 1, cpy_r_j0);
    }
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL77;
    } else
        goto CPyL43;
CPyL43: ;
    cpy_r_r55 = PyList_Append(cpy_r_r39, cpy_r_r54) >= 0;
    CPy_DecRef(cpy_r_r54);
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL77;
    } else
        goto CPyL44;
CPyL44: ;
    cpy_r_r56 = 2;
    cpy_r_r57 = CPyTagged_Add(cpy_r_r43, cpy_r_r56);
    CPyTagged_IncRef(cpy_r_r57);
    cpy_r_r43 = cpy_r_r57;
    cpy_r_r58 = CPyTagged_StealAsObject(cpy_r_r57);
    cpy_r_j0 = cpy_r_r58;
    goto CPyL32;
CPyL45: ;
    cpy_r_r59 = PyNumber_InPlaceAdd(cpy_r_conflict_locations, cpy_r_r39);
    CPy_DecRef(cpy_r_conflict_locations);
    CPy_DecRef(cpy_r_r39);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 110, CPyStatic_globals);
        goto CPyL73;
    } else
        goto CPyL46;
CPyL46: ;
    cpy_r_conflict_locations = cpy_r_r59;
    goto CPyL47;
CPyL47: ;
    cpy_r_r60 = CPyStatic_unicode_63; /* 'count' */
    cpy_r_r61 = PyObject_CallMethodObjArgs(cpy_r_square, cpy_r_r60, cpy_r_current, NULL);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 111, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL48;
CPyL48: ;
    cpy_r_r62 = 2;
    cpy_r_r63 = CPyTagged_StealAsObject(cpy_r_r62);
    cpy_r_r64 = PyObject_RichCompare(cpy_r_r61, cpy_r_r63, Py_GT);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 111, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL49;
CPyL49: ;
    int __tmp13 = PyObject_IsTrue(cpy_r_r64);
    if (__tmp13 < 0)
        cpy_r_r65 = 2;
    else
        cpy_r_r65 = __tmp13;
    CPy_DecRef(cpy_r_r64);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 111, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL50;
CPyL50: ;
    if (cpy_r_r65) {
        goto CPyL51;
    } else
        goto CPyL78;
CPyL51: ;
    cpy_r_r66 = PyList_New(0); 
    if (likely(cpy_r_r66 != NULL)) {
    }
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 112, CPyStatic_globals);
        goto CPyL68;
    } else
        goto CPyL52;
CPyL52: ;
    cpy_r_r67 = 0;
    cpy_r_r68 = CPyObject_Size(cpy_r_square);
    cpy_r_r69 = CPyTagged_StealAsObject(cpy_r_r68);
    cpy_r_r70 = cpy_r_r67;
    cpy_r_r71 = CPyTagged_StealAsObject(cpy_r_r70);
    cpy_r_i1 = cpy_r_r71;
    goto CPyL53;
CPyL53: ;
    cpy_r_r72 = PyObject_RichCompare(cpy_r_i1, cpy_r_r69, Py_LT);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 112, CPyStatic_globals);
        goto CPyL79;
    } else
        goto CPyL54;
CPyL54: ;
    int __tmp14 = PyObject_IsTrue(cpy_r_r72);
    if (__tmp14 < 0)
        cpy_r_r73 = 2;
    else
        cpy_r_r73 = __tmp14;
    CPy_DecRef(cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 112, CPyStatic_globals);
        goto CPyL79;
    } else
        goto CPyL55;
CPyL55: ;
    if (cpy_r_r73) {
        goto CPyL56;
    } else
        goto CPyL80;
CPyL56: ;
    cpy_r_r74 = PyObject_GetItem(cpy_r_square, cpy_r_i1);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 112, CPyStatic_globals);
        goto CPyL79;
    } else
        goto CPyL57;
CPyL57: ;
    cpy_r_r75 = PyObject_RichCompare(cpy_r_r74, cpy_r_current, Py_EQ);
    CPy_DecRef(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 112, CPyStatic_globals);
        goto CPyL79;
    } else
        goto CPyL58;
CPyL58: ;
    int __tmp15 = PyObject_IsTrue(cpy_r_r75);
    if (__tmp15 < 0)
        cpy_r_r76 = 2;
    else
        cpy_r_r76 = __tmp15;
    CPy_DecRef(cpy_r_r75);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 112, CPyStatic_globals);
        goto CPyL79;
    } else
        goto CPyL59;
CPyL59: ;
    if (cpy_r_r76) {
        goto CPyL60;
    } else
        goto CPyL81;
CPyL60: ;
    CPy_INCREF(cpy_r_j);
    cpy_r_r77 = PyList_New(2); 
    if (likely(cpy_r_r77 != NULL)) {
        PyList_SET_ITEM(cpy_r_r77, 0, cpy_r_i1);
        PyList_SET_ITEM(cpy_r_r77, 1, cpy_r_j);
    }
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 112, CPyStatic_globals);
        goto CPyL82;
    } else
        goto CPyL61;
CPyL61: ;
    cpy_r_r78 = PyList_Append(cpy_r_r66, cpy_r_r77) >= 0;
    CPy_DecRef(cpy_r_r77);
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 112, CPyStatic_globals);
        goto CPyL82;
    } else
        goto CPyL62;
CPyL62: ;
    cpy_r_r79 = 2;
    cpy_r_r80 = CPyTagged_Add(cpy_r_r70, cpy_r_r79);
    CPyTagged_IncRef(cpy_r_r80);
    cpy_r_r70 = cpy_r_r80;
    cpy_r_r81 = CPyTagged_StealAsObject(cpy_r_r80);
    cpy_r_i1 = cpy_r_r81;
    goto CPyL53;
CPyL63: ;
    cpy_r_r82 = PyNumber_InPlaceAdd(cpy_r_conflict_locations, cpy_r_r66);
    CPy_DecRef(cpy_r_conflict_locations);
    CPy_DecRef(cpy_r_r66);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_conflict", 112, CPyStatic_globals);
        goto CPyL66;
    } else
        goto CPyL64;
CPyL64: ;
    cpy_r_conflict_locations = cpy_r_r82;
    goto CPyL65;
CPyL65: ;
    return cpy_r_conflict_locations;
CPyL66: ;
    cpy_r_r83 = NULL;
    return cpy_r_r83;
CPyL67: ;
    CPy_DecRef(cpy_r_conflict_locations);
    goto CPyL66;
CPyL68: ;
    CPy_DecRef(cpy_r_conflict_locations);
    CPy_DecRef(cpy_r_current);
    goto CPyL66;
CPyL69: ;
    CPy_DecRef(cpy_r_conflict_locations);
    CPy_DecRef(cpy_r_current);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_i0);
    goto CPyL66;
CPyL70: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_i0);
    goto CPyL24;
CPyL71: ;
    CPy_DecRef(cpy_r_i0);
    goto CPyL23;
CPyL72: ;
    CPy_DecRef(cpy_r_conflict_locations);
    CPy_DecRef(cpy_r_current);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL66;
CPyL73: ;
    CPy_DecRef(cpy_r_current);
    goto CPyL66;
CPyL74: ;
    CPy_DecRef(cpy_r_conflict_locations);
    CPy_DecRef(cpy_r_current);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_j0);
    goto CPyL66;
CPyL75: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_j0);
    goto CPyL45;
CPyL76: ;
    CPy_DecRef(cpy_r_j0);
    goto CPyL44;
CPyL77: ;
    CPy_DecRef(cpy_r_conflict_locations);
    CPy_DecRef(cpy_r_current);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r42);
    goto CPyL66;
CPyL78: ;
    CPy_DecRef(cpy_r_current);
    goto CPyL65;
CPyL79: ;
    CPy_DecRef(cpy_r_conflict_locations);
    CPy_DecRef(cpy_r_current);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_i1);
    goto CPyL66;
CPyL80: ;
    CPy_DecRef(cpy_r_current);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_i1);
    goto CPyL63;
CPyL81: ;
    CPy_DecRef(cpy_r_i1);
    goto CPyL62;
CPyL82: ;
    CPy_DecRef(cpy_r_conflict_locations);
    CPy_DecRef(cpy_r_current);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r69);
    goto CPyL66;
}

PyObject *CPyPy_SudokuUI___check_conflict(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"i", "j", "row", "col", "square", 0};
    PyObject *obj_i;
    PyObject *obj_j;
    PyObject *obj_row;
    PyObject *obj_col;
    PyObject *obj_square;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOOO:check_conflict", kwlist, &obj_i, &obj_j, &obj_row, &obj_col, &obj_square)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *arg_i = obj_i;
    PyObject *arg_j = obj_j;
    PyObject *arg_row = obj_row;
    PyObject *arg_col = obj_col;
    PyObject *arg_square = obj_square;
    PyObject *retval = CPyDef_SudokuUI___check_conflict(arg_self, arg_i, arg_j, arg_row, arg_col, arg_square);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "check_conflict", 100, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuUI____draw_puzzle(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_i;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_j;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_answer;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_y;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_original;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_square;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_conflict_locations;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_color;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyTagged cpy_r_r112;
    CPyTagged cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
CPyL0: ;
    cpy_r_r0 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 116, CPyStatic_globals);
        goto CPyL70;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = CPyStatic_unicode_64; /* 'numbers' */
    cpy_r_r2 = CPyStatic_unicode_65; /* 'delete' */
    cpy_r_r3 = PyObject_CallMethodObjArgs(cpy_r_r0, cpy_r_r2, cpy_r_r1, NULL);
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 116, CPyStatic_globals);
        goto CPyL70;
    } else
        goto CPyL71;
CPyL2: ;
    cpy_r_r4 = 0;
    cpy_r_r5 = 18;
    cpy_r_r6 = cpy_r_r4;
    cpy_r_r7 = CPyTagged_StealAsObject(cpy_r_r6);
    cpy_r_i = cpy_r_r7;
    goto CPyL3;
CPyL3: ;
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r5);
    cpy_r_r9 = PyObject_RichCompare(cpy_r_i, cpy_r_r8, Py_LT);
    CPy_DecRef(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 117, CPyStatic_globals);
        goto CPyL72;
    } else
        goto CPyL4;
CPyL4: ;
    int __tmp16 = PyObject_IsTrue(cpy_r_r9);
    if (__tmp16 < 0)
        cpy_r_r10 = 2;
    else
        cpy_r_r10 = __tmp16;
    CPy_DecRef(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 117, CPyStatic_globals);
        goto CPyL72;
    } else
        goto CPyL5;
CPyL5: ;
    if (cpy_r_r10) {
        goto CPyL6;
    } else
        goto CPyL73;
CPyL6: ;
    cpy_r_r11 = 0;
    cpy_r_r12 = 18;
    cpy_r_r13 = cpy_r_r11;
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_r13);
    cpy_r_j = cpy_r_r14;
    goto CPyL7;
CPyL7: ;
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_r12);
    cpy_r_r16 = PyObject_RichCompare(cpy_r_j, cpy_r_r15, Py_LT);
    CPy_DecRef(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 118, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL8;
CPyL8: ;
    int __tmp17 = PyObject_IsTrue(cpy_r_r16);
    if (__tmp17 < 0)
        cpy_r_r17 = 2;
    else
        cpy_r_r17 = __tmp17;
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 118, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL9;
CPyL9: ;
    if (cpy_r_r17) {
        goto CPyL10;
    } else
        goto CPyL75;
CPyL10: ;
    cpy_r_r18 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 119, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL11;
CPyL11: ;
    cpy_r_r19 = CPyStatic_unicode_62; /* 'puzzle' */
    cpy_r_r20 = PyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    CPy_DecRef(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 119, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL12;
CPyL12: ;
    cpy_r_r21 = PyObject_GetItem(cpy_r_r20, cpy_r_i);
    CPy_DecRef(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 119, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL13;
CPyL13: ;
    cpy_r_r22 = PyObject_GetItem(cpy_r_r21, cpy_r_j);
    CPy_DecRef(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 119, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL14;
CPyL14: ;
    cpy_r_answer = cpy_r_r22;
    cpy_r_r23 = 0;
    cpy_r_r24 = CPyTagged_StealAsObject(cpy_r_r23);
    cpy_r_r25 = PyObject_RichCompare(cpy_r_answer, cpy_r_r24, Py_NE);
    CPy_DecRef(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 120, CPyStatic_globals);
        goto CPyL76;
    } else
        goto CPyL15;
CPyL15: ;
    int __tmp18 = PyObject_IsTrue(cpy_r_r25);
    if (__tmp18 < 0)
        cpy_r_r26 = 2;
    else
        cpy_r_r26 = __tmp18;
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 120, CPyStatic_globals);
        goto CPyL76;
    } else
        goto CPyL16;
CPyL16: ;
    if (cpy_r_r26) {
        goto CPyL17;
    } else
        goto CPyL77;
CPyL17: ;
    cpy_r_r27 = CPyStatic_globals;
    cpy_r_r28 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 121, CPyStatic_globals);
        goto CPyL76;
    } else
        goto CPyL18;
CPyL18: ;
    if (likely(PyLong_Check(cpy_r_r29)))
        cpy_r_r30 = CPyTagged_FromObject(cpy_r_r29);
    else {
        CPy_TypeError("int", cpy_r_r29);
        cpy_r_r30 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r29);
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 121, CPyStatic_globals);
        goto CPyL76;
    } else
        goto CPyL19;
CPyL19: ;
    cpy_r_r31 = CPyStatic_globals;
    cpy_r_r32 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 121, CPyStatic_globals);
        goto CPyL78;
    } else
        goto CPyL20;
CPyL20: ;
    if (likely(PyLong_Check(cpy_r_r33)))
        cpy_r_r34 = CPyTagged_FromObject(cpy_r_r33);
    else {
        CPy_TypeError("int", cpy_r_r33);
        cpy_r_r34 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r33);
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 121, CPyStatic_globals);
        goto CPyL78;
    } else
        goto CPyL21;
CPyL21: ;
    cpy_r_r35 = CPyTagged_StealAsObject(cpy_r_r34);
    cpy_r_r36 = PyNumber_Multiply(cpy_r_j, cpy_r_r35);
    CPy_DecRef(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 121, CPyStatic_globals);
        goto CPyL78;
    } else
        goto CPyL22;
CPyL22: ;
    cpy_r_r37 = CPyTagged_StealAsObject(cpy_r_r30);
    cpy_r_r38 = PyNumber_Add(cpy_r_r37, cpy_r_r36);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 121, CPyStatic_globals);
        goto CPyL76;
    } else
        goto CPyL23;
CPyL23: ;
    cpy_r_r39 = CPyStatic_globals;
    cpy_r_r40 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 121, CPyStatic_globals);
        goto CPyL79;
    } else
        goto CPyL24;
CPyL24: ;
    if (likely(PyLong_Check(cpy_r_r41)))
        cpy_r_r42 = CPyTagged_FromObject(cpy_r_r41);
    else {
        CPy_TypeError("int", cpy_r_r41);
        cpy_r_r42 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r41);
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 121, CPyStatic_globals);
        goto CPyL79;
    } else
        goto CPyL25;
CPyL25: ;
    cpy_r_r43 = 4;
    cpy_r_r44 = CPyTagged_StealAsObject(cpy_r_r42);
    cpy_r_r45 = CPyTagged_StealAsObject(cpy_r_r43);
    cpy_r_r46 = PyNumber_TrueDivide(cpy_r_r44, cpy_r_r45);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 121, CPyStatic_globals);
        goto CPyL79;
    } else
        goto CPyL26;
CPyL26: ;
    cpy_r_r47 = PyNumber_Add(cpy_r_r38, cpy_r_r46);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 121, CPyStatic_globals);
        goto CPyL76;
    } else
        goto CPyL27;
CPyL27: ;
    cpy_r_x = cpy_r_r47;
    cpy_r_r48 = CPyStatic_globals;
    cpy_r_r49 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r50 = CPyDict_GetItem(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 122, CPyStatic_globals);
        goto CPyL80;
    } else
        goto CPyL28;
CPyL28: ;
    if (likely(PyLong_Check(cpy_r_r50)))
        cpy_r_r51 = CPyTagged_FromObject(cpy_r_r50);
    else {
        CPy_TypeError("int", cpy_r_r50);
        cpy_r_r51 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r50);
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 122, CPyStatic_globals);
        goto CPyL80;
    } else
        goto CPyL29;
CPyL29: ;
    cpy_r_r52 = CPyStatic_globals;
    cpy_r_r53 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 122, CPyStatic_globals);
        goto CPyL81;
    } else
        goto CPyL30;
CPyL30: ;
    if (likely(PyLong_Check(cpy_r_r54)))
        cpy_r_r55 = CPyTagged_FromObject(cpy_r_r54);
    else {
        CPy_TypeError("int", cpy_r_r54);
        cpy_r_r55 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r54);
    if (unlikely(cpy_r_r55 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 122, CPyStatic_globals);
        goto CPyL81;
    } else
        goto CPyL31;
CPyL31: ;
    cpy_r_r56 = CPyTagged_StealAsObject(cpy_r_r55);
    cpy_r_r57 = PyNumber_Multiply(cpy_r_i, cpy_r_r56);
    CPy_DecRef(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 122, CPyStatic_globals);
        goto CPyL81;
    } else
        goto CPyL32;
CPyL32: ;
    cpy_r_r58 = CPyTagged_StealAsObject(cpy_r_r51);
    cpy_r_r59 = PyNumber_Add(cpy_r_r58, cpy_r_r57);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r57);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 122, CPyStatic_globals);
        goto CPyL80;
    } else
        goto CPyL33;
CPyL33: ;
    cpy_r_r60 = CPyStatic_globals;
    cpy_r_r61 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 122, CPyStatic_globals);
        goto CPyL82;
    } else
        goto CPyL34;
CPyL34: ;
    if (likely(PyLong_Check(cpy_r_r62)))
        cpy_r_r63 = CPyTagged_FromObject(cpy_r_r62);
    else {
        CPy_TypeError("int", cpy_r_r62);
        cpy_r_r63 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r62);
    if (unlikely(cpy_r_r63 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 122, CPyStatic_globals);
        goto CPyL82;
    } else
        goto CPyL35;
CPyL35: ;
    cpy_r_r64 = 4;
    cpy_r_r65 = CPyTagged_StealAsObject(cpy_r_r63);
    cpy_r_r66 = CPyTagged_StealAsObject(cpy_r_r64);
    cpy_r_r67 = PyNumber_TrueDivide(cpy_r_r65, cpy_r_r66);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 122, CPyStatic_globals);
        goto CPyL82;
    } else
        goto CPyL36;
CPyL36: ;
    cpy_r_r68 = PyNumber_Add(cpy_r_r59, cpy_r_r67);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 122, CPyStatic_globals);
        goto CPyL80;
    } else
        goto CPyL37;
CPyL37: ;
    cpy_r_y = cpy_r_r68;
    cpy_r_r69 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 123, CPyStatic_globals);
        goto CPyL83;
    } else
        goto CPyL38;
CPyL38: ;
    cpy_r_r70 = CPyStatic_unicode_66; /* 'start_puzzle' */
    cpy_r_r71 = PyObject_GetAttr(cpy_r_r69, cpy_r_r70);
    CPy_DecRef(cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 123, CPyStatic_globals);
        goto CPyL83;
    } else
        goto CPyL39;
CPyL39: ;
    cpy_r_r72 = PyObject_GetItem(cpy_r_r71, cpy_r_i);
    CPy_DecRef(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 123, CPyStatic_globals);
        goto CPyL83;
    } else
        goto CPyL40;
CPyL40: ;
    cpy_r_r73 = PyObject_GetItem(cpy_r_r72, cpy_r_j);
    CPy_DecRef(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 123, CPyStatic_globals);
        goto CPyL83;
    } else
        goto CPyL41;
CPyL41: ;
    cpy_r_original = cpy_r_r73;
    cpy_r_r74 = CPyModule_builtins;
    cpy_r_r75 = CPyStatic_unicode_67; /* 'print' */
    cpy_r_r76 = PyObject_GetAttr(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 125, CPyStatic_globals);
        goto CPyL84;
    } else
        goto CPyL42;
CPyL42: ;
    cpy_r_r77 = PyObject_CallFunctionObjArgs(cpy_r_r76, cpy_r_i, cpy_r_j, NULL);
    CPy_DecRef(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 125, CPyStatic_globals);
        goto CPyL84;
    } else
        goto CPyL85;
CPyL43: ;
    cpy_r_r78 = CPyDef_SudokuUI___find_square(cpy_r_self, cpy_r_i, cpy_r_j);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 126, CPyStatic_globals);
        goto CPyL84;
    } else
        goto CPyL44;
CPyL44: ;
    cpy_r_square = cpy_r_r78;
    cpy_r_r79 = CPyModule_builtins;
    cpy_r_r80 = CPyStatic_unicode_67; /* 'print' */
    cpy_r_r81 = PyObject_GetAttr(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 127, CPyStatic_globals);
        goto CPyL86;
    } else
        goto CPyL45;
CPyL45: ;
    cpy_r_r82 = PyObject_CallFunctionObjArgs(cpy_r_r81, cpy_r_square, NULL);
    CPy_DecRef(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 127, CPyStatic_globals);
        goto CPyL86;
    } else
        goto CPyL87;
CPyL46: ;
    cpy_r_r83 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 129, CPyStatic_globals);
        goto CPyL86;
    } else
        goto CPyL47;
CPyL47: ;
    cpy_r_r84 = CPyStatic_unicode_62; /* 'puzzle' */
    cpy_r_r85 = PyObject_GetAttr(cpy_r_r83, cpy_r_r84);
    CPy_DecRef(cpy_r_r83);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 129, CPyStatic_globals);
        goto CPyL86;
    } else
        goto CPyL48;
CPyL48: ;
    cpy_r_r86 = PyObject_GetItem(cpy_r_r85, cpy_r_i);
    CPy_DecRef(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 129, CPyStatic_globals);
        goto CPyL86;
    } else
        goto CPyL49;
CPyL49: ;
    cpy_r_r87 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 129, CPyStatic_globals);
        goto CPyL88;
    } else
        goto CPyL50;
CPyL50: ;
    cpy_r_r88 = CPyStatic_unicode_62; /* 'puzzle' */
    cpy_r_r89 = PyObject_GetAttr(cpy_r_r87, cpy_r_r88);
    CPy_DecRef(cpy_r_r87);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 129, CPyStatic_globals);
        goto CPyL88;
    } else
        goto CPyL51;
CPyL51: ;
    cpy_r_r90 = PyObject_GetItem(cpy_r_r89, cpy_r_j);
    CPy_DecRef(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 129, CPyStatic_globals);
        goto CPyL88;
    } else
        goto CPyL52;
CPyL52: ;
    cpy_r_r91 = CPyDef_SudokuUI___check_conflict(cpy_r_self, cpy_r_i, cpy_r_j, cpy_r_r86, cpy_r_r90, cpy_r_square);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_square);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 129, CPyStatic_globals);
        goto CPyL84;
    } else
        goto CPyL53;
CPyL53: ;
    cpy_r_conflict_locations = cpy_r_r91;
    cpy_r_r92 = PyObject_RichCompare(cpy_r_answer, cpy_r_original, Py_EQ);
    CPy_DecRef(cpy_r_original);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 133, CPyStatic_globals);
        goto CPyL89;
    } else
        goto CPyL54;
CPyL54: ;
    int __tmp19 = PyObject_IsTrue(cpy_r_r92);
    if (__tmp19 < 0)
        cpy_r_r93 = 2;
    else
        cpy_r_r93 = __tmp19;
    CPy_DecRef(cpy_r_r92);
    if (unlikely(cpy_r_r93 == 2)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 133, CPyStatic_globals);
        goto CPyL89;
    } else
        goto CPyL55;
CPyL55: ;
    if (cpy_r_r93) {
        goto CPyL90;
    } else
        goto CPyL57;
CPyL56: ;
    cpy_r_r94 = CPyStatic_unicode_68; /* 'black' */
    CPy_INCREF(cpy_r_r94);
    cpy_r_color = cpy_r_r94;
    goto CPyL62;
CPyL57: ;
    CPy_INCREF(cpy_r_i);
    cpy_r_r95 = PyList_New(2); 
    if (likely(cpy_r_r95 != NULL)) {
        PyList_SET_ITEM(cpy_r_r95, 0, cpy_r_i);
        PyList_SET_ITEM(cpy_r_r95, 1, cpy_r_j);
    }
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 135, CPyStatic_globals);
        goto CPyL91;
    } else
        goto CPyL58;
CPyL58: ;
    int __tmp20 = PySequence_Contains(cpy_r_conflict_locations, cpy_r_r95);
    if (__tmp20 < 0)
        cpy_r_r96 = 2;
    else
        cpy_r_r96 = __tmp20;
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_conflict_locations);
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 135, CPyStatic_globals);
        goto CPyL92;
    } else
        goto CPyL59;
CPyL59: ;
    if (cpy_r_r96) {
        goto CPyL60;
    } else
        goto CPyL61;
CPyL60: ;
    cpy_r_r97 = CPyStatic_unicode_69; /* 'red' */
    CPy_INCREF(cpy_r_r97);
    cpy_r_color = cpy_r_r97;
    goto CPyL62;
CPyL61: ;
    cpy_r_r98 = CPyStatic_unicode_70; /* 'sea green' */
    CPy_INCREF(cpy_r_r98);
    cpy_r_color = cpy_r_r98;
    goto CPyL62;
CPyL62: ;
    cpy_r_r99 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 139, CPyStatic_globals);
        goto CPyL93;
    } else
        goto CPyL63;
CPyL63: ;
    cpy_r_r100 = CPyStatic_unicode_64; /* 'numbers' */
    cpy_r_r101 = CPyStatic_unicode_71; /* 'create_text' */
    cpy_r_r102 = PyObject_GetAttr(cpy_r_r99, cpy_r_r101);
    CPy_DecRef(cpy_r_r99);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 139, CPyStatic_globals);
        goto CPyL93;
    } else
        goto CPyL64;
CPyL64: ;
    cpy_r_r103 = CPyStatic_unicode_52; /* 'text' */
    cpy_r_r104 = CPyStatic_unicode_72; /* 'tags' */
    cpy_r_r105 = CPyStatic_unicode_45; /* 'fill' */
    cpy_r_r106 = PyTuple_Pack(2, cpy_r_x, cpy_r_y);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 139, CPyStatic_globals);
        goto CPyL94;
    } else
        goto CPyL65;
CPyL65: ;
    cpy_r_r107 = CPyDict_Build(3, cpy_r_r103, cpy_r_answer, cpy_r_r104, cpy_r_r100, cpy_r_r105, cpy_r_color);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_color);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 139, CPyStatic_globals);
        goto CPyL95;
    } else
        goto CPyL66;
CPyL66: ;
    cpy_r_r108 = PyObject_Call(cpy_r_r102, cpy_r_r106, cpy_r_r107);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r106);
    CPy_DecRef(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_puzzle", 139, CPyStatic_globals);
        goto CPyL72;
    } else
        goto CPyL96;
CPyL67: ;
    cpy_r_r109 = 2;
    cpy_r_r110 = cpy_r_r13 + cpy_r_r109;
    cpy_r_r13 = cpy_r_r110;
    cpy_r_r111 = CPyTagged_StealAsObject(cpy_r_r110);
    cpy_r_j = cpy_r_r111;
    goto CPyL7;
CPyL68: ;
    cpy_r_r112 = 2;
    cpy_r_r113 = cpy_r_r6 + cpy_r_r112;
    cpy_r_r6 = cpy_r_r113;
    cpy_r_r114 = CPyTagged_StealAsObject(cpy_r_r113);
    cpy_r_i = cpy_r_r114;
    goto CPyL3;
CPyL69: ;
    cpy_r_r115 = 1; /* None */
    cpy_r_r116 = Py_None;
    CPy_INCREF(cpy_r_r116);
    return cpy_r_r116;
CPyL70: ;
    cpy_r_r117 = NULL;
    return cpy_r_r117;
CPyL71: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL2;
CPyL72: ;
    CPy_DecRef(cpy_r_i);
    goto CPyL70;
CPyL73: ;
    CPy_DecRef(cpy_r_i);
    goto CPyL69;
CPyL74: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    goto CPyL70;
CPyL75: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    goto CPyL68;
CPyL76: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    goto CPyL70;
CPyL77: ;
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    goto CPyL67;
CPyL78: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    CPyTagged_DecRef(cpy_r_r30);
    goto CPyL70;
CPyL79: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_r38);
    goto CPyL70;
CPyL80: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_x);
    goto CPyL70;
CPyL81: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_x);
    CPyTagged_DecRef(cpy_r_r51);
    goto CPyL70;
CPyL82: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_r59);
    goto CPyL70;
CPyL83: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    goto CPyL70;
CPyL84: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_original);
    goto CPyL70;
CPyL85: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL43;
CPyL86: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_original);
    CPy_DecRef(cpy_r_square);
    goto CPyL70;
CPyL87: ;
    CPy_DecRef(cpy_r_r82);
    goto CPyL46;
CPyL88: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_original);
    CPy_DecRef(cpy_r_square);
    CPy_DecRef(cpy_r_r86);
    goto CPyL70;
CPyL89: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_conflict_locations);
    goto CPyL70;
CPyL90: ;
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_conflict_locations);
    goto CPyL56;
CPyL91: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_conflict_locations);
    goto CPyL70;
CPyL92: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    goto CPyL70;
CPyL93: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_color);
    goto CPyL70;
CPyL94: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_answer);
    CPy_DecRef(cpy_r_color);
    CPy_DecRef(cpy_r_r102);
    goto CPyL70;
CPyL95: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r106);
    goto CPyL70;
CPyL96: ;
    CPy_DecRef(cpy_r_r108);
    goto CPyL67;
}

PyObject *CPyPy_SudokuUI____draw_puzzle(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, ":_draw_puzzle", kwlist)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *retval = CPyDef_SudokuUI____draw_puzzle(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_draw_puzzle", 115, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuUI____clear_answers(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
CPyL0: ;
    cpy_r_r0 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_clear_answers", 144, CPyStatic_globals);
        goto CPyL6;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = CPyStatic_unicode_73; /* 'start' */
    cpy_r_r2 = PyObject_CallMethodObjArgs(cpy_r_r0, cpy_r_r1, NULL);
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_clear_answers", 144, CPyStatic_globals);
        goto CPyL6;
    } else
        goto CPyL7;
CPyL2: ;
    cpy_r_r3 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_clear_answers", 145, CPyStatic_globals);
        goto CPyL6;
    } else
        goto CPyL3;
CPyL3: ;
    cpy_r_r4 = CPyStatic_unicode_74; /* 'victory' */
    cpy_r_r5 = CPyStatic_unicode_65; /* 'delete' */
    cpy_r_r6 = PyObject_CallMethodObjArgs(cpy_r_r3, cpy_r_r5, cpy_r_r4, NULL);
    CPy_DecRef(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_clear_answers", 145, CPyStatic_globals);
        goto CPyL6;
    } else
        goto CPyL8;
CPyL4: ;
    cpy_r_r7 = CPyDef_SudokuUI____draw_puzzle(cpy_r_self);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_clear_answers", 146, CPyStatic_globals);
        goto CPyL6;
    } else
        goto CPyL9;
CPyL5: ;
    cpy_r_r8 = 1; /* None */
    cpy_r_r9 = Py_None;
    CPy_INCREF(cpy_r_r9);
    return cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL4;
CPyL9: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL5;
}

PyObject *CPyPy_SudokuUI____clear_answers(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, ":_clear_answers", kwlist)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *retval = CPyDef_SudokuUI____clear_answers(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_clear_answers", 143, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuUI____cell_clicked(PyObject *cpy_r_self, PyObject *cpy_r_event) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_x;
    PyObject *cpy_r_y;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyTagged cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    tuple_T2OO cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_row;
    PyObject *cpy_r_col;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_current_answer;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_original_answer;
    tuple_T2OO cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyTagged cpy_r_r112;
    PyObject *cpy_r_r113;
    tuple_T2OO cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    CPyTagged cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    CPyTagged cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    tuple_T2OO cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    CPyTagged cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    CPyTagged cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    CPyTagged cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    tuple_T2OO cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    CPyTagged cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    CPyTagged cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    CPyTagged cpy_r_r162;
    CPyTagged cpy_r_r163;
    PyObject *cpy_r_r164;
    CPyTagged cpy_r_r165;
    CPyTagged cpy_r_r166;
    PyObject *cpy_r_r167;
    tuple_T2OO cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    CPyTagged cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    CPyTagged cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
CPyL0: ;
    cpy_r_r0 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 149, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = CPyStatic_unicode_75; /* 'game_over' */
    cpy_r_r2 = PyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 149, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL2;
CPyL2: ;
    int __tmp21 = PyObject_IsTrue(cpy_r_r2);
    if (__tmp21 < 0)
        cpy_r_r3 = 2;
    else
        cpy_r_r3 = __tmp21;
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 149, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL3;
CPyL3: ;
    if (cpy_r_r3) {
        goto CPyL4;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r4 = 1; /* None */
    cpy_r_r5 = Py_None;
    CPy_INCREF(cpy_r_r5);
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = CPyStatic_unicode_76; /* 'x' */
    cpy_r_r7 = PyObject_GetAttr(cpy_r_event, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 151, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL6;
CPyL6: ;
    cpy_r_r8 = CPyStatic_unicode_77; /* 'y' */
    cpy_r_r9 = PyObject_GetAttr(cpy_r_event, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 151, CPyStatic_globals);
        goto CPyL139;
    } else
        goto CPyL7;
CPyL7: ;
    cpy_r_r10.f0 = cpy_r_r7;
    cpy_r_r10.f1 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    CPy_INCREF(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp22 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp22);
    PyObject *__tmp23 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp23);
    cpy_r_r12 = PyObject_GetIter(cpy_r_r11);
    CPy_DecRef(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 151, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL8;
CPyL8: ;
    cpy_r_r13 = PyIter_Next(cpy_r_r12);
    if (cpy_r_r13 == NULL) {
        goto CPyL140;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 151, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL10;
CPyL10: ;
    CPy_Unreachable();
CPyL11: ;
    cpy_r_x = cpy_r_r13;
    cpy_r_r15 = PyIter_Next(cpy_r_r12);
    if (cpy_r_r15 == NULL) {
        goto CPyL141;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 151, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL13;
CPyL13: ;
    CPy_Unreachable();
CPyL14: ;
    cpy_r_y = cpy_r_r15;
    cpy_r_r17 = PyIter_Next(cpy_r_r12);
    CPy_DecRef(cpy_r_r12);
    if (cpy_r_r17 == NULL) {
        goto CPyL17;
    } else
        goto CPyL142;
CPyL15: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 151, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL16;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r19 = CPyStatic_globals;
    cpy_r_r20 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL18;
CPyL18: ;
    if (likely(PyLong_Check(cpy_r_r21)))
        cpy_r_r22 = CPyTagged_FromObject(cpy_r_r21);
    else {
        CPy_TypeError("int", cpy_r_r21);
        cpy_r_r22 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r21);
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL19;
CPyL19: ;
    cpy_r_r24 = CPyTagged_StealAsObject(cpy_r_r22);
    cpy_r_r25 = PyObject_RichCompare(cpy_r_r24, cpy_r_x, Py_LT);
    CPy_DecRef(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL20;
CPyL20: ;
    int __tmp24 = PyObject_IsTrue(cpy_r_r25);
    if (__tmp24 < 0)
        cpy_r_r26 = 2;
    else
        cpy_r_r26 = __tmp24;
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL144;
    } else
        goto CPyL21;
CPyL21: ;
    if (cpy_r_r26) {
        goto CPyL145;
    } else
        goto CPyL22;
CPyL22: ;
    cpy_r_r23 = cpy_r_r25;
    goto CPyL29;
CPyL23: ;
    cpy_r_r27 = CPyStatic_globals;
    cpy_r_r28 = CPyStatic_unicode_17; /* 'WIDTH' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL24;
CPyL24: ;
    if (likely(PyLong_Check(cpy_r_r29)))
        cpy_r_r30 = CPyTagged_FromObject(cpy_r_r29);
    else {
        CPy_TypeError("int", cpy_r_r29);
        cpy_r_r30 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r29);
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL25;
CPyL25: ;
    cpy_r_r31 = CPyStatic_globals;
    cpy_r_r32 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL146;
    } else
        goto CPyL26;
CPyL26: ;
    if (likely(PyLong_Check(cpy_r_r33)))
        cpy_r_r34 = CPyTagged_FromObject(cpy_r_r33);
    else {
        CPy_TypeError("int", cpy_r_r33);
        cpy_r_r34 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r33);
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL146;
    } else
        goto CPyL27;
CPyL27: ;
    cpy_r_r35 = CPyTagged_Subtract(cpy_r_r30, cpy_r_r34);
    CPyTagged_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r34);
    cpy_r_r36 = CPyTagged_StealAsObject(cpy_r_r35);
    cpy_r_r37 = PyObject_RichCompare(cpy_r_x, cpy_r_r36, Py_LT);
    CPy_DecRef(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL28;
CPyL28: ;
    cpy_r_r23 = cpy_r_r37;
    goto CPyL29;
CPyL29: ;
    int __tmp25 = PyObject_IsTrue(cpy_r_r23);
    if (__tmp25 < 0)
        cpy_r_r38 = 2;
    else
        cpy_r_r38 = __tmp25;
    CPy_DecRef(cpy_r_r23);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", -1, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL30;
CPyL30: ;
    if (cpy_r_r38) {
        goto CPyL31;
    } else
        goto CPyL147;
CPyL31: ;
    cpy_r_r39 = CPyStatic_globals;
    cpy_r_r40 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL32;
CPyL32: ;
    if (likely(PyLong_Check(cpy_r_r41)))
        cpy_r_r42 = CPyTagged_FromObject(cpy_r_r41);
    else {
        CPy_TypeError("int", cpy_r_r41);
        cpy_r_r42 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r41);
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL33;
CPyL33: ;
    cpy_r_r44 = CPyTagged_StealAsObject(cpy_r_r42);
    cpy_r_r45 = PyObject_RichCompare(cpy_r_r44, cpy_r_y, Py_LT);
    CPy_DecRef(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL34;
CPyL34: ;
    int __tmp26 = PyObject_IsTrue(cpy_r_r45);
    if (__tmp26 < 0)
        cpy_r_r46 = 2;
    else
        cpy_r_r46 = __tmp26;
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL148;
    } else
        goto CPyL35;
CPyL35: ;
    if (cpy_r_r46) {
        goto CPyL149;
    } else
        goto CPyL36;
CPyL36: ;
    cpy_r_r43 = cpy_r_r45;
    goto CPyL43;
CPyL37: ;
    cpy_r_r47 = CPyStatic_globals;
    cpy_r_r48 = CPyStatic_unicode_18; /* 'HEIGHT' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL38;
CPyL38: ;
    if (likely(PyLong_Check(cpy_r_r49)))
        cpy_r_r50 = CPyTagged_FromObject(cpy_r_r49);
    else {
        CPy_TypeError("int", cpy_r_r49);
        cpy_r_r50 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r49);
    if (unlikely(cpy_r_r50 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL39;
CPyL39: ;
    cpy_r_r51 = CPyStatic_globals;
    cpy_r_r52 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL150;
    } else
        goto CPyL40;
CPyL40: ;
    if (likely(PyLong_Check(cpy_r_r53)))
        cpy_r_r54 = CPyTagged_FromObject(cpy_r_r53);
    else {
        CPy_TypeError("int", cpy_r_r53);
        cpy_r_r54 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r53);
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL150;
    } else
        goto CPyL41;
CPyL41: ;
    cpy_r_r55 = CPyTagged_Subtract(cpy_r_r50, cpy_r_r54);
    CPyTagged_DecRef(cpy_r_r50);
    CPyTagged_DecRef(cpy_r_r54);
    cpy_r_r56 = CPyTagged_StealAsObject(cpy_r_r55);
    cpy_r_r57 = PyObject_RichCompare(cpy_r_y, cpy_r_r56, Py_LT);
    CPy_DecRef(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 152, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL42;
CPyL42: ;
    cpy_r_r43 = cpy_r_r57;
    goto CPyL43;
CPyL43: ;
    int __tmp27 = PyObject_IsTrue(cpy_r_r43);
    if (__tmp27 < 0)
        cpy_r_r58 = 2;
    else
        cpy_r_r58 = __tmp27;
    CPy_DecRef(cpy_r_r43);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", -1, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL44;
CPyL44: ;
    if (cpy_r_r58) {
        goto CPyL45;
    } else
        goto CPyL147;
CPyL45: ;
    cpy_r_r59 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 153, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL46;
CPyL46: ;
    cpy_r_r60 = CPyStatic_unicode_78; /* 'focus_set' */
    cpy_r_r61 = PyObject_CallMethodObjArgs(cpy_r_r59, cpy_r_r60, NULL);
    CPy_DecRef(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 153, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL151;
CPyL47: ;
    cpy_r_r62 = CPyStatic_globals;
    cpy_r_r63 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r64 = CPyDict_GetItem(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL48;
CPyL48: ;
    if (likely(PyLong_Check(cpy_r_r64)))
        cpy_r_r65 = CPyTagged_FromObject(cpy_r_r64);
    else {
        CPy_TypeError("int", cpy_r_r64);
        cpy_r_r65 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r64);
    if (unlikely(cpy_r_r65 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL143;
    } else
        goto CPyL49;
CPyL49: ;
    cpy_r_r66 = CPyTagged_StealAsObject(cpy_r_r65);
    cpy_r_r67 = PyNumber_Subtract(cpy_r_y, cpy_r_r66);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL152;
    } else
        goto CPyL50;
CPyL50: ;
    cpy_r_r68 = CPyStatic_globals;
    cpy_r_r69 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL153;
    } else
        goto CPyL51;
CPyL51: ;
    if (likely(PyLong_Check(cpy_r_r70)))
        cpy_r_r71 = CPyTagged_FromObject(cpy_r_r70);
    else {
        CPy_TypeError("int", cpy_r_r70);
        cpy_r_r71 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r70);
    if (unlikely(cpy_r_r71 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL153;
    } else
        goto CPyL52;
CPyL52: ;
    cpy_r_r72 = CPyTagged_StealAsObject(cpy_r_r71);
    cpy_r_r73 = PyNumber_TrueDivide(cpy_r_r67, cpy_r_r72);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL152;
    } else
        goto CPyL53;
CPyL53: ;
    cpy_r_r74 = (PyObject *)&PyLong_Type;
    cpy_r_r75 = PyObject_CallFunctionObjArgs(cpy_r_r74, cpy_r_r73, NULL);
    CPy_DecRef(cpy_r_r73);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL152;
    } else
        goto CPyL54;
CPyL54: ;
    cpy_r_r76 = CPyStatic_globals;
    cpy_r_r77 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL154;
    } else
        goto CPyL55;
CPyL55: ;
    if (likely(PyLong_Check(cpy_r_r78)))
        cpy_r_r79 = CPyTagged_FromObject(cpy_r_r78);
    else {
        CPy_TypeError("int", cpy_r_r78);
        cpy_r_r79 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r78);
    if (unlikely(cpy_r_r79 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL154;
    } else
        goto CPyL56;
CPyL56: ;
    cpy_r_r80 = CPyTagged_StealAsObject(cpy_r_r79);
    cpy_r_r81 = PyNumber_Subtract(cpy_r_x, cpy_r_r80);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL155;
    } else
        goto CPyL57;
CPyL57: ;
    cpy_r_r82 = CPyStatic_globals;
    cpy_r_r83 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r84 = CPyDict_GetItem(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL156;
    } else
        goto CPyL58;
CPyL58: ;
    if (likely(PyLong_Check(cpy_r_r84)))
        cpy_r_r85 = CPyTagged_FromObject(cpy_r_r84);
    else {
        CPy_TypeError("int", cpy_r_r84);
        cpy_r_r85 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r84);
    if (unlikely(cpy_r_r85 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL156;
    } else
        goto CPyL59;
CPyL59: ;
    cpy_r_r86 = CPyTagged_StealAsObject(cpy_r_r85);
    cpy_r_r87 = PyNumber_TrueDivide(cpy_r_r81, cpy_r_r86);
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL155;
    } else
        goto CPyL60;
CPyL60: ;
    cpy_r_r88 = (PyObject *)&PyLong_Type;
    cpy_r_r89 = PyObject_CallFunctionObjArgs(cpy_r_r88, cpy_r_r87, NULL);
    CPy_DecRef(cpy_r_r87);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL155;
    } else
        goto CPyL61;
CPyL61: ;
    cpy_r_r90.f0 = cpy_r_r75;
    cpy_r_r90.f1 = cpy_r_r89;
    CPy_INCREF(cpy_r_r90.f0);
    CPy_INCREF(cpy_r_r90.f1);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r89);
    cpy_r_r91 = PyTuple_New(2);
    if (unlikely(cpy_r_r91 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp28 = cpy_r_r90.f0;
    PyTuple_SET_ITEM(cpy_r_r91, 0, __tmp28);
    PyObject *__tmp29 = cpy_r_r90.f1;
    PyTuple_SET_ITEM(cpy_r_r91, 1, __tmp29);
    cpy_r_r92 = PyObject_GetIter(cpy_r_r91);
    CPy_DecRef(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL62;
CPyL62: ;
    cpy_r_r93 = PyIter_Next(cpy_r_r92);
    if (cpy_r_r93 == NULL) {
        goto CPyL157;
    } else
        goto CPyL65;
CPyL63: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r94 = 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL64;
CPyL64: ;
    CPy_Unreachable();
CPyL65: ;
    cpy_r_row = cpy_r_r93;
    cpy_r_r95 = PyIter_Next(cpy_r_r92);
    if (cpy_r_r95 == NULL) {
        goto CPyL158;
    } else
        goto CPyL68;
CPyL66: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r96 = 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL67;
CPyL67: ;
    CPy_Unreachable();
CPyL68: ;
    cpy_r_col = cpy_r_r95;
    cpy_r_r97 = PyIter_Next(cpy_r_r92);
    CPy_DecRef(cpy_r_r92);
    if (cpy_r_r97 == NULL) {
        goto CPyL71;
    } else
        goto CPyL159;
CPyL69: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r98 = 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 156, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL70;
CPyL70: ;
    CPy_Unreachable();
CPyL71: ;
    cpy_r_r99 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 158, CPyStatic_globals);
        goto CPyL160;
    } else
        goto CPyL72;
CPyL72: ;
    cpy_r_r100 = CPyStatic_unicode_62; /* 'puzzle' */
    cpy_r_r101 = PyObject_GetAttr(cpy_r_r99, cpy_r_r100);
    CPy_DecRef(cpy_r_r99);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 158, CPyStatic_globals);
        goto CPyL160;
    } else
        goto CPyL73;
CPyL73: ;
    cpy_r_r102 = PyObject_GetItem(cpy_r_r101, cpy_r_row);
    CPy_DecRef(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 158, CPyStatic_globals);
        goto CPyL160;
    } else
        goto CPyL74;
CPyL74: ;
    cpy_r_r103 = PyObject_GetItem(cpy_r_r102, cpy_r_col);
    CPy_DecRef(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 158, CPyStatic_globals);
        goto CPyL160;
    } else
        goto CPyL75;
CPyL75: ;
    cpy_r_current_answer = cpy_r_r103;
    cpy_r_r104 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 159, CPyStatic_globals);
        goto CPyL161;
    } else
        goto CPyL76;
CPyL76: ;
    cpy_r_r105 = CPyStatic_unicode_66; /* 'start_puzzle' */
    cpy_r_r106 = PyObject_GetAttr(cpy_r_r104, cpy_r_r105);
    CPy_DecRef(cpy_r_r104);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 159, CPyStatic_globals);
        goto CPyL161;
    } else
        goto CPyL77;
CPyL77: ;
    cpy_r_r107 = PyObject_GetItem(cpy_r_r106, cpy_r_row);
    CPy_DecRef(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 159, CPyStatic_globals);
        goto CPyL161;
    } else
        goto CPyL78;
CPyL78: ;
    cpy_r_r108 = PyObject_GetItem(cpy_r_r107, cpy_r_col);
    CPy_DecRef(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 159, CPyStatic_globals);
        goto CPyL161;
    } else
        goto CPyL79;
CPyL79: ;
    cpy_r_original_answer = cpy_r_r108;
    cpy_r_r109.f0 = cpy_r_row;
    cpy_r_r109.f1 = cpy_r_col;
    CPy_INCREF(cpy_r_r109.f0);
    CPy_INCREF(cpy_r_r109.f1);
    cpy_r_r110 = native_SudokuUI_getrow((sudoku___SudokuUIObject *)cpy_r_self); /* row */
    if (unlikely(cpy_r_r110 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 161, CPyStatic_globals);
        goto CPyL162;
    } else
        goto CPyL80;
CPyL80: ;
    cpy_r_r111 = CPyTagged_StealAsObject(cpy_r_r110);
    cpy_r_r112 = native_SudokuUI_getcol((sudoku___SudokuUIObject *)cpy_r_self); /* col */
    if (unlikely(cpy_r_r112 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 161, CPyStatic_globals);
        goto CPyL163;
    } else
        goto CPyL81;
CPyL81: ;
    cpy_r_r113 = CPyTagged_StealAsObject(cpy_r_r112);
    cpy_r_r114.f0 = cpy_r_r111;
    cpy_r_r114.f1 = cpy_r_r113;
    CPy_INCREF(cpy_r_r114.f0);
    CPy_INCREF(cpy_r_r114.f1);
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r113);
    cpy_r_r115 = PyTuple_New(2);
    if (unlikely(cpy_r_r115 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp30 = cpy_r_r109.f0;
    PyTuple_SET_ITEM(cpy_r_r115, 0, __tmp30);
    PyObject *__tmp31 = cpy_r_r109.f1;
    PyTuple_SET_ITEM(cpy_r_r115, 1, __tmp31);
    cpy_r_r116 = PyTuple_New(2);
    if (unlikely(cpy_r_r116 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp32 = cpy_r_r114.f0;
    PyTuple_SET_ITEM(cpy_r_r116, 0, __tmp32);
    PyObject *__tmp33 = cpy_r_r114.f1;
    PyTuple_SET_ITEM(cpy_r_r116, 1, __tmp33);
    cpy_r_r117 = PyObject_RichCompare(cpy_r_r115, cpy_r_r116, Py_EQ);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 161, CPyStatic_globals);
        goto CPyL164;
    } else
        goto CPyL82;
CPyL82: ;
    int __tmp34 = PyObject_IsTrue(cpy_r_r117);
    if (__tmp34 < 0)
        cpy_r_r118 = 2;
    else
        cpy_r_r118 = __tmp34;
    CPy_DecRef(cpy_r_r117);
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 161, CPyStatic_globals);
        goto CPyL164;
    } else
        goto CPyL83;
CPyL83: ;
    if (cpy_r_r118) {
        goto CPyL165;
    } else
        goto CPyL98;
CPyL84: ;
    cpy_r_r119 = 2;
    cpy_r_r120 = CPyTagged_Negate(cpy_r_r119);
    cpy_r_r121 = CPyTagged_StealAsObject(cpy_r_r120);
    cpy_r_r122 = 2;
    cpy_r_r123 = CPyTagged_Negate(cpy_r_r122);
    cpy_r_r124 = CPyTagged_StealAsObject(cpy_r_r123);
    cpy_r_r125.f0 = cpy_r_r121;
    cpy_r_r125.f1 = cpy_r_r124;
    CPy_INCREF(cpy_r_r125.f0);
    CPy_INCREF(cpy_r_r125.f1);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r124);
    cpy_r_r126 = PyTuple_New(2);
    if (unlikely(cpy_r_r126 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp35 = cpy_r_r125.f0;
    PyTuple_SET_ITEM(cpy_r_r126, 0, __tmp35);
    PyObject *__tmp36 = cpy_r_r125.f1;
    PyTuple_SET_ITEM(cpy_r_r126, 1, __tmp36);
    cpy_r_r127 = PyObject_GetIter(cpy_r_r126);
    CPy_DecRef(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 162, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL85;
CPyL85: ;
    cpy_r_r128 = PyIter_Next(cpy_r_r127);
    if (cpy_r_r128 == NULL) {
        goto CPyL166;
    } else
        goto CPyL88;
CPyL86: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r129 = 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 162, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL87;
CPyL87: ;
    CPy_Unreachable();
CPyL88: ;
    if (likely(PyLong_Check(cpy_r_r128)))
        cpy_r_r130 = CPyTagged_FromObject(cpy_r_r128);
    else {
        CPy_TypeError("int", cpy_r_r128);
        cpy_r_r130 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r128);
    if (unlikely(cpy_r_r130 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 162, CPyStatic_globals);
        goto CPyL167;
    } else
        goto CPyL89;
CPyL89: ;
    cpy_r_r131 = native_SudokuUI_setrow((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_r130); /* row */
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 162, CPyStatic_globals);
        goto CPyL167;
    } else
        goto CPyL90;
CPyL90: ;
    cpy_r_r132 = PyIter_Next(cpy_r_r127);
    if (cpy_r_r132 == NULL) {
        goto CPyL168;
    } else
        goto CPyL93;
CPyL91: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r133 = 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 162, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL92;
CPyL92: ;
    CPy_Unreachable();
CPyL93: ;
    if (likely(PyLong_Check(cpy_r_r132)))
        cpy_r_r134 = CPyTagged_FromObject(cpy_r_r132);
    else {
        CPy_TypeError("int", cpy_r_r132);
        cpy_r_r134 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r132);
    if (unlikely(cpy_r_r134 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 162, CPyStatic_globals);
        goto CPyL167;
    } else
        goto CPyL94;
CPyL94: ;
    cpy_r_r135 = native_SudokuUI_setcol((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_r134); /* col */
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 162, CPyStatic_globals);
        goto CPyL167;
    } else
        goto CPyL95;
CPyL95: ;
    cpy_r_r136 = PyIter_Next(cpy_r_r127);
    CPy_DecRef(cpy_r_r127);
    if (cpy_r_r136 == NULL) {
        goto CPyL136;
    } else
        goto CPyL169;
CPyL96: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r137 = 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 162, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL97;
CPyL97: ;
    CPy_Unreachable();
CPyL98: ;
    cpy_r_r138 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 164, CPyStatic_globals);
        goto CPyL164;
    } else
        goto CPyL99;
CPyL99: ;
    cpy_r_r139 = CPyStatic_unicode_62; /* 'puzzle' */
    cpy_r_r140 = PyObject_GetAttr(cpy_r_r138, cpy_r_r139);
    CPy_DecRef(cpy_r_r138);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 164, CPyStatic_globals);
        goto CPyL164;
    } else
        goto CPyL100;
CPyL100: ;
    cpy_r_r141 = PyObject_GetItem(cpy_r_r140, cpy_r_row);
    CPy_DecRef(cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 164, CPyStatic_globals);
        goto CPyL164;
    } else
        goto CPyL101;
CPyL101: ;
    cpy_r_r142 = PyObject_GetItem(cpy_r_r141, cpy_r_col);
    CPy_DecRef(cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 164, CPyStatic_globals);
        goto CPyL164;
    } else
        goto CPyL102;
CPyL102: ;
    cpy_r_r143 = 0;
    cpy_r_r144 = CPyTagged_StealAsObject(cpy_r_r143);
    cpy_r_r145 = PyObject_RichCompare(cpy_r_r142, cpy_r_r144, Py_EQ);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 164, CPyStatic_globals);
        goto CPyL164;
    } else
        goto CPyL103;
CPyL103: ;
    int __tmp37 = PyObject_IsTrue(cpy_r_r145);
    if (__tmp37 < 0)
        cpy_r_r146 = 2;
    else
        cpy_r_r146 = __tmp37;
    CPy_DecRef(cpy_r_r145);
    if (unlikely(cpy_r_r146 == 2)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 164, CPyStatic_globals);
        goto CPyL164;
    } else
        goto CPyL104;
CPyL104: ;
    if (cpy_r_r146) {
        goto CPyL170;
    } else
        goto CPyL105;
CPyL105: ;
    cpy_r_r147 = PyObject_RichCompare(cpy_r_current_answer, cpy_r_original_answer, Py_NE);
    CPy_DecRef(cpy_r_current_answer);
    CPy_DecRef(cpy_r_original_answer);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 164, CPyStatic_globals);
        goto CPyL160;
    } else
        goto CPyL106;
CPyL106: ;
    int __tmp38 = PyObject_IsTrue(cpy_r_r147);
    if (__tmp38 < 0)
        cpy_r_r148 = 2;
    else
        cpy_r_r148 = __tmp38;
    CPy_DecRef(cpy_r_r147);
    if (unlikely(cpy_r_r148 == 2)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 164, CPyStatic_globals);
        goto CPyL160;
    } else
        goto CPyL107;
CPyL107: ;
    if (cpy_r_r148) {
        goto CPyL108;
    } else
        goto CPyL171;
CPyL108: ;
    cpy_r_r149.f0 = cpy_r_row;
    cpy_r_r149.f1 = cpy_r_col;
    CPy_INCREF(cpy_r_r149.f0);
    CPy_INCREF(cpy_r_r149.f1);
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_col);
    cpy_r_r150 = PyTuple_New(2);
    if (unlikely(cpy_r_r150 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp39 = cpy_r_r149.f0;
    PyTuple_SET_ITEM(cpy_r_r150, 0, __tmp39);
    PyObject *__tmp40 = cpy_r_r149.f1;
    PyTuple_SET_ITEM(cpy_r_r150, 1, __tmp40);
    cpy_r_r151 = PyObject_GetIter(cpy_r_r150);
    CPy_DecRef(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 165, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL109;
CPyL109: ;
    cpy_r_r152 = PyIter_Next(cpy_r_r151);
    if (cpy_r_r152 == NULL) {
        goto CPyL172;
    } else
        goto CPyL112;
CPyL110: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r153 = 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 165, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL111;
CPyL111: ;
    CPy_Unreachable();
CPyL112: ;
    if (likely(PyLong_Check(cpy_r_r152)))
        cpy_r_r154 = CPyTagged_FromObject(cpy_r_r152);
    else {
        CPy_TypeError("int", cpy_r_r152);
        cpy_r_r154 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r152);
    if (unlikely(cpy_r_r154 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 165, CPyStatic_globals);
        goto CPyL173;
    } else
        goto CPyL113;
CPyL113: ;
    cpy_r_r155 = native_SudokuUI_setrow((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_r154); /* row */
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 165, CPyStatic_globals);
        goto CPyL173;
    } else
        goto CPyL114;
CPyL114: ;
    cpy_r_r156 = PyIter_Next(cpy_r_r151);
    if (cpy_r_r156 == NULL) {
        goto CPyL174;
    } else
        goto CPyL117;
CPyL115: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r157 = 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 165, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL116;
CPyL116: ;
    CPy_Unreachable();
CPyL117: ;
    if (likely(PyLong_Check(cpy_r_r156)))
        cpy_r_r158 = CPyTagged_FromObject(cpy_r_r156);
    else {
        CPy_TypeError("int", cpy_r_r156);
        cpy_r_r158 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r156);
    if (unlikely(cpy_r_r158 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 165, CPyStatic_globals);
        goto CPyL173;
    } else
        goto CPyL118;
CPyL118: ;
    cpy_r_r159 = native_SudokuUI_setcol((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_r158); /* col */
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 165, CPyStatic_globals);
        goto CPyL173;
    } else
        goto CPyL119;
CPyL119: ;
    cpy_r_r160 = PyIter_Next(cpy_r_r151);
    CPy_DecRef(cpy_r_r151);
    if (cpy_r_r160 == NULL) {
        goto CPyL136;
    } else
        goto CPyL175;
CPyL120: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r161 = 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 165, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL121;
CPyL121: ;
    CPy_Unreachable();
CPyL122: ;
    cpy_r_r162 = 2;
    cpy_r_r163 = CPyTagged_Negate(cpy_r_r162);
    cpy_r_r164 = CPyTagged_StealAsObject(cpy_r_r163);
    cpy_r_r165 = 2;
    cpy_r_r166 = CPyTagged_Negate(cpy_r_r165);
    cpy_r_r167 = CPyTagged_StealAsObject(cpy_r_r166);
    cpy_r_r168.f0 = cpy_r_r164;
    cpy_r_r168.f1 = cpy_r_r167;
    CPy_INCREF(cpy_r_r168.f0);
    CPy_INCREF(cpy_r_r168.f1);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r167);
    cpy_r_r169 = PyTuple_New(2);
    if (unlikely(cpy_r_r169 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp41 = cpy_r_r168.f0;
    PyTuple_SET_ITEM(cpy_r_r169, 0, __tmp41);
    PyObject *__tmp42 = cpy_r_r168.f1;
    PyTuple_SET_ITEM(cpy_r_r169, 1, __tmp42);
    cpy_r_r170 = PyObject_GetIter(cpy_r_r169);
    CPy_DecRef(cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 168, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL123;
CPyL123: ;
    cpy_r_r171 = PyIter_Next(cpy_r_r170);
    if (cpy_r_r171 == NULL) {
        goto CPyL176;
    } else
        goto CPyL126;
CPyL124: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r172 = 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 168, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL125;
CPyL125: ;
    CPy_Unreachable();
CPyL126: ;
    if (likely(PyLong_Check(cpy_r_r171)))
        cpy_r_r173 = CPyTagged_FromObject(cpy_r_r171);
    else {
        CPy_TypeError("int", cpy_r_r171);
        cpy_r_r173 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r171);
    if (unlikely(cpy_r_r173 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 168, CPyStatic_globals);
        goto CPyL177;
    } else
        goto CPyL127;
CPyL127: ;
    cpy_r_r174 = native_SudokuUI_setrow((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_r173); /* row */
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 168, CPyStatic_globals);
        goto CPyL177;
    } else
        goto CPyL128;
CPyL128: ;
    cpy_r_r175 = PyIter_Next(cpy_r_r170);
    if (cpy_r_r175 == NULL) {
        goto CPyL178;
    } else
        goto CPyL131;
CPyL129: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r176 = 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 168, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL130;
CPyL130: ;
    CPy_Unreachable();
CPyL131: ;
    if (likely(PyLong_Check(cpy_r_r175)))
        cpy_r_r177 = CPyTagged_FromObject(cpy_r_r175);
    else {
        CPy_TypeError("int", cpy_r_r175);
        cpy_r_r177 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r175);
    if (unlikely(cpy_r_r177 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 168, CPyStatic_globals);
        goto CPyL177;
    } else
        goto CPyL132;
CPyL132: ;
    cpy_r_r178 = native_SudokuUI_setcol((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_r177); /* col */
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 168, CPyStatic_globals);
        goto CPyL177;
    } else
        goto CPyL133;
CPyL133: ;
    cpy_r_r179 = PyIter_Next(cpy_r_r170);
    CPy_DecRef(cpy_r_r170);
    if (cpy_r_r179 == NULL) {
        goto CPyL136;
    } else
        goto CPyL179;
CPyL134: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r180 = 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 168, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL135;
CPyL135: ;
    CPy_Unreachable();
CPyL136: ;
    cpy_r_r181 = CPyDef_SudokuUI____draw_cursor(cpy_r_self);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_cell_clicked", 170, CPyStatic_globals);
        goto CPyL138;
    } else
        goto CPyL180;
CPyL137: ;
    cpy_r_r182 = 1; /* None */
    cpy_r_r183 = Py_None;
    CPy_INCREF(cpy_r_r183);
    return cpy_r_r183;
CPyL138: ;
    cpy_r_r184 = NULL;
    return cpy_r_r184;
CPyL139: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL138;
CPyL140: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL9;
CPyL141: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_r12);
    goto CPyL12;
CPyL142: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_r17);
    goto CPyL15;
CPyL143: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    goto CPyL138;
CPyL144: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_r25);
    goto CPyL138;
CPyL145: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL23;
CPyL146: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPyTagged_DecRef(cpy_r_r30);
    goto CPyL138;
CPyL147: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    goto CPyL122;
CPyL148: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_r45);
    goto CPyL138;
CPyL149: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL37;
CPyL150: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPyTagged_DecRef(cpy_r_r50);
    goto CPyL138;
CPyL151: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL47;
CPyL152: ;
    CPy_DecRef(cpy_r_x);
    goto CPyL138;
CPyL153: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_r67);
    goto CPyL138;
CPyL154: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_r75);
    goto CPyL138;
CPyL155: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL138;
CPyL156: ;
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r81);
    goto CPyL138;
CPyL157: ;
    CPy_DecRef(cpy_r_r92);
    goto CPyL63;
CPyL158: ;
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_r92);
    goto CPyL66;
CPyL159: ;
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_col);
    CPy_DecRef(cpy_r_r97);
    goto CPyL69;
CPyL160: ;
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_col);
    goto CPyL138;
CPyL161: ;
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_col);
    CPy_DecRef(cpy_r_current_answer);
    goto CPyL138;
CPyL162: ;
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_col);
    CPy_DecRef(cpy_r_current_answer);
    CPy_DecRef(cpy_r_original_answer);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    goto CPyL138;
CPyL163: ;
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_col);
    CPy_DecRef(cpy_r_current_answer);
    CPy_DecRef(cpy_r_original_answer);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r111);
    goto CPyL138;
CPyL164: ;
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_col);
    CPy_DecRef(cpy_r_current_answer);
    CPy_DecRef(cpy_r_original_answer);
    goto CPyL138;
CPyL165: ;
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_col);
    CPy_DecRef(cpy_r_current_answer);
    CPy_DecRef(cpy_r_original_answer);
    goto CPyL84;
CPyL166: ;
    CPy_DecRef(cpy_r_r127);
    goto CPyL86;
CPyL167: ;
    CPy_DecRef(cpy_r_r127);
    goto CPyL138;
CPyL168: ;
    CPy_DecRef(cpy_r_r127);
    goto CPyL91;
CPyL169: ;
    CPy_DecRef(cpy_r_r136);
    goto CPyL96;
CPyL170: ;
    CPy_DecRef(cpy_r_current_answer);
    CPy_DecRef(cpy_r_original_answer);
    goto CPyL108;
CPyL171: ;
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_col);
    goto CPyL136;
CPyL172: ;
    CPy_DecRef(cpy_r_r151);
    goto CPyL110;
CPyL173: ;
    CPy_DecRef(cpy_r_r151);
    goto CPyL138;
CPyL174: ;
    CPy_DecRef(cpy_r_r151);
    goto CPyL115;
CPyL175: ;
    CPy_DecRef(cpy_r_r160);
    goto CPyL120;
CPyL176: ;
    CPy_DecRef(cpy_r_r170);
    goto CPyL124;
CPyL177: ;
    CPy_DecRef(cpy_r_r170);
    goto CPyL138;
CPyL178: ;
    CPy_DecRef(cpy_r_r170);
    goto CPyL129;
CPyL179: ;
    CPy_DecRef(cpy_r_r179);
    goto CPyL134;
CPyL180: ;
    CPy_DecRef(cpy_r_r181);
    goto CPyL137;
}

PyObject *CPyPy_SudokuUI____cell_clicked(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"event", 0};
    PyObject *obj_event;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O:_cell_clicked", kwlist, &obj_event)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *arg_event = obj_event;
    PyObject *retval = CPyDef_SudokuUI____cell_clicked(arg_self, arg_event);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_cell_clicked", 148, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuUI____draw_cursor(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_x0;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_y0;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_x1;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyTagged cpy_r_r73;
    CPyTagged cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyTagged cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_y1;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
CPyL0: ;
    cpy_r_r0 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 173, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = CPyStatic_unicode_79; /* 'cursor' */
    cpy_r_r2 = CPyStatic_unicode_65; /* 'delete' */
    cpy_r_r3 = PyObject_CallMethodObjArgs(cpy_r_r0, cpy_r_r2, cpy_r_r1, NULL);
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 173, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL51;
CPyL2: ;
    cpy_r_r4 = native_SudokuUI_getrow((sudoku___SudokuUIObject *)cpy_r_self); /* row */
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 175, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL3;
CPyL3: ;
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_r4);
    cpy_r_r6 = 0;
    cpy_r_r7 = CPyTagged_StealAsObject(cpy_r_r6);
    cpy_r_r8 = PyObject_RichCompare(cpy_r_r5, cpy_r_r7, Py_GE);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 175, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL4;
CPyL4: ;
    int __tmp43 = PyObject_IsTrue(cpy_r_r8);
    if (__tmp43 < 0)
        cpy_r_r9 = 2;
    else
        cpy_r_r9 = __tmp43;
    CPy_DecRef(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 175, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL5;
CPyL5: ;
    if (cpy_r_r9) {
        goto CPyL6;
    } else
        goto CPyL49;
CPyL6: ;
    cpy_r_r10 = native_SudokuUI_getcol((sudoku___SudokuUIObject *)cpy_r_self); /* col */
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 175, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL7;
CPyL7: ;
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r12 = 0;
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_r12);
    cpy_r_r14 = PyObject_RichCompare(cpy_r_r11, cpy_r_r13, Py_GE);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 175, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL8;
CPyL8: ;
    int __tmp44 = PyObject_IsTrue(cpy_r_r14);
    if (__tmp44 < 0)
        cpy_r_r15 = 2;
    else
        cpy_r_r15 = __tmp44;
    CPy_DecRef(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 175, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL9;
CPyL9: ;
    if (cpy_r_r15) {
        goto CPyL10;
    } else
        goto CPyL49;
CPyL10: ;
    cpy_r_r16 = CPyStatic_globals;
    cpy_r_r17 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 176, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL11;
CPyL11: ;
    if (likely(PyLong_Check(cpy_r_r18)))
        cpy_r_r19 = CPyTagged_FromObject(cpy_r_r18);
    else {
        CPy_TypeError("int", cpy_r_r18);
        cpy_r_r19 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r18);
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 176, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL12;
CPyL12: ;
    cpy_r_r20 = native_SudokuUI_getcol((sudoku___SudokuUIObject *)cpy_r_self); /* col */
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 176, CPyStatic_globals);
        goto CPyL52;
    } else
        goto CPyL13;
CPyL13: ;
    cpy_r_r21 = CPyTagged_StealAsObject(cpy_r_r20);
    cpy_r_r22 = CPyStatic_globals;
    cpy_r_r23 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 176, CPyStatic_globals);
        goto CPyL53;
    } else
        goto CPyL14;
CPyL14: ;
    if (likely(PyLong_Check(cpy_r_r24)))
        cpy_r_r25 = CPyTagged_FromObject(cpy_r_r24);
    else {
        CPy_TypeError("int", cpy_r_r24);
        cpy_r_r25 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r24);
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 176, CPyStatic_globals);
        goto CPyL53;
    } else
        goto CPyL15;
CPyL15: ;
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_r25);
    cpy_r_r27 = PyNumber_Multiply(cpy_r_r21, cpy_r_r26);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 176, CPyStatic_globals);
        goto CPyL52;
    } else
        goto CPyL16;
CPyL16: ;
    cpy_r_r28 = CPyTagged_StealAsObject(cpy_r_r19);
    cpy_r_r29 = PyNumber_Add(cpy_r_r28, cpy_r_r27);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 176, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL17;
CPyL17: ;
    cpy_r_r30 = 2;
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_r30);
    cpy_r_r32 = PyNumber_Add(cpy_r_r29, cpy_r_r31);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 176, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL18;
CPyL18: ;
    cpy_r_x0 = cpy_r_r32;
    cpy_r_r33 = CPyStatic_globals;
    cpy_r_r34 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 177, CPyStatic_globals);
        goto CPyL54;
    } else
        goto CPyL19;
CPyL19: ;
    if (likely(PyLong_Check(cpy_r_r35)))
        cpy_r_r36 = CPyTagged_FromObject(cpy_r_r35);
    else {
        CPy_TypeError("int", cpy_r_r35);
        cpy_r_r36 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r35);
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 177, CPyStatic_globals);
        goto CPyL54;
    } else
        goto CPyL20;
CPyL20: ;
    cpy_r_r37 = native_SudokuUI_getrow((sudoku___SudokuUIObject *)cpy_r_self); /* row */
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 177, CPyStatic_globals);
        goto CPyL55;
    } else
        goto CPyL21;
CPyL21: ;
    cpy_r_r38 = CPyTagged_StealAsObject(cpy_r_r37);
    cpy_r_r39 = CPyStatic_globals;
    cpy_r_r40 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 177, CPyStatic_globals);
        goto CPyL56;
    } else
        goto CPyL22;
CPyL22: ;
    if (likely(PyLong_Check(cpy_r_r41)))
        cpy_r_r42 = CPyTagged_FromObject(cpy_r_r41);
    else {
        CPy_TypeError("int", cpy_r_r41);
        cpy_r_r42 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r41);
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 177, CPyStatic_globals);
        goto CPyL56;
    } else
        goto CPyL23;
CPyL23: ;
    cpy_r_r43 = CPyTagged_StealAsObject(cpy_r_r42);
    cpy_r_r44 = PyNumber_Multiply(cpy_r_r38, cpy_r_r43);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 177, CPyStatic_globals);
        goto CPyL55;
    } else
        goto CPyL24;
CPyL24: ;
    cpy_r_r45 = CPyTagged_StealAsObject(cpy_r_r36);
    cpy_r_r46 = PyNumber_Add(cpy_r_r45, cpy_r_r44);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 177, CPyStatic_globals);
        goto CPyL54;
    } else
        goto CPyL25;
CPyL25: ;
    cpy_r_r47 = 2;
    cpy_r_r48 = CPyTagged_StealAsObject(cpy_r_r47);
    cpy_r_r49 = PyNumber_Add(cpy_r_r46, cpy_r_r48);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 177, CPyStatic_globals);
        goto CPyL54;
    } else
        goto CPyL26;
CPyL26: ;
    cpy_r_y0 = cpy_r_r49;
    cpy_r_r50 = CPyStatic_globals;
    cpy_r_r51 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r52 = CPyDict_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 178, CPyStatic_globals);
        goto CPyL57;
    } else
        goto CPyL27;
CPyL27: ;
    if (likely(PyLong_Check(cpy_r_r52)))
        cpy_r_r53 = CPyTagged_FromObject(cpy_r_r52);
    else {
        CPy_TypeError("int", cpy_r_r52);
        cpy_r_r53 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r52);
    if (unlikely(cpy_r_r53 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 178, CPyStatic_globals);
        goto CPyL57;
    } else
        goto CPyL28;
CPyL28: ;
    cpy_r_r54 = native_SudokuUI_getcol((sudoku___SudokuUIObject *)cpy_r_self); /* col */
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 178, CPyStatic_globals);
        goto CPyL58;
    } else
        goto CPyL29;
CPyL29: ;
    cpy_r_r55 = CPyTagged_StealAsObject(cpy_r_r54);
    cpy_r_r56 = 2;
    cpy_r_r57 = CPyTagged_StealAsObject(cpy_r_r56);
    cpy_r_r58 = PyNumber_Add(cpy_r_r55, cpy_r_r57);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 178, CPyStatic_globals);
        goto CPyL58;
    } else
        goto CPyL30;
CPyL30: ;
    cpy_r_r59 = CPyStatic_globals;
    cpy_r_r60 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r61 = CPyDict_GetItem(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 178, CPyStatic_globals);
        goto CPyL59;
    } else
        goto CPyL31;
CPyL31: ;
    if (likely(PyLong_Check(cpy_r_r61)))
        cpy_r_r62 = CPyTagged_FromObject(cpy_r_r61);
    else {
        CPy_TypeError("int", cpy_r_r61);
        cpy_r_r62 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r61);
    if (unlikely(cpy_r_r62 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 178, CPyStatic_globals);
        goto CPyL59;
    } else
        goto CPyL32;
CPyL32: ;
    cpy_r_r63 = CPyTagged_StealAsObject(cpy_r_r62);
    cpy_r_r64 = PyNumber_Multiply(cpy_r_r58, cpy_r_r63);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 178, CPyStatic_globals);
        goto CPyL58;
    } else
        goto CPyL33;
CPyL33: ;
    cpy_r_r65 = CPyTagged_StealAsObject(cpy_r_r53);
    cpy_r_r66 = PyNumber_Add(cpy_r_r65, cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 178, CPyStatic_globals);
        goto CPyL57;
    } else
        goto CPyL34;
CPyL34: ;
    cpy_r_r67 = 2;
    cpy_r_r68 = CPyTagged_StealAsObject(cpy_r_r67);
    cpy_r_r69 = PyNumber_Subtract(cpy_r_r66, cpy_r_r68);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 178, CPyStatic_globals);
        goto CPyL57;
    } else
        goto CPyL35;
CPyL35: ;
    cpy_r_x1 = cpy_r_r69;
    cpy_r_r70 = CPyStatic_globals;
    cpy_r_r71 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r72 = CPyDict_GetItem(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 179, CPyStatic_globals);
        goto CPyL60;
    } else
        goto CPyL36;
CPyL36: ;
    if (likely(PyLong_Check(cpy_r_r72)))
        cpy_r_r73 = CPyTagged_FromObject(cpy_r_r72);
    else {
        CPy_TypeError("int", cpy_r_r72);
        cpy_r_r73 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r72);
    if (unlikely(cpy_r_r73 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 179, CPyStatic_globals);
        goto CPyL60;
    } else
        goto CPyL37;
CPyL37: ;
    cpy_r_r74 = native_SudokuUI_getrow((sudoku___SudokuUIObject *)cpy_r_self); /* row */
    if (unlikely(cpy_r_r74 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 179, CPyStatic_globals);
        goto CPyL61;
    } else
        goto CPyL38;
CPyL38: ;
    cpy_r_r75 = CPyTagged_StealAsObject(cpy_r_r74);
    cpy_r_r76 = 2;
    cpy_r_r77 = CPyTagged_StealAsObject(cpy_r_r76);
    cpy_r_r78 = PyNumber_Add(cpy_r_r75, cpy_r_r77);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 179, CPyStatic_globals);
        goto CPyL61;
    } else
        goto CPyL39;
CPyL39: ;
    cpy_r_r79 = CPyStatic_globals;
    cpy_r_r80 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r81 = CPyDict_GetItem(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 179, CPyStatic_globals);
        goto CPyL62;
    } else
        goto CPyL40;
CPyL40: ;
    if (likely(PyLong_Check(cpy_r_r81)))
        cpy_r_r82 = CPyTagged_FromObject(cpy_r_r81);
    else {
        CPy_TypeError("int", cpy_r_r81);
        cpy_r_r82 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r81);
    if (unlikely(cpy_r_r82 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 179, CPyStatic_globals);
        goto CPyL62;
    } else
        goto CPyL41;
CPyL41: ;
    cpy_r_r83 = CPyTagged_StealAsObject(cpy_r_r82);
    cpy_r_r84 = PyNumber_Multiply(cpy_r_r78, cpy_r_r83);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 179, CPyStatic_globals);
        goto CPyL61;
    } else
        goto CPyL42;
CPyL42: ;
    cpy_r_r85 = CPyTagged_StealAsObject(cpy_r_r73);
    cpy_r_r86 = PyNumber_Add(cpy_r_r85, cpy_r_r84);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r84);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 179, CPyStatic_globals);
        goto CPyL60;
    } else
        goto CPyL43;
CPyL43: ;
    cpy_r_r87 = 2;
    cpy_r_r88 = CPyTagged_StealAsObject(cpy_r_r87);
    cpy_r_r89 = PyNumber_Subtract(cpy_r_r86, cpy_r_r88);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 179, CPyStatic_globals);
        goto CPyL60;
    } else
        goto CPyL44;
CPyL44: ;
    cpy_r_y1 = cpy_r_r89;
    cpy_r_r90 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 181, CPyStatic_globals);
        goto CPyL63;
    } else
        goto CPyL45;
CPyL45: ;
    cpy_r_r91 = CPyStatic_unicode_69; /* 'red' */
    cpy_r_r92 = CPyStatic_unicode_79; /* 'cursor' */
    cpy_r_r93 = CPyStatic_unicode_80; /* 'create_rectangle' */
    cpy_r_r94 = PyObject_GetAttr(cpy_r_r90, cpy_r_r93);
    CPy_DecRef(cpy_r_r90);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 181, CPyStatic_globals);
        goto CPyL63;
    } else
        goto CPyL46;
CPyL46: ;
    cpy_r_r95 = CPyStatic_unicode_81; /* 'outline' */
    cpy_r_r96 = CPyStatic_unicode_72; /* 'tags' */
    cpy_r_r97 = PyTuple_Pack(4, cpy_r_x0, cpy_r_y0, cpy_r_x1, cpy_r_y1);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPy_DecRef(cpy_r_y1);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 181, CPyStatic_globals);
        goto CPyL64;
    } else
        goto CPyL47;
CPyL47: ;
    cpy_r_r98 = CPyDict_Build(2, cpy_r_r95, cpy_r_r91, cpy_r_r96, cpy_r_r92);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 181, CPyStatic_globals);
        goto CPyL65;
    } else
        goto CPyL48;
CPyL48: ;
    cpy_r_r99 = PyObject_Call(cpy_r_r94, cpy_r_r97, cpy_r_r98);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_cursor", 181, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL66;
CPyL49: ;
    cpy_r_r100 = 1; /* None */
    cpy_r_r101 = Py_None;
    CPy_INCREF(cpy_r_r101);
    return cpy_r_r101;
CPyL50: ;
    cpy_r_r102 = NULL;
    return cpy_r_r102;
CPyL51: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL2;
CPyL52: ;
    CPyTagged_DecRef(cpy_r_r19);
    goto CPyL50;
CPyL53: ;
    CPyTagged_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    goto CPyL50;
CPyL54: ;
    CPy_DecRef(cpy_r_x0);
    goto CPyL50;
CPyL55: ;
    CPy_DecRef(cpy_r_x0);
    CPyTagged_DecRef(cpy_r_r36);
    goto CPyL50;
CPyL56: ;
    CPy_DecRef(cpy_r_x0);
    CPyTagged_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r38);
    goto CPyL50;
CPyL57: ;
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    goto CPyL50;
CPyL58: ;
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPyTagged_DecRef(cpy_r_r53);
    goto CPyL50;
CPyL59: ;
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPyTagged_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r58);
    goto CPyL50;
CPyL60: ;
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    goto CPyL50;
CPyL61: ;
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPyTagged_DecRef(cpy_r_r73);
    goto CPyL50;
CPyL62: ;
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPyTagged_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r78);
    goto CPyL50;
CPyL63: ;
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPy_DecRef(cpy_r_y1);
    goto CPyL50;
CPyL64: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL50;
CPyL65: ;
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    goto CPyL50;
CPyL66: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL49;
}

PyObject *CPyPy_SudokuUI____draw_cursor(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, ":_draw_cursor", kwlist)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *retval = CPyDef_SudokuUI____draw_cursor(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_draw_cursor", 172, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuUI____key_pressed(PyObject *cpy_r_self, PyObject *cpy_r_event) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    tuple_T2OO cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
CPyL0: ;
    cpy_r_r0 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 184, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = CPyStatic_unicode_75; /* 'game_over' */
    cpy_r_r2 = PyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 184, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL2;
CPyL2: ;
    int __tmp45 = PyObject_IsTrue(cpy_r_r2);
    if (__tmp45 < 0)
        cpy_r_r3 = 2;
    else
        cpy_r_r3 = __tmp45;
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 184, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL3;
CPyL3: ;
    if (cpy_r_r3) {
        goto CPyL4;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r4 = 1; /* None */
    cpy_r_r5 = Py_None;
    CPy_INCREF(cpy_r_r5);
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = native_SudokuUI_getrow((sudoku___SudokuUIObject *)cpy_r_self); /* row */
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 186, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL6;
CPyL6: ;
    cpy_r_r7 = CPyTagged_StealAsObject(cpy_r_r6);
    cpy_r_r8 = 0;
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_r8);
    cpy_r_r10 = PyObject_RichCompare(cpy_r_r7, cpy_r_r9, Py_GE);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 186, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL7;
CPyL7: ;
    int __tmp46 = PyObject_IsTrue(cpy_r_r10);
    if (__tmp46 < 0)
        cpy_r_r11 = 2;
    else
        cpy_r_r11 = __tmp46;
    CPy_DecRef(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 186, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL8;
CPyL8: ;
    if (cpy_r_r11) {
        goto CPyL9;
    } else
        goto CPyL45;
CPyL9: ;
    cpy_r_r12 = native_SudokuUI_getcol((sudoku___SudokuUIObject *)cpy_r_self); /* col */
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 186, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL10;
CPyL10: ;
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_r12);
    cpy_r_r14 = 0;
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_r14);
    cpy_r_r16 = PyObject_RichCompare(cpy_r_r13, cpy_r_r15, Py_GE);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 186, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL11;
CPyL11: ;
    int __tmp47 = PyObject_IsTrue(cpy_r_r16);
    if (__tmp47 < 0)
        cpy_r_r17 = 2;
    else
        cpy_r_r17 = __tmp47;
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 186, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL12;
CPyL12: ;
    if (cpy_r_r17) {
        goto CPyL13;
    } else
        goto CPyL45;
CPyL13: ;
    cpy_r_r18 = CPyStatic_unicode_82; /* 'char' */
    cpy_r_r19 = PyObject_GetAttr(cpy_r_event, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 186, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL14;
CPyL14: ;
    cpy_r_r20 = CPyStatic_unicode_83; /* '1234567890' */
    int __tmp48 = PySequence_Contains(cpy_r_r20, cpy_r_r19);
    if (__tmp48 < 0)
        cpy_r_r21 = 2;
    else
        cpy_r_r21 = __tmp48;
    CPy_DecRef(cpy_r_r19);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 186, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL15;
CPyL15: ;
    if (cpy_r_r21) {
        goto CPyL16;
    } else
        goto CPyL45;
CPyL16: ;
    cpy_r_r22 = CPyStatic_unicode_82; /* 'char' */
    cpy_r_r23 = PyObject_GetAttr(cpy_r_event, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 187, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL17;
CPyL17: ;
    cpy_r_r24 = (PyObject *)&PyLong_Type;
    cpy_r_r25 = PyObject_CallFunctionObjArgs(cpy_r_r24, cpy_r_r23, NULL);
    CPy_DecRef(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 187, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL18;
CPyL18: ;
    cpy_r_r26 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 187, CPyStatic_globals);
        goto CPyL47;
    } else
        goto CPyL19;
CPyL19: ;
    cpy_r_r27 = CPyStatic_unicode_62; /* 'puzzle' */
    cpy_r_r28 = PyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    CPy_DecRef(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 187, CPyStatic_globals);
        goto CPyL47;
    } else
        goto CPyL20;
CPyL20: ;
    cpy_r_r29 = native_SudokuUI_getrow((sudoku___SudokuUIObject *)cpy_r_self); /* row */
    if (unlikely(cpy_r_r29 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 187, CPyStatic_globals);
        goto CPyL48;
    } else
        goto CPyL21;
CPyL21: ;
    cpy_r_r30 = CPyTagged_StealAsObject(cpy_r_r29);
    cpy_r_r31 = PyObject_GetItem(cpy_r_r28, cpy_r_r30);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 187, CPyStatic_globals);
        goto CPyL47;
    } else
        goto CPyL22;
CPyL22: ;
    cpy_r_r32 = native_SudokuUI_getcol((sudoku___SudokuUIObject *)cpy_r_self); /* col */
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 187, CPyStatic_globals);
        goto CPyL49;
    } else
        goto CPyL23;
CPyL23: ;
    cpy_r_r33 = CPyTagged_StealAsObject(cpy_r_r32);
    cpy_r_r34 = PyObject_SetItem(cpy_r_r31, cpy_r_r33, cpy_r_r25) >= 0;
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 187, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL24;
CPyL24: ;
    cpy_r_r35 = 2;
    cpy_r_r36 = CPyTagged_Negate(cpy_r_r35);
    cpy_r_r37 = CPyTagged_StealAsObject(cpy_r_r36);
    cpy_r_r38 = 2;
    cpy_r_r39 = CPyTagged_Negate(cpy_r_r38);
    cpy_r_r40 = CPyTagged_StealAsObject(cpy_r_r39);
    cpy_r_r41.f0 = cpy_r_r37;
    cpy_r_r41.f1 = cpy_r_r40;
    CPy_INCREF(cpy_r_r41.f0);
    CPy_INCREF(cpy_r_r41.f1);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r40);
    cpy_r_r42 = PyTuple_New(2);
    if (unlikely(cpy_r_r42 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp49 = cpy_r_r41.f0;
    PyTuple_SET_ITEM(cpy_r_r42, 0, __tmp49);
    PyObject *__tmp50 = cpy_r_r41.f1;
    PyTuple_SET_ITEM(cpy_r_r42, 1, __tmp50);
    cpy_r_r43 = PyObject_GetIter(cpy_r_r42);
    CPy_DecRef(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 188, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL25;
CPyL25: ;
    cpy_r_r44 = PyIter_Next(cpy_r_r43);
    if (cpy_r_r44 == NULL) {
        goto CPyL50;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 188, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL27;
CPyL27: ;
    CPy_Unreachable();
CPyL28: ;
    if (likely(PyLong_Check(cpy_r_r44)))
        cpy_r_r46 = CPyTagged_FromObject(cpy_r_r44);
    else {
        CPy_TypeError("int", cpy_r_r44);
        cpy_r_r46 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r44);
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 188, CPyStatic_globals);
        goto CPyL51;
    } else
        goto CPyL29;
CPyL29: ;
    cpy_r_r47 = native_SudokuUI_setcol((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_r46); /* col */
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 188, CPyStatic_globals);
        goto CPyL51;
    } else
        goto CPyL30;
CPyL30: ;
    cpy_r_r48 = PyIter_Next(cpy_r_r43);
    if (cpy_r_r48 == NULL) {
        goto CPyL52;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 188, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL32;
CPyL32: ;
    CPy_Unreachable();
CPyL33: ;
    if (likely(PyLong_Check(cpy_r_r48)))
        cpy_r_r50 = CPyTagged_FromObject(cpy_r_r48);
    else {
        CPy_TypeError("int", cpy_r_r48);
        cpy_r_r50 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r48);
    if (unlikely(cpy_r_r50 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 188, CPyStatic_globals);
        goto CPyL51;
    } else
        goto CPyL34;
CPyL34: ;
    cpy_r_r51 = native_SudokuUI_setrow((sudoku___SudokuUIObject *)cpy_r_self, cpy_r_r50); /* row */
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 188, CPyStatic_globals);
        goto CPyL51;
    } else
        goto CPyL35;
CPyL35: ;
    cpy_r_r52 = PyIter_Next(cpy_r_r43);
    CPy_DecRef(cpy_r_r43);
    if (cpy_r_r52 == NULL) {
        goto CPyL38;
    } else
        goto CPyL53;
CPyL36: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 188, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL37;
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r54 = CPyDef_SudokuUI____draw_puzzle(cpy_r_self);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 189, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL54;
CPyL39: ;
    cpy_r_r55 = CPyDef_SudokuUI____draw_cursor(cpy_r_self);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 190, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL55;
CPyL40: ;
    cpy_r_r56 = native_SudokuUI_getgame((sudoku___SudokuUIObject *)cpy_r_self); /* game */
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 191, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL41;
CPyL41: ;
    cpy_r_r57 = CPyStatic_unicode_84; /* 'check_win' */
    cpy_r_r58 = PyObject_CallMethodObjArgs(cpy_r_r56, cpy_r_r57, NULL);
    CPy_DecRef(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 191, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL42;
CPyL42: ;
    int __tmp51 = PyObject_IsTrue(cpy_r_r58);
    if (__tmp51 < 0)
        cpy_r_r59 = 2;
    else
        cpy_r_r59 = __tmp51;
    CPy_DecRef(cpy_r_r58);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 191, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL43;
CPyL43: ;
    if (cpy_r_r59) {
        goto CPyL44;
    } else
        goto CPyL45;
CPyL44: ;
    cpy_r_r60 = CPyDef_SudokuUI____draw_victory(cpy_r_self);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_key_pressed", 192, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL56;
CPyL45: ;
    cpy_r_r61 = 1; /* None */
    cpy_r_r62 = Py_None;
    CPy_INCREF(cpy_r_r62);
    return cpy_r_r62;
CPyL46: ;
    cpy_r_r63 = NULL;
    return cpy_r_r63;
CPyL47: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL46;
CPyL48: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    goto CPyL46;
CPyL49: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r31);
    goto CPyL46;
CPyL50: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL26;
CPyL51: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL46;
CPyL52: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL31;
CPyL53: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL36;
CPyL54: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL39;
CPyL55: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL40;
CPyL56: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL45;
}

PyObject *CPyPy_SudokuUI____key_pressed(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"event", 0};
    PyObject *obj_event;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O:_key_pressed", kwlist, &obj_event)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *arg_event = obj_event;
    PyObject *retval = CPyDef_SudokuUI____key_pressed(arg_self, arg_event);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_key_pressed", 183, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuUI____draw_victory(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_x0;
    PyObject *cpy_r_y0;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_x1;
    PyObject *cpy_r_y1;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_x;
    PyObject *cpy_r_y;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T2OO cpy_r_r67;
    PyObject *cpy_r_r68;
    tuple_T2OO cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
CPyL0: ;
    cpy_r_r0 = CPyStatic_globals;
    cpy_r_r1 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 196, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL1;
CPyL1: ;
    if (likely(PyLong_Check(cpy_r_r2)))
        cpy_r_r3 = CPyTagged_FromObject(cpy_r_r2);
    else {
        CPy_TypeError("int", cpy_r_r2);
        cpy_r_r3 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 196, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_r4 = CPyStatic_globals;
    cpy_r_r5 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 196, CPyStatic_globals);
        goto CPyL32;
    } else
        goto CPyL3;
CPyL3: ;
    if (likely(PyLong_Check(cpy_r_r6)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_r6);
    else {
        CPy_TypeError("int", cpy_r_r6);
        cpy_r_r7 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r6);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 196, CPyStatic_globals);
        goto CPyL32;
    } else
        goto CPyL4;
CPyL4: ;
    cpy_r_r8 = 4;
    cpy_r_r9 = CPyTagged_Multiply(cpy_r_r7, cpy_r_r8);
    CPyTagged_DecRef(cpy_r_r7);
    cpy_r_r10 = CPyTagged_StealAsObject(cpy_r_r9);
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r3);
    cpy_r_r12 = PyNumber_Add(cpy_r_r11, cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 196, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL5;
CPyL5: ;
    CPy_INCREF(cpy_r_r12);
    cpy_r_x0 = cpy_r_r12;
    cpy_r_y0 = cpy_r_r12;
    cpy_r_r13 = CPyStatic_globals;
    cpy_r_r14 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 197, CPyStatic_globals);
        goto CPyL33;
    } else
        goto CPyL6;
CPyL6: ;
    if (likely(PyLong_Check(cpy_r_r15)))
        cpy_r_r16 = CPyTagged_FromObject(cpy_r_r15);
    else {
        CPy_TypeError("int", cpy_r_r15);
        cpy_r_r16 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r15);
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 197, CPyStatic_globals);
        goto CPyL33;
    } else
        goto CPyL7;
CPyL7: ;
    cpy_r_r17 = CPyStatic_globals;
    cpy_r_r18 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 197, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL8;
CPyL8: ;
    if (likely(PyLong_Check(cpy_r_r19)))
        cpy_r_r20 = CPyTagged_FromObject(cpy_r_r19);
    else {
        CPy_TypeError("int", cpy_r_r19);
        cpy_r_r20 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r19);
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 197, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL9;
CPyL9: ;
    cpy_r_r21 = 14;
    cpy_r_r22 = CPyTagged_Multiply(cpy_r_r20, cpy_r_r21);
    CPyTagged_DecRef(cpy_r_r20);
    cpy_r_r23 = CPyTagged_StealAsObject(cpy_r_r22);
    cpy_r_r24 = CPyTagged_StealAsObject(cpy_r_r16);
    cpy_r_r25 = PyNumber_Add(cpy_r_r24, cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 197, CPyStatic_globals);
        goto CPyL33;
    } else
        goto CPyL10;
CPyL10: ;
    CPy_INCREF(cpy_r_r25);
    cpy_r_x1 = cpy_r_r25;
    cpy_r_y1 = cpy_r_r25;
    cpy_r_r26 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 198, CPyStatic_globals);
        goto CPyL35;
    } else
        goto CPyL11;
CPyL11: ;
    cpy_r_r27 = CPyStatic_unicode_74; /* 'victory' */
    cpy_r_r28 = CPyStatic_unicode_85; /* 'dark orange' */
    cpy_r_r29 = CPyStatic_unicode_86; /* 'orange' */
    cpy_r_r30 = CPyStatic_unicode_87; /* 'create_oval' */
    cpy_r_r31 = PyObject_GetAttr(cpy_r_r26, cpy_r_r30);
    CPy_DecRef(cpy_r_r26);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 198, CPyStatic_globals);
        goto CPyL35;
    } else
        goto CPyL12;
CPyL12: ;
    cpy_r_r32 = CPyStatic_unicode_72; /* 'tags' */
    cpy_r_r33 = CPyStatic_unicode_88; /* 'color' */
    cpy_r_r34 = CPyStatic_unicode_81; /* 'outline' */
    cpy_r_r35 = PyTuple_Pack(4, cpy_r_x0, cpy_r_y0, cpy_r_x1, cpy_r_y1);
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPy_DecRef(cpy_r_y1);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 198, CPyStatic_globals);
        goto CPyL36;
    } else
        goto CPyL13;
CPyL13: ;
    cpy_r_r36 = CPyDict_Build(3, cpy_r_r32, cpy_r_r27, cpy_r_r33, cpy_r_r28, cpy_r_r34, cpy_r_r29);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 198, CPyStatic_globals);
        goto CPyL37;
    } else
        goto CPyL14;
CPyL14: ;
    cpy_r_r37 = PyObject_Call(cpy_r_r31, cpy_r_r35, cpy_r_r36);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 198, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL38;
CPyL15: ;
    cpy_r_r38 = CPyStatic_globals;
    cpy_r_r39 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 201, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL16;
CPyL16: ;
    if (likely(PyLong_Check(cpy_r_r40)))
        cpy_r_r41 = CPyTagged_FromObject(cpy_r_r40);
    else {
        CPy_TypeError("int", cpy_r_r40);
        cpy_r_r41 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r40);
    if (unlikely(cpy_r_r41 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 201, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL17;
CPyL17: ;
    cpy_r_r42 = 8;
    cpy_r_r43 = CPyStatic_globals;
    cpy_r_r44 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 201, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL18;
CPyL18: ;
    if (likely(PyLong_Check(cpy_r_r45)))
        cpy_r_r46 = CPyTagged_FromObject(cpy_r_r45);
    else {
        CPy_TypeError("int", cpy_r_r45);
        cpy_r_r46 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r45);
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 201, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL19;
CPyL19: ;
    cpy_r_r47 = CPyTagged_Multiply(cpy_r_r42, cpy_r_r46);
    CPyTagged_DecRef(cpy_r_r46);
    cpy_r_r48 = CPyTagged_StealAsObject(cpy_r_r47);
    cpy_r_r49 = CPyTagged_StealAsObject(cpy_r_r41);
    cpy_r_r50 = PyNumber_Add(cpy_r_r49, cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 201, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL20;
CPyL20: ;
    cpy_r_r51 = CPyStatic_globals;
    cpy_r_r52 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 201, CPyStatic_globals);
        goto CPyL40;
    } else
        goto CPyL21;
CPyL21: ;
    if (likely(PyLong_Check(cpy_r_r53)))
        cpy_r_r54 = CPyTagged_FromObject(cpy_r_r53);
    else {
        CPy_TypeError("int", cpy_r_r53);
        cpy_r_r54 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r53);
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 201, CPyStatic_globals);
        goto CPyL40;
    } else
        goto CPyL22;
CPyL22: ;
    cpy_r_r55 = 4;
    cpy_r_r56 = CPyTagged_StealAsObject(cpy_r_r54);
    cpy_r_r57 = CPyTagged_StealAsObject(cpy_r_r55);
    cpy_r_r58 = PyNumber_TrueDivide(cpy_r_r56, cpy_r_r57);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 201, CPyStatic_globals);
        goto CPyL40;
    } else
        goto CPyL23;
CPyL23: ;
    cpy_r_r59 = PyNumber_Add(cpy_r_r50, cpy_r_r58);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 201, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL24;
CPyL24: ;
    CPy_INCREF(cpy_r_r59);
    cpy_r_x = cpy_r_r59;
    cpy_r_y = cpy_r_r59;
    cpy_r_r60 = native_SudokuUI_getcanvas((sudoku___SudokuUIObject *)cpy_r_self); /* canvas */
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 202, CPyStatic_globals);
        goto CPyL41;
    } else
        goto CPyL25;
CPyL25: ;
    cpy_r_r61 = CPyStatic_unicode_89; /* 'You win!' */
    cpy_r_r62 = CPyStatic_unicode_90; /* 'winner' */
    cpy_r_r63 = CPyStatic_unicode_91; /* 'white' */
    cpy_r_r64 = CPyStatic_unicode_92; /* 'Arial' */
    cpy_r_r65 = 64;
    cpy_r_r66 = CPyTagged_StealAsObject(cpy_r_r65);
    cpy_r_r67.f0 = cpy_r_r64;
    cpy_r_r67.f1 = cpy_r_r66;
    CPy_INCREF(cpy_r_r67.f0);
    CPy_INCREF(cpy_r_r67.f1);
    CPy_DecRef(cpy_r_r66);
    cpy_r_r68 = PyTuple_New(2);
    if (unlikely(cpy_r_r68 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp52 = cpy_r_r67.f0;
    PyTuple_SET_ITEM(cpy_r_r68, 0, __tmp52);
    PyObject *__tmp53 = cpy_r_r67.f1;
    PyTuple_SET_ITEM(cpy_r_r68, 1, __tmp53);
    PyObject *__tmp54;
    if (unlikely(!(PyTuple_Check(cpy_r_r68) && PyTuple_GET_SIZE(cpy_r_r68) == 2))) {
        __tmp54 = NULL;
        goto __LL55;
    }
    __tmp54 = PyTuple_GET_ITEM(cpy_r_r68, 0);
    if (__tmp54 == NULL) goto __LL55;
    __tmp54 = PyTuple_GET_ITEM(cpy_r_r68, 1);
    if (__tmp54 == NULL) goto __LL55;
    __tmp54 = cpy_r_r68;
__LL55: ;
    if (unlikely(__tmp54 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r68);
        cpy_r_r69 = tuple_undefined_T2OO;
    } else {
        PyObject *__tmp56 = PyTuple_GET_ITEM(cpy_r_r68, 0);
        CPy_INCREF(__tmp56);
        PyObject *__tmp57;
        __tmp57 = __tmp56;
        cpy_r_r69.f0 = __tmp57;
        PyObject *__tmp58 = PyTuple_GET_ITEM(cpy_r_r68, 1);
        CPy_INCREF(__tmp58);
        PyObject *__tmp59;
        __tmp59 = __tmp58;
        cpy_r_r69.f1 = __tmp59;
    }
    CPy_DecRef(cpy_r_r68);
    if (unlikely(cpy_r_r69.f0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 204, CPyStatic_globals);
        goto CPyL42;
    } else
        goto CPyL26;
CPyL26: ;
    cpy_r_r70 = CPyStatic_unicode_71; /* 'create_text' */
    cpy_r_r71 = PyObject_GetAttr(cpy_r_r60, cpy_r_r70);
    CPy_DecRef(cpy_r_r60);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 202, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL27;
CPyL27: ;
    cpy_r_r72 = CPyStatic_unicode_52; /* 'text' */
    cpy_r_r73 = CPyStatic_unicode_72; /* 'tags' */
    cpy_r_r74 = CPyStatic_unicode_45; /* 'fill' */
    cpy_r_r75 = CPyStatic_unicode_93; /* 'font' */
    cpy_r_r76 = PyTuple_Pack(2, cpy_r_x, cpy_r_y);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 202, CPyStatic_globals);
        goto CPyL44;
    } else
        goto CPyL28;
CPyL28: ;
    cpy_r_r77 = PyTuple_New(2);
    if (unlikely(cpy_r_r77 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp60 = cpy_r_r69.f0;
    PyTuple_SET_ITEM(cpy_r_r77, 0, __tmp60);
    PyObject *__tmp61 = cpy_r_r69.f1;
    PyTuple_SET_ITEM(cpy_r_r77, 1, __tmp61);
    cpy_r_r78 = CPyDict_Build(4, cpy_r_r72, cpy_r_r61, cpy_r_r73, cpy_r_r62, cpy_r_r74, cpy_r_r63, cpy_r_r75, cpy_r_r77);
    CPy_DecRef(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 202, CPyStatic_globals);
        goto CPyL45;
    } else
        goto CPyL29;
CPyL29: ;
    cpy_r_r79 = PyObject_Call(cpy_r_r71, cpy_r_r76, cpy_r_r78);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_draw_victory", 202, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL46;
CPyL30: ;
    cpy_r_r80 = 1; /* None */
    cpy_r_r81 = Py_None;
    CPy_INCREF(cpy_r_r81);
    return cpy_r_r81;
CPyL31: ;
    cpy_r_r82 = NULL;
    return cpy_r_r82;
CPyL32: ;
    CPyTagged_DecRef(cpy_r_r3);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    goto CPyL31;
CPyL34: ;
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPyTagged_DecRef(cpy_r_r16);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_x0);
    CPy_DecRef(cpy_r_y0);
    CPy_DecRef(cpy_r_x1);
    CPy_DecRef(cpy_r_y1);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r35);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL15;
CPyL39: ;
    CPyTagged_DecRef(cpy_r_r41);
    goto CPyL31;
CPyL40: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL31;
CPyL41: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    goto CPyL31;
CPyL42: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_r60);
    goto CPyL31;
CPyL43: ;
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_y);
    CPy_DecRef(cpy_r_r69.f0);
    CPy_DecRef(cpy_r_r69.f1);
    goto CPyL31;
CPyL44: ;
    CPy_DecRef(cpy_r_r69.f0);
    CPy_DecRef(cpy_r_r69.f1);
    CPy_DecRef(cpy_r_r71);
    goto CPyL31;
CPyL45: ;
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r76);
    goto CPyL31;
CPyL46: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL30;
}

PyObject *CPyPy_SudokuUI____draw_victory(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, ":_draw_victory", kwlist)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *retval = CPyDef_SudokuUI____draw_victory(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_draw_victory", 194, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuBoard_____init__(PyObject *cpy_r_self, PyObject *cpy_r_board_file) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
CPyL0: ;
    cpy_r_r0 = CPyDef_SudokuBoard____create_board(cpy_r_self, cpy_r_board_file);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "__init__", 212, CPyStatic_globals);
        goto CPyL3;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = native_SudokuBoard_setboard((sudoku___SudokuBoardObject *)cpy_r_self, cpy_r_r0); /* board */
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("sudoku.py", "__init__", 212, CPyStatic_globals);
        goto CPyL3;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_r2 = 1; /* None */
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_SudokuBoard_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"board_file", 0};
    PyObject *obj_board_file;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O:__init__", kwlist, &obj_board_file)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *arg_board_file = obj_board_file;
    PyObject *retval = CPyDef_SudokuBoard_____init__(arg_self, arg_board_file);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "__init__", 211, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuBoard____create_board(PyObject *cpy_r_self, PyObject *cpy_r_board_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_board;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_line;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
CPyL0: ;
    cpy_r_r0 = PyList_New(0); 
    if (likely(cpy_r_r0 != NULL)) {
    }
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 215, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_board = cpy_r_r0;
    cpy_r_r1 = PyObject_GetIter(cpy_r_board_file);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 217, CPyStatic_globals);
        goto CPyL40;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) {
        goto CPyL41;
    } else
        goto CPyL3;
CPyL3: ;
    cpy_r_r3 = cpy_r_r2;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 217, CPyStatic_globals);
        goto CPyL42;
    } else
        goto CPyL4;
CPyL4: ;
    cpy_r_line = cpy_r_r3;
    cpy_r_r4 = CPyStatic_unicode_96; /* 'strip' */
    cpy_r_r5 = PyObject_CallMethodObjArgs(cpy_r_line, cpy_r_r4, NULL);
    CPy_DecRef(cpy_r_line);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 218, CPyStatic_globals);
        goto CPyL42;
    } else
        goto CPyL5;
CPyL5: ;
    cpy_r_line = cpy_r_r5;
    cpy_r_r6 = CPyObject_Size(cpy_r_line);
    cpy_r_r7 = CPyTagged_StealAsObject(cpy_r_r6);
    cpy_r_r8 = 18;
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_r8);
    cpy_r_r10 = PyObject_RichCompare(cpy_r_r7, cpy_r_r9, Py_NE);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 221, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL6;
CPyL6: ;
    int __tmp62 = PyObject_IsTrue(cpy_r_r10);
    if (__tmp62 < 0)
        cpy_r_r11 = 2;
    else
        cpy_r_r11 = __tmp62;
    CPy_DecRef(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 221, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL7;
CPyL7: ;
    if (cpy_r_r11) {
        goto CPyL44;
    } else
        goto CPyL11;
CPyL8: ;
    cpy_r_r12 = CPyStatic_unicode_97; /* 'Each line in the Sudoku puzzle must be 9 chars long' */
    cpy_r_r13 = (PyObject *)CPyType_SudokuError;
    cpy_r_r14 = PyObject_CallFunctionObjArgs(cpy_r_r13, cpy_r_r12, NULL);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 222, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL9;
CPyL9: ;
    CPy_Raise(cpy_r_r14); cpy_r_r15 = 0;
    CPy_DecRef(cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 222, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL10;
CPyL10: ;
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r16 = PyList_New(0); 
    if (likely(cpy_r_r16 != NULL)) {
    }
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 227, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL12;
CPyL12: ;
    cpy_r_r17 = CPyStatic_unicode_98; /* 'append' */
    cpy_r_r18 = PyObject_CallMethodObjArgs(cpy_r_board, cpy_r_r17, cpy_r_r16, NULL);
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 227, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL45;
CPyL13: ;
    cpy_r_r19 = PyObject_GetIter(cpy_r_line);
    CPy_DecRef(cpy_r_line);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 230, CPyStatic_globals);
        goto CPyL42;
    } else
        goto CPyL14;
CPyL14: ;
    cpy_r_r20 = PyIter_Next(cpy_r_r19);
    if (cpy_r_r20 == NULL) {
        goto CPyL46;
    } else
        goto CPyL15;
CPyL15: ;
    cpy_r_r21 = cpy_r_r20;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 230, CPyStatic_globals);
        goto CPyL47;
    } else
        goto CPyL16;
CPyL16: ;
    cpy_r_c = cpy_r_r21;
    cpy_r_r22 = (PyObject *)&PyLong_Type;
    cpy_r_r23 = PyObject_CallFunctionObjArgs(cpy_r_r22, cpy_r_c, NULL);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 232, CPyStatic_globals);
        goto CPyL48;
    } else
        goto CPyL17;
CPyL17: ;
    cpy_r_r24 = 0;
    cpy_r_r25 = CPyTagged_StealAsObject(cpy_r_r24);
    cpy_r_r26 = PyObject_RichCompare(cpy_r_r23, cpy_r_r25, Py_LT);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 232, CPyStatic_globals);
        goto CPyL48;
    } else
        goto CPyL18;
CPyL18: ;
    int __tmp63 = PyObject_IsTrue(cpy_r_r26);
    if (__tmp63 < 0)
        cpy_r_r27 = 2;
    else
        cpy_r_r27 = __tmp63;
    CPy_DecRef(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 232, CPyStatic_globals);
        goto CPyL48;
    } else
        goto CPyL19;
CPyL19: ;
    if (cpy_r_r27) {
        goto CPyL49;
    } else
        goto CPyL20;
CPyL20: ;
    cpy_r_r28 = (PyObject *)&PyLong_Type;
    cpy_r_r29 = PyObject_CallFunctionObjArgs(cpy_r_r28, cpy_r_c, NULL);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 232, CPyStatic_globals);
        goto CPyL48;
    } else
        goto CPyL21;
CPyL21: ;
    cpy_r_r30 = 18;
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_r30);
    cpy_r_r32 = PyObject_RichCompare(cpy_r_r29, cpy_r_r31, Py_GT);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 232, CPyStatic_globals);
        goto CPyL48;
    } else
        goto CPyL22;
CPyL22: ;
    int __tmp64 = PyObject_IsTrue(cpy_r_r32);
    if (__tmp64 < 0)
        cpy_r_r33 = 2;
    else
        cpy_r_r33 = __tmp64;
    CPy_DecRef(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 232, CPyStatic_globals);
        goto CPyL48;
    } else
        goto CPyL23;
CPyL23: ;
    if (cpy_r_r33) {
        goto CPyL49;
    } else
        goto CPyL27;
CPyL24: ;
    cpy_r_r34 = CPyStatic_unicode_99; /* 'Character must be an integer' */
    cpy_r_r35 = (PyObject *)CPyType_SudokuError;
    cpy_r_r36 = PyObject_CallFunctionObjArgs(cpy_r_r35, cpy_r_r34, NULL);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 233, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL25;
CPyL25: ;
    CPy_Raise(cpy_r_r36); cpy_r_r37 = 0;
    CPy_DecRef(cpy_r_r36);
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 233, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL26;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r38 = 2;
    cpy_r_r39 = CPyTagged_Negate(cpy_r_r38);
    cpy_r_r40 = CPyTagged_StealAsObject(cpy_r_r39);
    cpy_r_r41 = PyObject_GetItem(cpy_r_board, cpy_r_r40);
    CPy_DecRef(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 237, CPyStatic_globals);
        goto CPyL48;
    } else
        goto CPyL28;
CPyL28: ;
    cpy_r_r42 = (PyObject *)&PyLong_Type;
    cpy_r_r43 = PyObject_CallFunctionObjArgs(cpy_r_r42, cpy_r_c, NULL);
    CPy_DecRef(cpy_r_c);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 237, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL29;
CPyL29: ;
    cpy_r_r44 = CPyStatic_unicode_98; /* 'append' */
    cpy_r_r45 = PyObject_CallMethodObjArgs(cpy_r_r41, cpy_r_r44, cpy_r_r43, NULL);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 237, CPyStatic_globals);
        goto CPyL47;
    } else
        goto CPyL51;
CPyL30: ;
    cpy_r_r46 = (PyErr_Occurred() == NULL);
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 230, CPyStatic_globals);
        goto CPyL42;
    } else
        goto CPyL2;
CPyL31: ;
    cpy_r_r47 = (PyErr_Occurred() == NULL);
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 217, CPyStatic_globals);
        goto CPyL40;
    } else
        goto CPyL32;
CPyL32: ;
    cpy_r_r48 = CPyObject_Size(cpy_r_board);
    cpy_r_r49 = CPyTagged_StealAsObject(cpy_r_r48);
    cpy_r_r50 = 18;
    cpy_r_r51 = CPyTagged_StealAsObject(cpy_r_r50);
    cpy_r_r52 = PyObject_RichCompare(cpy_r_r49, cpy_r_r51, Py_NE);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 240, CPyStatic_globals);
        goto CPyL40;
    } else
        goto CPyL33;
CPyL33: ;
    int __tmp65 = PyObject_IsTrue(cpy_r_r52);
    if (__tmp65 < 0)
        cpy_r_r53 = 2;
    else
        cpy_r_r53 = __tmp65;
    CPy_DecRef(cpy_r_r52);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 240, CPyStatic_globals);
        goto CPyL40;
    } else
        goto CPyL34;
CPyL34: ;
    if (cpy_r_r53) {
        goto CPyL52;
    } else
        goto CPyL38;
CPyL35: ;
    cpy_r_r54 = CPyStatic_unicode_100; /* 'Each Sudoku puzzle must be 9 lines long ' */
    cpy_r_r55 = (PyObject *)CPyType_SudokuError;
    cpy_r_r56 = PyObject_CallFunctionObjArgs(cpy_r_r55, cpy_r_r54, NULL);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 241, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL36;
CPyL36: ;
    CPy_Raise(cpy_r_r56); cpy_r_r57 = 0;
    CPy_DecRef(cpy_r_r56);
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("sudoku.py", "_create_board", 241, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL37;
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    return cpy_r_board;
CPyL39: ;
    cpy_r_r58 = NULL;
    return cpy_r_r58;
CPyL40: ;
    CPy_DecRef(cpy_r_board);
    goto CPyL39;
CPyL41: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL31;
CPyL42: ;
    CPy_DecRef(cpy_r_board);
    CPy_DecRef(cpy_r_r1);
    goto CPyL39;
CPyL43: ;
    CPy_DecRef(cpy_r_board);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_line);
    goto CPyL39;
CPyL44: ;
    CPy_DecRef(cpy_r_board);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_line);
    goto CPyL8;
CPyL45: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL13;
CPyL46: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL30;
CPyL47: ;
    CPy_DecRef(cpy_r_board);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r19);
    goto CPyL39;
CPyL48: ;
    CPy_DecRef(cpy_r_board);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_c);
    goto CPyL39;
CPyL49: ;
    CPy_DecRef(cpy_r_board);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_c);
    goto CPyL24;
CPyL50: ;
    CPy_DecRef(cpy_r_board);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r41);
    goto CPyL39;
CPyL51: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL14;
CPyL52: ;
    CPy_DecRef(cpy_r_board);
    goto CPyL35;
}

PyObject *CPyPy_SudokuBoard____create_board(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"board_file", 0};
    PyObject *obj_board_file;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O:_create_board", kwlist, &obj_board_file)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *arg_board_file = obj_board_file;
    PyObject *retval = CPyDef_SudokuBoard____create_board(arg_self, arg_board_file);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_create_board", 214, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuGame_____init__(PyObject *cpy_r_self, PyObject *cpy_r_board_file) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
CPyL0: ;
    CPy_INCREF(cpy_r_board_file);
    cpy_r_r0 = native_SudokuGame_setboard_file((sudoku___SudokuGameObject *)cpy_r_self, cpy_r_board_file); /* board_file */
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("sudoku.py", "__init__", 256, CPyStatic_globals);
        goto CPyL5;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = CPyDef_SudokuBoard(cpy_r_board_file);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("sudoku.py", "__init__", 257, CPyStatic_globals);
        goto CPyL5;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_r2 = native_SudokuBoard_getboard((sudoku___SudokuBoardObject *)cpy_r_r1); /* board */
    CPy_DecRef(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("sudoku.py", "__init__", 257, CPyStatic_globals);
        goto CPyL5;
    } else
        goto CPyL3;
CPyL3: ;
    cpy_r_r3 = native_SudokuGame_setstart_puzzle((sudoku___SudokuGameObject *)cpy_r_self, cpy_r_r2); /* start_puzzle */
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("sudoku.py", "__init__", 257, CPyStatic_globals);
        goto CPyL5;
    } else
        goto CPyL4;
CPyL4: ;
    cpy_r_r4 = 1; /* None */
    cpy_r_r5 = Py_None;
    CPy_INCREF(cpy_r_r5);
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_SudokuGame_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"board_file", 0};
    PyObject *obj_board_file;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O:__init__", kwlist, &obj_board_file)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *arg_board_file = obj_board_file;
    PyObject *retval = CPyDef_SudokuGame_____init__(arg_self, arg_board_file);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "__init__", 255, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuGame___start(PyObject *cpy_r_self) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_i;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_j;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
CPyL0: ;
    cpy_r_r0 = 0;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = native_SudokuGame_setgame_over((sudoku___SudokuGameObject *)cpy_r_self, cpy_r_r1); /* game_over */
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("sudoku.py", "start", 260, CPyStatic_globals);
        goto CPyL23;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r3 = PyList_New(0); 
    if (likely(cpy_r_r3 != NULL)) {
    }
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 261, CPyStatic_globals);
        goto CPyL23;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_r4 = native_SudokuGame_setpuzzle((sudoku___SudokuGameObject *)cpy_r_self, cpy_r_r3); /* puzzle */
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("sudoku.py", "start", 261, CPyStatic_globals);
        goto CPyL23;
    } else
        goto CPyL3;
CPyL3: ;
    cpy_r_r5 = 0;
    cpy_r_r6 = 18;
    cpy_r_r7 = cpy_r_r5;
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r7);
    cpy_r_i = cpy_r_r8;
    goto CPyL4;
CPyL4: ;
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_r6);
    cpy_r_r10 = PyObject_RichCompare(cpy_r_i, cpy_r_r9, Py_LT);
    CPy_DecRef(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 262, CPyStatic_globals);
        goto CPyL24;
    } else
        goto CPyL5;
CPyL5: ;
    int __tmp66 = PyObject_IsTrue(cpy_r_r10);
    if (__tmp66 < 0)
        cpy_r_r11 = 2;
    else
        cpy_r_r11 = __tmp66;
    CPy_DecRef(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("sudoku.py", "start", 262, CPyStatic_globals);
        goto CPyL24;
    } else
        goto CPyL6;
CPyL6: ;
    if (cpy_r_r11) {
        goto CPyL7;
    } else
        goto CPyL25;
CPyL7: ;
    cpy_r_r12 = native_SudokuGame_getpuzzle((sudoku___SudokuGameObject *)cpy_r_self); /* puzzle */
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 263, CPyStatic_globals);
        goto CPyL24;
    } else
        goto CPyL8;
CPyL8: ;
    cpy_r_r13 = PyList_New(0); 
    if (likely(cpy_r_r13 != NULL)) {
    }
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 263, CPyStatic_globals);
        goto CPyL26;
    } else
        goto CPyL9;
CPyL9: ;
    cpy_r_r14 = CPyStatic_unicode_98; /* 'append' */
    cpy_r_r15 = PyObject_CallMethodObjArgs(cpy_r_r12, cpy_r_r14, cpy_r_r13, NULL);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 263, CPyStatic_globals);
        goto CPyL24;
    } else
        goto CPyL27;
CPyL10: ;
    cpy_r_r16 = 0;
    cpy_r_r17 = 18;
    cpy_r_r18 = cpy_r_r16;
    cpy_r_r19 = CPyTagged_StealAsObject(cpy_r_r18);
    cpy_r_j = cpy_r_r19;
    goto CPyL11;
CPyL11: ;
    cpy_r_r20 = CPyTagged_StealAsObject(cpy_r_r17);
    cpy_r_r21 = PyObject_RichCompare(cpy_r_j, cpy_r_r20, Py_LT);
    CPy_DecRef(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 264, CPyStatic_globals);
        goto CPyL28;
    } else
        goto CPyL12;
CPyL12: ;
    int __tmp67 = PyObject_IsTrue(cpy_r_r21);
    if (__tmp67 < 0)
        cpy_r_r22 = 2;
    else
        cpy_r_r22 = __tmp67;
    CPy_DecRef(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("sudoku.py", "start", 264, CPyStatic_globals);
        goto CPyL28;
    } else
        goto CPyL13;
CPyL13: ;
    if (cpy_r_r22) {
        goto CPyL14;
    } else
        goto CPyL29;
CPyL14: ;
    cpy_r_r23 = native_SudokuGame_getpuzzle((sudoku___SudokuGameObject *)cpy_r_self); /* puzzle */
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 265, CPyStatic_globals);
        goto CPyL28;
    } else
        goto CPyL15;
CPyL15: ;
    cpy_r_r24 = PyObject_GetItem(cpy_r_r23, cpy_r_i);
    CPy_DecRef(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 265, CPyStatic_globals);
        goto CPyL28;
    } else
        goto CPyL16;
CPyL16: ;
    cpy_r_r25 = native_SudokuGame_getstart_puzzle((sudoku___SudokuGameObject *)cpy_r_self); /* start_puzzle */
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 265, CPyStatic_globals);
        goto CPyL30;
    } else
        goto CPyL17;
CPyL17: ;
    cpy_r_r26 = PyObject_GetItem(cpy_r_r25, cpy_r_i);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 265, CPyStatic_globals);
        goto CPyL30;
    } else
        goto CPyL18;
CPyL18: ;
    cpy_r_r27 = PyObject_GetItem(cpy_r_r26, cpy_r_j);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_j);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 265, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL19;
CPyL19: ;
    cpy_r_r28 = CPyStatic_unicode_98; /* 'append' */
    cpy_r_r29 = PyObject_CallMethodObjArgs(cpy_r_r24, cpy_r_r28, cpy_r_r27, NULL);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("sudoku.py", "start", 265, CPyStatic_globals);
        goto CPyL24;
    } else
        goto CPyL32;
CPyL20: ;
    cpy_r_r30 = 2;
    cpy_r_r31 = cpy_r_r18 + cpy_r_r30;
    cpy_r_r18 = cpy_r_r31;
    cpy_r_r32 = CPyTagged_StealAsObject(cpy_r_r31);
    cpy_r_j = cpy_r_r32;
    goto CPyL11;
CPyL21: ;
    cpy_r_r33 = 2;
    cpy_r_r34 = cpy_r_r7 + cpy_r_r33;
    cpy_r_r7 = cpy_r_r34;
    cpy_r_r35 = CPyTagged_StealAsObject(cpy_r_r34);
    cpy_r_i = cpy_r_r35;
    goto CPyL4;
CPyL22: ;
    cpy_r_r36 = 1; /* None */
    cpy_r_r37 = Py_None;
    CPy_INCREF(cpy_r_r37);
    return cpy_r_r37;
CPyL23: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL24: ;
    CPy_DecRef(cpy_r_i);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_i);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r12);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL10;
CPyL28: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    goto CPyL23;
CPyL29: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    goto CPyL21;
CPyL30: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_r24);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r24);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL20;
}

PyObject *CPyPy_SudokuGame___start(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, ":start", kwlist)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *retval = CPyDef_SudokuGame___start(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "start", 259, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuGame___check_win(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_row;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_col;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
CPyL0: ;
    cpy_r_r0 = 0;
    cpy_r_r1 = 18;
    cpy_r_r2 = cpy_r_r0;
    cpy_r_r3 = CPyTagged_StealAsObject(cpy_r_r2);
    cpy_r_row = cpy_r_r3;
    goto CPyL1;
CPyL1: ;
    cpy_r_r4 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r_r5 = PyObject_RichCompare(cpy_r_row, cpy_r_r4, Py_LT);
    CPy_DecRef(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_win", 268, CPyStatic_globals);
        goto CPyL35;
    } else
        goto CPyL2;
CPyL2: ;
    int __tmp68 = PyObject_IsTrue(cpy_r_r5);
    if (__tmp68 < 0)
        cpy_r_r6 = 2;
    else
        cpy_r_r6 = __tmp68;
    CPy_DecRef(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_win", 268, CPyStatic_globals);
        goto CPyL35;
    } else
        goto CPyL3;
CPyL3: ;
    if (cpy_r_r6) {
        goto CPyL4;
    } else
        goto CPyL36;
CPyL4: ;
    cpy_r_r7 = CPyDef_SudokuGame____check_row(cpy_r_self, cpy_r_row);
    CPy_DecRef(cpy_r_row);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_win", 269, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL5;
CPyL5: ;
    int __tmp69 = PyObject_IsTrue(cpy_r_r7);
    if (__tmp69 < 0)
        cpy_r_r8 = 2;
    else
        cpy_r_r8 = __tmp69;
    CPy_DecRef(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_win", 269, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL6;
CPyL6: ;
    if (cpy_r_r8) {
        goto CPyL8;
    } else
        goto CPyL7;
CPyL7: ;
    cpy_r_r9 = 0;
    cpy_r_r10 = cpy_r_r9 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r10);
    return cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = 2;
    cpy_r_r12 = cpy_r_r2 + cpy_r_r11;
    cpy_r_r2 = cpy_r_r12;
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_r12);
    cpy_r_row = cpy_r_r13;
    goto CPyL1;
CPyL9: ;
    cpy_r_r14 = 0;
    cpy_r_r15 = 18;
    cpy_r_r16 = cpy_r_r14;
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_r16);
    cpy_r_col = cpy_r_r17;
    goto CPyL10;
CPyL10: ;
    cpy_r_r18 = CPyTagged_StealAsObject(cpy_r_r15);
    cpy_r_r19 = PyObject_RichCompare(cpy_r_col, cpy_r_r18, Py_LT);
    CPy_DecRef(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_win", 271, CPyStatic_globals);
        goto CPyL37;
    } else
        goto CPyL11;
CPyL11: ;
    int __tmp70 = PyObject_IsTrue(cpy_r_r19);
    if (__tmp70 < 0)
        cpy_r_r20 = 2;
    else
        cpy_r_r20 = __tmp70;
    CPy_DecRef(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_win", 271, CPyStatic_globals);
        goto CPyL37;
    } else
        goto CPyL12;
CPyL12: ;
    if (cpy_r_r20) {
        goto CPyL13;
    } else
        goto CPyL38;
CPyL13: ;
    cpy_r_r21 = CPyDef_SudokuGame____check_col(cpy_r_self, cpy_r_col);
    CPy_DecRef(cpy_r_col);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_win", 272, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL14;
CPyL14: ;
    int __tmp71 = PyObject_IsTrue(cpy_r_r21);
    if (__tmp71 < 0)
        cpy_r_r22 = 2;
    else
        cpy_r_r22 = __tmp71;
    CPy_DecRef(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_win", 272, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL15;
CPyL15: ;
    if (cpy_r_r22) {
        goto CPyL17;
    } else
        goto CPyL16;
CPyL16: ;
    cpy_r_r23 = 0;
    cpy_r_r24 = cpy_r_r23 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r24);
    return cpy_r_r24;
CPyL17: ;
    cpy_r_r25 = 2;
    cpy_r_r26 = cpy_r_r16 + cpy_r_r25;
    cpy_r_r16 = cpy_r_r26;
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_r26);
    cpy_r_col = cpy_r_r27;
    goto CPyL10;
CPyL18: ;
    cpy_r_r28 = 0;
    cpy_r_r29 = 6;
    cpy_r_r30 = cpy_r_r28;
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_r30);
    cpy_r_row = cpy_r_r31;
    goto CPyL19;
CPyL19: ;
    cpy_r_r32 = CPyTagged_StealAsObject(cpy_r_r29);
    cpy_r_r33 = PyObject_RichCompare(cpy_r_row, cpy_r_r32, Py_LT);
    CPy_DecRef(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_win", 274, CPyStatic_globals);
        goto CPyL35;
    } else
        goto CPyL20;
CPyL20: ;
    int __tmp72 = PyObject_IsTrue(cpy_r_r33);
    if (__tmp72 < 0)
        cpy_r_r34 = 2;
    else
        cpy_r_r34 = __tmp72;
    CPy_DecRef(cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_win", 274, CPyStatic_globals);
        goto CPyL35;
    } else
        goto CPyL21;
CPyL21: ;
    if (cpy_r_r34) {
        goto CPyL22;
    } else
        goto CPyL39;
CPyL22: ;
    cpy_r_r35 = 0;
    cpy_r_r36 = 6;
    cpy_r_r37 = cpy_r_r35;
    cpy_r_r38 = CPyTagged_StealAsObject(cpy_r_r37);
    cpy_r_col = cpy_r_r38;
    goto CPyL23;
CPyL23: ;
    cpy_r_r39 = CPyTagged_StealAsObject(cpy_r_r36);
    cpy_r_r40 = PyObject_RichCompare(cpy_r_col, cpy_r_r39, Py_LT);
    CPy_DecRef(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_win", 275, CPyStatic_globals);
        goto CPyL40;
    } else
        goto CPyL24;
CPyL24: ;
    int __tmp73 = PyObject_IsTrue(cpy_r_r40);
    if (__tmp73 < 0)
        cpy_r_r41 = 2;
    else
        cpy_r_r41 = __tmp73;
    CPy_DecRef(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_win", 275, CPyStatic_globals);
        goto CPyL40;
    } else
        goto CPyL25;
CPyL25: ;
    if (cpy_r_r41) {
        goto CPyL26;
    } else
        goto CPyL41;
CPyL26: ;
    cpy_r_r42 = CPyDef_SudokuGame____check_square(cpy_r_self, cpy_r_row, cpy_r_col);
    CPy_DecRef(cpy_r_col);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("sudoku.py", "check_win", 276, CPyStatic_globals);
        goto CPyL35;
    } else
        goto CPyL27;
CPyL27: ;
    int __tmp74 = PyObject_IsTrue(cpy_r_r42);
    if (__tmp74 < 0)
        cpy_r_r43 = 2;
    else
        cpy_r_r43 = __tmp74;
    CPy_DecRef(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("sudoku.py", "check_win", 276, CPyStatic_globals);
        goto CPyL35;
    } else
        goto CPyL28;
CPyL28: ;
    if (cpy_r_r43) {
        goto CPyL30;
    } else
        goto CPyL42;
CPyL29: ;
    cpy_r_r44 = 0;
    cpy_r_r45 = cpy_r_r44 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r45);
    return cpy_r_r45;
CPyL30: ;
    cpy_r_r46 = 2;
    cpy_r_r47 = cpy_r_r37 + cpy_r_r46;
    cpy_r_r37 = cpy_r_r47;
    cpy_r_r48 = CPyTagged_StealAsObject(cpy_r_r47);
    cpy_r_col = cpy_r_r48;
    goto CPyL23;
CPyL31: ;
    cpy_r_r49 = 2;
    cpy_r_r50 = cpy_r_r30 + cpy_r_r49;
    cpy_r_r30 = cpy_r_r50;
    cpy_r_r51 = CPyTagged_StealAsObject(cpy_r_r50);
    cpy_r_row = cpy_r_r51;
    goto CPyL19;
CPyL32: ;
    cpy_r_r52 = 1;
    cpy_r_r53 = cpy_r_r52 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = native_SudokuGame_setgame_over((sudoku___SudokuGameObject *)cpy_r_self, cpy_r_r53); /* game_over */
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("sudoku.py", "check_win", 278, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL33;
CPyL33: ;
    cpy_r_r55 = 1;
    cpy_r_r56 = cpy_r_r55 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r56);
    return cpy_r_r56;
CPyL34: ;
    cpy_r_r57 = NULL;
    return cpy_r_r57;
CPyL35: ;
    CPy_DecRef(cpy_r_row);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_row);
    goto CPyL9;
CPyL37: ;
    CPy_DecRef(cpy_r_col);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_col);
    goto CPyL18;
CPyL39: ;
    CPy_DecRef(cpy_r_row);
    goto CPyL32;
CPyL40: ;
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_col);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_row);
    CPy_DecRef(cpy_r_col);
    goto CPyL31;
CPyL42: ;
    CPy_DecRef(cpy_r_row);
    goto CPyL29;
}

PyObject *CPyPy_SudokuGame___check_win(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, ":check_win", kwlist)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *retval = CPyDef_SudokuGame___check_win(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "check_win", 267, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuGame____check_block(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
CPyL0: ;
    cpy_r_r0 = PySet_New(cpy_r_block);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_block", 282, CPyStatic_globals);
        goto CPyL6;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = 2;
    cpy_r_r2 = 20;
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatic_unicode_103; /* 'range' */
    cpy_r_r5 = PyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_block", 282, CPyStatic_globals);
        goto CPyL7;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_r6 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r_r7 = CPyTagged_StealAsObject(cpy_r_r2);
    cpy_r_r8 = PyObject_CallFunctionObjArgs(cpy_r_r5, cpy_r_r6, cpy_r_r7, NULL);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_block", 282, CPyStatic_globals);
        goto CPyL7;
    } else
        goto CPyL3;
CPyL3: ;
    cpy_r_r9 = PySet_New(cpy_r_r8);
    CPy_DecRef(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_block", 282, CPyStatic_globals);
        goto CPyL7;
    } else
        goto CPyL4;
CPyL4: ;
    cpy_r_r10 = PyObject_RichCompare(cpy_r_r0, cpy_r_r9, Py_EQ);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_block", 282, CPyStatic_globals);
        goto CPyL6;
    } else
        goto CPyL5;
CPyL5: ;
    return cpy_r_r10;
CPyL6: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
}

PyObject *CPyPy_SudokuGame____check_block(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"block", 0};
    PyObject *obj_block;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O:_check_block", kwlist, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *arg_block = obj_block;
    PyObject *retval = CPyDef_SudokuGame____check_block(arg_self, arg_block);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_check_block", 281, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuGame____check_row(PyObject *cpy_r_self, PyObject *cpy_r_row) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
CPyL0: ;
    cpy_r_r0 = native_SudokuGame_getpuzzle((sudoku___SudokuGameObject *)cpy_r_self); /* puzzle */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_row", 285, CPyStatic_globals);
        goto CPyL4;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = PyObject_GetItem(cpy_r_r0, cpy_r_row);
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_row", 285, CPyStatic_globals);
        goto CPyL4;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_r2 = CPyDef_SudokuGame____check_block(cpy_r_self, cpy_r_r1);
    CPy_DecRef(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_row", 285, CPyStatic_globals);
        goto CPyL4;
    } else
        goto CPyL3;
CPyL3: ;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_SudokuGame____check_row(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"row", 0};
    PyObject *obj_row;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O:_check_row", kwlist, &obj_row)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *arg_row = obj_row;
    PyObject *retval = CPyDef_SudokuGame____check_row(arg_self, arg_row);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_check_row", 284, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuGame____check_col(PyObject *cpy_r_self, PyObject *cpy_r_col) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_row;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
CPyL0: ;
    cpy_r_r0 = PyList_New(0); 
    if (likely(cpy_r_r0 != NULL)) {
    }
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_col", 289, CPyStatic_globals);
        goto CPyL12;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = 0;
    cpy_r_r2 = 18;
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = CPyTagged_StealAsObject(cpy_r_r3);
    cpy_r_row = cpy_r_r4;
    goto CPyL2;
CPyL2: ;
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_r2);
    cpy_r_r6 = PyObject_RichCompare(cpy_r_row, cpy_r_r5, Py_LT);
    CPy_DecRef(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_col", 289, CPyStatic_globals);
        goto CPyL13;
    } else
        goto CPyL3;
CPyL3: ;
    int __tmp75 = PyObject_IsTrue(cpy_r_r6);
    if (__tmp75 < 0)
        cpy_r_r7 = 2;
    else
        cpy_r_r7 = __tmp75;
    CPy_DecRef(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("sudoku.py", "_check_col", 289, CPyStatic_globals);
        goto CPyL13;
    } else
        goto CPyL4;
CPyL4: ;
    if (cpy_r_r7) {
        goto CPyL5;
    } else
        goto CPyL14;
CPyL5: ;
    cpy_r_r8 = native_SudokuGame_getpuzzle((sudoku___SudokuGameObject *)cpy_r_self); /* puzzle */
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_col", 289, CPyStatic_globals);
        goto CPyL13;
    } else
        goto CPyL6;
CPyL6: ;
    cpy_r_r9 = PyObject_GetItem(cpy_r_r8, cpy_r_row);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_row);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_col", 289, CPyStatic_globals);
        goto CPyL15;
    } else
        goto CPyL7;
CPyL7: ;
    cpy_r_r10 = PyObject_GetItem(cpy_r_r9, cpy_r_col);
    CPy_DecRef(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_col", 289, CPyStatic_globals);
        goto CPyL15;
    } else
        goto CPyL8;
CPyL8: ;
    cpy_r_r11 = PyList_Append(cpy_r_r0, cpy_r_r10) >= 0;
    CPy_DecRef(cpy_r_r10);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("sudoku.py", "_check_col", 289, CPyStatic_globals);
        goto CPyL15;
    } else
        goto CPyL9;
CPyL9: ;
    cpy_r_r12 = 2;
    cpy_r_r13 = cpy_r_r3 + cpy_r_r12;
    cpy_r_r3 = cpy_r_r13;
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_r13);
    cpy_r_row = cpy_r_r14;
    goto CPyL2;
CPyL10: ;
    cpy_r_r15 = CPyDef_SudokuGame____check_block(cpy_r_self, cpy_r_r0);
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_col", 288, CPyStatic_globals);
        goto CPyL12;
    } else
        goto CPyL11;
CPyL11: ;
    return cpy_r_r15;
CPyL12: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_row);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_row);
    goto CPyL10;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
}

PyObject *CPyPy_SudokuGame____check_col(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"col", 0};
    PyObject *obj_col;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O:_check_col", kwlist, &obj_col)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *arg_col = obj_col;
    PyObject *retval = CPyDef_SudokuGame____check_col(arg_self, arg_col);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_check_col", 287, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_SudokuGame____check_square(PyObject *cpy_r_self, PyObject *cpy_r_row, PyObject *cpy_r_col) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
CPyL0: ;
    cpy_r_r0 = PyList_New(0); 
    if (likely(cpy_r_r0 != NULL)) {
    }
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 294, CPyStatic_globals);
        goto CPyL25;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r1 = 6;
    cpy_r_r2 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r_r3 = PyNumber_Multiply(cpy_r_row, cpy_r_r2);
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 296, CPyStatic_globals);
        goto CPyL26;
    } else
        goto CPyL2;
CPyL2: ;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_r4);
    cpy_r_r6 = PyNumber_Add(cpy_r_row, cpy_r_r5);
    CPy_DecRef(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 296, CPyStatic_globals);
        goto CPyL27;
    } else
        goto CPyL3;
CPyL3: ;
    cpy_r_r7 = 6;
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r7);
    cpy_r_r9 = PyNumber_Multiply(cpy_r_r6, cpy_r_r8);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 296, CPyStatic_globals);
        goto CPyL27;
    } else
        goto CPyL4;
CPyL4: ;
    cpy_r_r10 = cpy_r_r3;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r = cpy_r_r10;
    goto CPyL5;
CPyL5: ;
    cpy_r_r11 = PyObject_RichCompare(cpy_r_r, cpy_r_r9, Py_LT);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 294, CPyStatic_globals);
        goto CPyL28;
    } else
        goto CPyL6;
CPyL6: ;
    int __tmp76 = PyObject_IsTrue(cpy_r_r11);
    if (__tmp76 < 0)
        cpy_r_r12 = 2;
    else
        cpy_r_r12 = __tmp76;
    CPy_DecRef(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 294, CPyStatic_globals);
        goto CPyL28;
    } else
        goto CPyL7;
CPyL7: ;
    if (cpy_r_r12) {
        goto CPyL8;
    } else
        goto CPyL29;
CPyL8: ;
    cpy_r_r13 = 6;
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_r13);
    cpy_r_r15 = PyNumber_Multiply(cpy_r_col, cpy_r_r14);
    CPy_DecRef(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 297, CPyStatic_globals);
        goto CPyL28;
    } else
        goto CPyL9;
CPyL9: ;
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_r16);
    cpy_r_r18 = PyNumber_Add(cpy_r_col, cpy_r_r17);
    CPy_DecRef(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 297, CPyStatic_globals);
        goto CPyL30;
    } else
        goto CPyL10;
CPyL10: ;
    cpy_r_r19 = 6;
    cpy_r_r20 = CPyTagged_StealAsObject(cpy_r_r19);
    cpy_r_r21 = PyNumber_Multiply(cpy_r_r18, cpy_r_r20);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 297, CPyStatic_globals);
        goto CPyL30;
    } else
        goto CPyL11;
CPyL11: ;
    cpy_r_r22 = cpy_r_r15;
    CPy_INCREF(cpy_r_r22);
    cpy_r_c = cpy_r_r22;
    goto CPyL12;
CPyL12: ;
    cpy_r_r23 = PyObject_RichCompare(cpy_r_c, cpy_r_r21, Py_LT);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 294, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL13;
CPyL13: ;
    int __tmp77 = PyObject_IsTrue(cpy_r_r23);
    if (__tmp77 < 0)
        cpy_r_r24 = 2;
    else
        cpy_r_r24 = __tmp77;
    CPy_DecRef(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 294, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL14;
CPyL14: ;
    if (cpy_r_r24) {
        goto CPyL15;
    } else
        goto CPyL32;
CPyL15: ;
    cpy_r_r25 = native_SudokuGame_getpuzzle((sudoku___SudokuGameObject *)cpy_r_self); /* puzzle */
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 295, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL16;
CPyL16: ;
    cpy_r_r26 = PyObject_GetItem(cpy_r_r25, cpy_r_r);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 295, CPyStatic_globals);
        goto CPyL31;
    } else
        goto CPyL17;
CPyL17: ;
    cpy_r_r27 = PyObject_GetItem(cpy_r_r26, cpy_r_c);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_c);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 295, CPyStatic_globals);
        goto CPyL33;
    } else
        goto CPyL18;
CPyL18: ;
    cpy_r_r28 = PyList_Append(cpy_r_r0, cpy_r_r27) >= 0;
    CPy_DecRef(cpy_r_r27);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 294, CPyStatic_globals);
        goto CPyL33;
    } else
        goto CPyL19;
CPyL19: ;
    cpy_r_r29 = 2;
    cpy_r_r30 = CPyTagged_StealAsObject(cpy_r_r29);
    cpy_r_r31 = PyNumber_Add(cpy_r_r22, cpy_r_r30);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 294, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL20;
CPyL20: ;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r22 = cpy_r_r31;
    cpy_r_c = cpy_r_r31;
    goto CPyL12;
CPyL21: ;
    cpy_r_r32 = 2;
    cpy_r_r33 = CPyTagged_StealAsObject(cpy_r_r32);
    cpy_r_r34 = PyNumber_Add(cpy_r_r10, cpy_r_r33);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 294, CPyStatic_globals);
        goto CPyL35;
    } else
        goto CPyL22;
CPyL22: ;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r10 = cpy_r_r34;
    cpy_r_r = cpy_r_r34;
    goto CPyL5;
CPyL23: ;
    cpy_r_r35 = CPyDef_SudokuGame____check_block(cpy_r_self, cpy_r_r0);
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("sudoku.py", "_check_square", 293, CPyStatic_globals);
        goto CPyL25;
    } else
        goto CPyL24;
CPyL24: ;
    return cpy_r_r35;
CPyL25: ;
    cpy_r_r36 = NULL;
    return cpy_r_r36;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r);
    goto CPyL23;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r);
    CPy_DecRef(cpy_r_r15);
    goto CPyL25;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_c);
    goto CPyL25;
CPyL32: ;
    CPy_DecRef(cpy_r_r);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_c);
    goto CPyL21;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL25;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r);
    CPy_DecRef(cpy_r_r21);
    goto CPyL25;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    goto CPyL25;
}

PyObject *CPyPy_SudokuGame____check_square(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static char *kwlist[] = {"row", "col", 0};
    PyObject *obj_row;
    PyObject *obj_col;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO:_check_square", kwlist, &obj_row, &obj_col)) {
        return NULL;
    }
    PyObject *arg_self = obj_self;
    PyObject *arg_row = obj_row;
    PyObject *arg_col = obj_col;
    PyObject *retval = CPyDef_SudokuGame____check_square(arg_self, arg_row, arg_col);
    return retval;
fail: ;
    CPy_AddTraceback("sudoku.py", "_check_square", 292, CPyStatic_globals);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyTagged cpy_r_r72;
    CPyTagged cpy_r_r73;
    CPyTagged cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyTagged cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    CPyTagged cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    CPyTagged cpy_r_r227;
    CPyTagged cpy_r_r228;
    CPyTagged cpy_r_r229;
    tuple_T2II cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    tuple_T3OOO cpy_r_r241;
    char cpy_r_r242;
    tuple_T3OOO cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    char cpy_r_r248;
    char cpy_r_r249;
    char cpy_r_r250;
    tuple_T3OOO cpy_r_r251;
    tuple_T3OOO cpy_r_r252;
    tuple_T3OOO cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    char cpy_r_r256;
    char cpy_r_r257;
    char cpy_r_r258;
    char cpy_r_r259;
    int __tmp78;
CPyL0: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = Py_None;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL3;
    } else
        goto CPyL1;
CPyL1: ;
    cpy_r_r3 = CPyStatic_unicode_0; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", -1, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL2;
CPyL2: ;
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DecRef(cpy_r_r4);
    goto CPyL3;
CPyL3: ;
    cpy_r_r5 = CPyStatic_globals;
    cpy_r_r6 = CPyModule_argparse;
    cpy_r_r7 = Py_None;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    if (cpy_r_r8) {
        goto CPyL6;
    } else
        goto CPyL4;
CPyL4: ;
    cpy_r_r9 = CPyStatic_unicode_1; /* 'argparse' */
    cpy_r_r10 = PyImport_Import(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 1, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL5;
CPyL5: ;
    CPyModule_argparse = cpy_r_r10;
    CPy_INCREF(CPyModule_argparse);
    CPy_DecRef(cpy_r_r10);
    goto CPyL6;
CPyL6: ;
    cpy_r_r11 = PyImport_GetModuleDict();
    cpy_r_r12 = CPyStatic_unicode_1; /* 'argparse' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 1, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL7;
CPyL7: ;
    cpy_r_r14 = CPyStatic_unicode_1; /* 'argparse' */
    cpy_r_r15 = CPyDict_SetItem(cpy_r_r5, cpy_r_r14, cpy_r_r13) >= 0;
    CPy_DecRef(cpy_r_r13);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("sudoku.py", "<module>", 1, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL8;
CPyL8: ;
    cpy_r_r16 = CPyModule_tkinter;
    cpy_r_r17 = Py_None;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    if (cpy_r_r18) {
        goto CPyL11;
    } else
        goto CPyL9;
CPyL9: ;
    cpy_r_r19 = CPyStatic_unicode_2; /* 'tkinter' */
    cpy_r_r20 = PyImport_Import(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL10;
CPyL10: ;
    CPyModule_tkinter = cpy_r_r20;
    CPy_INCREF(CPyModule_tkinter);
    CPy_DecRef(cpy_r_r20);
    goto CPyL11;
CPyL11: ;
    cpy_r_r21 = CPyModule_tkinter;
    cpy_r_r22 = CPyStatic_globals;
    cpy_r_r23 = CPyStatic_unicode_3; /* 'Tk' */
    cpy_r_r24 = PyObject_GetAttr(cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL12;
CPyL12: ;
    cpy_r_r25 = CPyStatic_unicode_3; /* 'Tk' */
    cpy_r_r26 = CPyDict_SetItem(cpy_r_r22, cpy_r_r25, cpy_r_r24) >= 0;
    CPy_DecRef(cpy_r_r24);
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL13;
CPyL13: ;
    cpy_r_r27 = CPyStatic_unicode_4; /* 'Canvas' */
    cpy_r_r28 = PyObject_GetAttr(cpy_r_r21, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL14;
CPyL14: ;
    cpy_r_r29 = CPyStatic_unicode_4; /* 'Canvas' */
    cpy_r_r30 = CPyDict_SetItem(cpy_r_r22, cpy_r_r29, cpy_r_r28) >= 0;
    CPy_DecRef(cpy_r_r28);
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL15;
CPyL15: ;
    cpy_r_r31 = CPyStatic_unicode_5; /* 'Frame' */
    cpy_r_r32 = PyObject_GetAttr(cpy_r_r21, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL16;
CPyL16: ;
    cpy_r_r33 = CPyStatic_unicode_5; /* 'Frame' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r22, cpy_r_r33, cpy_r_r32) >= 0;
    CPy_DecRef(cpy_r_r32);
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL17;
CPyL17: ;
    cpy_r_r35 = CPyStatic_unicode_6; /* 'Button' */
    cpy_r_r36 = PyObject_GetAttr(cpy_r_r21, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL18;
CPyL18: ;
    cpy_r_r37 = CPyStatic_unicode_6; /* 'Button' */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r22, cpy_r_r37, cpy_r_r36) >= 0;
    CPy_DecRef(cpy_r_r36);
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL19;
CPyL19: ;
    cpy_r_r39 = CPyStatic_unicode_7; /* 'BOTH' */
    cpy_r_r40 = PyObject_GetAttr(cpy_r_r21, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL20;
CPyL20: ;
    cpy_r_r41 = CPyStatic_unicode_7; /* 'BOTH' */
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r22, cpy_r_r41, cpy_r_r40) >= 0;
    CPy_DecRef(cpy_r_r40);
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL21;
CPyL21: ;
    cpy_r_r43 = CPyStatic_unicode_8; /* 'TOP' */
    cpy_r_r44 = PyObject_GetAttr(cpy_r_r21, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL22;
CPyL22: ;
    cpy_r_r45 = CPyStatic_unicode_8; /* 'TOP' */
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r22, cpy_r_r45, cpy_r_r44) >= 0;
    CPy_DecRef(cpy_r_r44);
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL23;
CPyL23: ;
    cpy_r_r47 = CPyStatic_unicode_9; /* 'BOTTOM' */
    cpy_r_r48 = PyObject_GetAttr(cpy_r_r21, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL24;
CPyL24: ;
    cpy_r_r49 = CPyStatic_unicode_9; /* 'BOTTOM' */
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r22, cpy_r_r49, cpy_r_r48) >= 0;
    CPy_DecRef(cpy_r_r48);
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("sudoku.py", "<module>", 2, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL25;
CPyL25: ;
    cpy_r_r51 = CPyStatic_unicode_10; /* 'debug' */
    cpy_r_r52 = CPyStatic_unicode_11; /* 'n00b' */
    cpy_r_r53 = CPyStatic_unicode_12; /* 'l33t' */
    cpy_r_r54 = CPyStatic_unicode_13; /* 'error' */
    CPy_INCREF(cpy_r_r51);
    CPy_INCREF(cpy_r_r52);
    CPy_INCREF(cpy_r_r53);
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = PyList_New(4); 
    if (likely(cpy_r_r55 != NULL)) {
        PyList_SET_ITEM(cpy_r_r55, 0, cpy_r_r51);
        PyList_SET_ITEM(cpy_r_r55, 1, cpy_r_r52);
        PyList_SET_ITEM(cpy_r_r55, 2, cpy_r_r53);
        PyList_SET_ITEM(cpy_r_r55, 3, cpy_r_r54);
    }
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 4, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL26;
CPyL26: ;
    cpy_r_r56 = CPyStatic_globals;
    cpy_r_r57 = CPyStatic_unicode_14; /* 'BOARDS' */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r56, cpy_r_r57, cpy_r_r55) >= 0;
    CPy_DecRef(cpy_r_r55);
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("sudoku.py", "<module>", 4, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL27;
CPyL27: ;
    cpy_r_r59 = 40;
    cpy_r_r60 = CPyStatic_globals;
    cpy_r_r61 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r62 = CPyTagged_StealAsObject(cpy_r_r59);
    cpy_r_r63 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r62) >= 0;
    CPy_DecRef(cpy_r_r62);
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("sudoku.py", "<module>", 5, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL28;
CPyL28: ;
    cpy_r_r64 = 100;
    cpy_r_r65 = CPyStatic_globals;
    cpy_r_r66 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r67 = CPyTagged_StealAsObject(cpy_r_r64);
    cpy_r_r68 = CPyDict_SetItem(cpy_r_r65, cpy_r_r66, cpy_r_r67) >= 0;
    CPy_DecRef(cpy_r_r67);
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("sudoku.py", "<module>", 6, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL29;
CPyL29: ;
    cpy_r_r69 = CPyStatic_globals;
    cpy_r_r70 = CPyStatic_unicode_15; /* 'MARGIN' */
    cpy_r_r71 = CPyDict_GetItem(cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 7, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL30;
CPyL30: ;
    if (likely(PyLong_Check(cpy_r_r71)))
        cpy_r_r72 = CPyTagged_FromObject(cpy_r_r71);
    else {
        CPy_TypeError("int", cpy_r_r71);
        cpy_r_r72 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r71);
    if (unlikely(cpy_r_r72 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "<module>", 7, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL31;
CPyL31: ;
    cpy_r_r73 = 4;
    cpy_r_r74 = CPyTagged_Multiply(cpy_r_r72, cpy_r_r73);
    CPyTagged_DecRef(cpy_r_r72);
    cpy_r_r75 = CPyStatic_globals;
    cpy_r_r76 = CPyStatic_unicode_16; /* 'SIDE' */
    cpy_r_r77 = CPyDict_GetItem(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 7, CPyStatic_globals);
        goto CPyL122;
    } else
        goto CPyL32;
CPyL32: ;
    if (likely(PyLong_Check(cpy_r_r77)))
        cpy_r_r78 = CPyTagged_FromObject(cpy_r_r77);
    else {
        CPy_TypeError("int", cpy_r_r77);
        cpy_r_r78 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r77);
    if (unlikely(cpy_r_r78 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "<module>", 7, CPyStatic_globals);
        goto CPyL122;
    } else
        goto CPyL33;
CPyL33: ;
    cpy_r_r79 = 18;
    cpy_r_r80 = CPyTagged_Multiply(cpy_r_r78, cpy_r_r79);
    CPyTagged_DecRef(cpy_r_r78);
    cpy_r_r81 = CPyTagged_Add(cpy_r_r74, cpy_r_r80);
    CPyTagged_DecRef(cpy_r_r74);
    CPyTagged_DecRef(cpy_r_r80);
    cpy_r_r82 = CPyStatic_globals;
    cpy_r_r83 = CPyStatic_unicode_17; /* 'WIDTH' */
    CPyTagged_IncRef(cpy_r_r81);
    cpy_r_r84 = CPyTagged_StealAsObject(cpy_r_r81);
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r82, cpy_r_r83, cpy_r_r84) >= 0;
    CPy_DecRef(cpy_r_r84);
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("sudoku.py", "<module>", 7, CPyStatic_globals);
        goto CPyL123;
    } else
        goto CPyL34;
CPyL34: ;
    cpy_r_r86 = CPyStatic_globals;
    cpy_r_r87 = CPyStatic_unicode_18; /* 'HEIGHT' */
    cpy_r_r88 = CPyTagged_StealAsObject(cpy_r_r81);
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r86, cpy_r_r87, cpy_r_r88) >= 0;
    CPy_DecRef(cpy_r_r88);
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("sudoku.py", "<module>", 7, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL35;
CPyL35: ;
    cpy_r_r90 = CPyModule_builtins;
    cpy_r_r91 = CPyStatic_unicode_19; /* 'Exception' */
    cpy_r_r92 = PyObject_GetAttr(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 10, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL36;
CPyL36: ;
    cpy_r_r93 = PyTuple_Pack(1, cpy_r_r92);
    CPy_DecRef(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 10, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL37;
CPyL37: ;
    cpy_r_r94 = CPyStatic_unicode_20; /* 'sudoku' */
    cpy_r_r95 = (PyObject *)CPyType_SudokuError_template;
    cpy_r_r96 = CPyType_FromTemplate((PyTypeObject *)cpy_r_r95, cpy_r_r93, cpy_r_r94);
    CPy_DecRef(cpy_r_r93);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 10, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL38;
CPyL38: ;
    cpy_r_r97 = CPyStatic_unicode_21; /* '__mypyc_attrs__' */
    cpy_r_r98 = CPyStatic_unicode_22; /* '__dict__' */
    cpy_r_r99 = PyTuple_Pack(1, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 10, CPyStatic_globals);
        goto CPyL124;
    } else
        goto CPyL39;
CPyL39: ;
    cpy_r_r100 = PyObject_SetAttr(cpy_r_r96, cpy_r_r97, cpy_r_r99) >= 0;
    CPy_DecRef(cpy_r_r99);
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("sudoku.py", "<module>", 10, CPyStatic_globals);
        goto CPyL124;
    } else
        goto CPyL40;
CPyL40: ;
    CPyType_SudokuError = (PyTypeObject *)cpy_r_r96;
    CPy_INCREF(CPyType_SudokuError);
    cpy_r_r101 = CPyStatic_globals;
    cpy_r_r102 = CPyStatic_unicode_23; /* 'SudokuError' */
    cpy_r_r103 = CPyDict_SetItem(cpy_r_r101, cpy_r_r102, cpy_r_r96) >= 0;
    CPy_DecRef(cpy_r_r96);
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("sudoku.py", "<module>", 10, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL41;
CPyL41: ;
    cpy_r_r104 = CPyStatic_globals;
    cpy_r_r105 = CPyStatic_unicode_5; /* 'Frame' */
    cpy_r_r106 = CPyDict_GetItem(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 35, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL42;
CPyL42: ;
    cpy_r_r107 = PyTuple_Pack(1, cpy_r_r106);
    CPy_DecRef(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 35, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL43;
CPyL43: ;
    cpy_r_r108 = CPyStatic_unicode_20; /* 'sudoku' */
    cpy_r_r109 = (PyObject *)CPyType_SudokuUI_template;
    cpy_r_r110 = CPyType_FromTemplate((PyTypeObject *)cpy_r_r109, cpy_r_r107, cpy_r_r108);
    CPy_DecRef(cpy_r_r107);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 35, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL44;
CPyL44: ;
    cpy_r_r111 = CPyDef_SudokuUI_trait_vtable_setup();
    if (unlikely(cpy_r_r111 == 2)) {
        CPy_AddTraceback("sudoku.py", "<module>", -1, CPyStatic_globals);
        goto CPyL125;
    } else
        goto CPyL45;
CPyL45: ;
    cpy_r_r112 = CPyStatic_unicode_21; /* '__mypyc_attrs__' */
    cpy_r_r113 = CPyStatic_unicode_35; /* 'canvas' */
    cpy_r_r114 = CPyStatic_unicode_36; /* 'col' */
    cpy_r_r115 = CPyStatic_unicode_37; /* 'game' */
    cpy_r_r116 = CPyStatic_unicode_38; /* 'parent' */
    cpy_r_r117 = CPyStatic_unicode_39; /* 'row' */
    cpy_r_r118 = CPyStatic_unicode_22; /* '__dict__' */
    cpy_r_r119 = PyTuple_Pack(6, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 35, CPyStatic_globals);
        goto CPyL125;
    } else
        goto CPyL46;
CPyL46: ;
    cpy_r_r120 = PyObject_SetAttr(cpy_r_r110, cpy_r_r112, cpy_r_r119) >= 0;
    CPy_DecRef(cpy_r_r119);
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("sudoku.py", "<module>", 35, CPyStatic_globals);
        goto CPyL125;
    } else
        goto CPyL47;
CPyL47: ;
    CPyType_SudokuUI = (PyTypeObject *)cpy_r_r110;
    CPy_INCREF(CPyType_SudokuUI);
    cpy_r_r121 = CPyStatic_globals;
    cpy_r_r122 = CPyStatic_unicode_40; /* 'SudokuUI' */
    cpy_r_r123 = CPyDict_SetItem(cpy_r_r121, cpy_r_r122, cpy_r_r110) >= 0;
    CPy_DecRef(cpy_r_r110);
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("sudoku.py", "<module>", 35, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL48;
CPyL48: ;
    cpy_r_r124 = CPyModule_builtins;
    cpy_r_r125 = CPyStatic_unicode_94; /* 'object' */
    cpy_r_r126 = PyObject_GetAttr(cpy_r_r124, cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 207, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL49;
CPyL49: ;
    cpy_r_r127 = PyTuple_Pack(1, cpy_r_r126);
    CPy_DecRef(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 207, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL50;
CPyL50: ;
    cpy_r_r128 = CPyStatic_unicode_20; /* 'sudoku' */
    cpy_r_r129 = (PyObject *)CPyType_SudokuBoard_template;
    cpy_r_r130 = CPyType_FromTemplate((PyTypeObject *)cpy_r_r129, cpy_r_r127, cpy_r_r128);
    CPy_DecRef(cpy_r_r127);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 207, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL51;
CPyL51: ;
    cpy_r_r131 = CPyDef_SudokuBoard_trait_vtable_setup();
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("sudoku.py", "<module>", -1, CPyStatic_globals);
        goto CPyL126;
    } else
        goto CPyL52;
CPyL52: ;
    cpy_r_r132 = CPyStatic_unicode_21; /* '__mypyc_attrs__' */
    cpy_r_r133 = CPyStatic_unicode_34; /* 'board' */
    cpy_r_r134 = PyTuple_Pack(1, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 207, CPyStatic_globals);
        goto CPyL126;
    } else
        goto CPyL53;
CPyL53: ;
    cpy_r_r135 = PyObject_SetAttr(cpy_r_r130, cpy_r_r132, cpy_r_r134) >= 0;
    CPy_DecRef(cpy_r_r134);
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("sudoku.py", "<module>", 207, CPyStatic_globals);
        goto CPyL126;
    } else
        goto CPyL54;
CPyL54: ;
    CPyType_SudokuBoard = (PyTypeObject *)cpy_r_r130;
    CPy_INCREF(CPyType_SudokuBoard);
    cpy_r_r136 = CPyStatic_globals;
    cpy_r_r137 = CPyStatic_unicode_95; /* 'SudokuBoard' */
    cpy_r_r138 = CPyDict_SetItem(cpy_r_r136, cpy_r_r137, cpy_r_r130) >= 0;
    CPy_DecRef(cpy_r_r130);
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("sudoku.py", "<module>", 207, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL55;
CPyL55: ;
    cpy_r_r139 = CPyModule_builtins;
    cpy_r_r140 = CPyStatic_unicode_94; /* 'object' */
    cpy_r_r141 = PyObject_GetAttr(cpy_r_r139, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 249, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL56;
CPyL56: ;
    cpy_r_r142 = PyTuple_Pack(1, cpy_r_r141);
    CPy_DecRef(cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 249, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL57;
CPyL57: ;
    cpy_r_r143 = CPyStatic_unicode_20; /* 'sudoku' */
    cpy_r_r144 = (PyObject *)CPyType_SudokuGame_template;
    cpy_r_r145 = CPyType_FromTemplate((PyTypeObject *)cpy_r_r144, cpy_r_r142, cpy_r_r143);
    CPy_DecRef(cpy_r_r142);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 249, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL58;
CPyL58: ;
    cpy_r_r146 = CPyDef_SudokuGame_trait_vtable_setup();
    if (unlikely(cpy_r_r146 == 2)) {
        CPy_AddTraceback("sudoku.py", "<module>", -1, CPyStatic_globals);
        goto CPyL127;
    } else
        goto CPyL59;
CPyL59: ;
    cpy_r_r147 = CPyStatic_unicode_21; /* '__mypyc_attrs__' */
    cpy_r_r148 = CPyStatic_unicode_101; /* 'board_file' */
    cpy_r_r149 = CPyStatic_unicode_75; /* 'game_over' */
    cpy_r_r150 = CPyStatic_unicode_62; /* 'puzzle' */
    cpy_r_r151 = CPyStatic_unicode_66; /* 'start_puzzle' */
    cpy_r_r152 = PyTuple_Pack(4, cpy_r_r148, cpy_r_r149, cpy_r_r150, cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 249, CPyStatic_globals);
        goto CPyL127;
    } else
        goto CPyL60;
CPyL60: ;
    cpy_r_r153 = PyObject_SetAttr(cpy_r_r145, cpy_r_r147, cpy_r_r152) >= 0;
    CPy_DecRef(cpy_r_r152);
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("sudoku.py", "<module>", 249, CPyStatic_globals);
        goto CPyL127;
    } else
        goto CPyL61;
CPyL61: ;
    CPyType_SudokuGame = (PyTypeObject *)cpy_r_r145;
    CPy_INCREF(CPyType_SudokuGame);
    cpy_r_r154 = CPyStatic_globals;
    cpy_r_r155 = CPyStatic_unicode_102; /* 'SudokuGame' */
    cpy_r_r156 = CPyDict_SetItem(cpy_r_r154, cpy_r_r155, cpy_r_r145) >= 0;
    CPy_DecRef(cpy_r_r145);
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("sudoku.py", "<module>", 249, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL62;
CPyL62: ;
    cpy_r_r157 = CPyStatic_globals;
    cpy_r_r158 = CPyStatic_unicode_104; /* '__name__' */
    cpy_r_r159 = CPyDict_GetItem(cpy_r_r157, cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 304, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL63;
CPyL63: ;
    if (likely(PyUnicode_Check(cpy_r_r159)))
        cpy_r_r160 = cpy_r_r159;
    else {
        CPy_TypeError("str", cpy_r_r159);
        cpy_r_r160 = NULL;
    }
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 304, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL64;
CPyL64: ;
    cpy_r_r161 = CPyStatic_unicode_105; /* '__main__' */
    __tmp78 = PyUnicode_Compare(cpy_r_r160, cpy_r_r161);
    if (__tmp78 == -1 && PyErr_Occurred())
        cpy_r_r162 = 2;
    else
        cpy_r_r162 = (__tmp78 == 0);
    CPy_DecRef(cpy_r_r160);
    if (unlikely(cpy_r_r162 == 2)) {
        CPy_AddTraceback("sudoku.py", "<module>", 304, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL65;
CPyL65: ;
    if (cpy_r_r162) {
        goto CPyL66;
    } else
        goto CPyL120;
CPyL66: ;
    cpy_r_r163 = CPyDef_parse_arguments();
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 305, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL67;
CPyL67: ;
    cpy_r_r164 = CPyStatic_globals;
    cpy_r_r165 = CPyStatic_unicode_106; /* 'board_name' */
    cpy_r_r166 = CPyDict_SetItem(cpy_r_r164, cpy_r_r165, cpy_r_r163) >= 0;
    CPy_DecRef(cpy_r_r163);
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("sudoku.py", "<module>", 305, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL68;
CPyL68: ;
    cpy_r_r167 = CPyStatic_unicode_107; /* '%s.sudoku' */
    cpy_r_r168 = CPyStatic_globals;
    cpy_r_r169 = CPyStatic_unicode_106; /* 'board_name' */
    cpy_r_r170 = CPyDict_GetItem(cpy_r_r168, cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL69;
CPyL69: ;
    cpy_r_r171 = PyNumber_Remainder(cpy_r_r167, cpy_r_r170);
    CPy_DecRef(cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL70;
CPyL70: ;
    if (likely(PyUnicode_Check(cpy_r_r171)))
        cpy_r_r172 = cpy_r_r171;
    else {
        CPy_TypeError("str", cpy_r_r171);
        cpy_r_r172 = NULL;
    }
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL71;
CPyL71: ;
    cpy_r_r173 = CPyStatic_unicode_108; /* 'r' */
    cpy_r_r174 = CPyModule_builtins;
    cpy_r_r175 = CPyStatic_unicode_109; /* 'open' */
    cpy_r_r176 = PyObject_GetAttr(cpy_r_r174, cpy_r_r175);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL128;
    } else
        goto CPyL72;
CPyL72: ;
    cpy_r_r177 = PyObject_CallFunctionObjArgs(cpy_r_r176, cpy_r_r172, cpy_r_r173, NULL);
    CPy_DecRef(cpy_r_r176);
    CPy_DecRef(cpy_r_r172);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL121;
    } else
        goto CPyL73;
CPyL73: ;
    cpy_r_r178 = PyObject_Type(cpy_r_r177);
    cpy_r_r179 = CPyStatic_unicode_110; /* '__exit__' */
    cpy_r_r180 = PyObject_GetAttr(cpy_r_r178, cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL129;
    } else
        goto CPyL74;
CPyL74: ;
    cpy_r_r181 = CPyStatic_unicode_111; /* '__enter__' */
    cpy_r_r182 = PyObject_GetAttr(cpy_r_r178, cpy_r_r181);
    CPy_DecRef(cpy_r_r178);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL130;
    } else
        goto CPyL75;
CPyL75: ;
    cpy_r_r183 = PyObject_CallFunctionObjArgs(cpy_r_r182, cpy_r_r177, NULL);
    CPy_DecRef(cpy_r_r182);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL130;
    } else
        goto CPyL76;
CPyL76: ;
    cpy_r_r184 = 1;
    cpy_r_r185 = cpy_r_r184;
    goto CPyL77;
CPyL77: ;
    cpy_r_r186 = CPyStatic_globals;
    cpy_r_r187 = CPyStatic_unicode_112; /* 'boards_file' */
    cpy_r_r188 = CPyDict_SetItem(cpy_r_r186, cpy_r_r187, cpy_r_r183) >= 0;
    CPy_DecRef(cpy_r_r183);
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL78;
CPyL78: ;
    cpy_r_r189 = CPyStatic_globals;
    cpy_r_r190 = CPyStatic_unicode_112; /* 'boards_file' */
    cpy_r_r191 = CPyDict_GetItem(cpy_r_r189, cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 309, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL79;
CPyL79: ;
    cpy_r_r192 = CPyDef_SudokuGame(cpy_r_r191);
    CPy_DecRef(cpy_r_r191);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 309, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL80;
CPyL80: ;
    cpy_r_r193 = CPyStatic_globals;
    cpy_r_r194 = CPyStatic_unicode_37; /* 'game' */
    cpy_r_r195 = CPyDict_SetItem(cpy_r_r193, cpy_r_r194, cpy_r_r192) >= 0;
    CPy_DecRef(cpy_r_r192);
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("sudoku.py", "<module>", 309, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL81;
CPyL81: ;
    cpy_r_r196 = CPyStatic_globals;
    cpy_r_r197 = CPyStatic_unicode_37; /* 'game' */
    cpy_r_r198 = CPyDict_GetItem(cpy_r_r196, cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 310, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL82;
CPyL82: ;
    if (likely(Py_TYPE(cpy_r_r198) == CPyType_SudokuGame))
        cpy_r_r199 = cpy_r_r198;
    else {
        CPy_TypeError("sudoku.SudokuGame", cpy_r_r198);
        cpy_r_r199 = NULL;
    }
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 310, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL83;
CPyL83: ;
    cpy_r_r200 = CPyDef_SudokuGame___start(cpy_r_r199);
    CPy_DecRef(cpy_r_r199);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 310, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL131;
CPyL84: ;
    cpy_r_r201 = CPyStatic_globals;
    cpy_r_r202 = CPyStatic_unicode_3; /* 'Tk' */
    cpy_r_r203 = CPyDict_GetItem(cpy_r_r201, cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 313, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL85;
CPyL85: ;
    cpy_r_r204 = PyObject_CallFunctionObjArgs(cpy_r_r203, NULL);
    CPy_DecRef(cpy_r_r203);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 313, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL86;
CPyL86: ;
    cpy_r_r205 = CPyStatic_globals;
    cpy_r_r206 = CPyStatic_unicode_113; /* 'root' */
    cpy_r_r207 = CPyDict_SetItem(cpy_r_r205, cpy_r_r206, cpy_r_r204) >= 0;
    CPy_DecRef(cpy_r_r204);
    if (unlikely(!cpy_r_r207)) {
        CPy_AddTraceback("sudoku.py", "<module>", 313, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL87;
CPyL87: ;
    cpy_r_r208 = CPyStatic_globals;
    cpy_r_r209 = CPyStatic_unicode_113; /* 'root' */
    cpy_r_r210 = CPyDict_GetItem(cpy_r_r208, cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 314, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL88;
CPyL88: ;
    cpy_r_r211 = CPyStatic_globals;
    cpy_r_r212 = CPyStatic_unicode_37; /* 'game' */
    cpy_r_r213 = CPyDict_GetItem(cpy_r_r211, cpy_r_r212);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 314, CPyStatic_globals);
        goto CPyL132;
    } else
        goto CPyL89;
CPyL89: ;
    if (likely(Py_TYPE(cpy_r_r213) == CPyType_SudokuGame))
        cpy_r_r214 = cpy_r_r213;
    else {
        CPy_TypeError("sudoku.SudokuGame", cpy_r_r213);
        cpy_r_r214 = NULL;
    }
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 314, CPyStatic_globals);
        goto CPyL132;
    } else
        goto CPyL90;
CPyL90: ;
    cpy_r_r215 = CPyDef_SudokuUI(cpy_r_r210, cpy_r_r214);
    CPy_DecRef(cpy_r_r210);
    CPy_DecRef(cpy_r_r214);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 314, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL133;
CPyL91: ;
    cpy_r_r216 = CPyStatic_globals;
    cpy_r_r217 = CPyStatic_unicode_113; /* 'root' */
    cpy_r_r218 = CPyDict_GetItem(cpy_r_r216, cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 315, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL92;
CPyL92: ;
    cpy_r_r219 = CPyStatic_unicode_114; /* '%dx%d' */
    cpy_r_r220 = CPyStatic_globals;
    cpy_r_r221 = CPyStatic_unicode_17; /* 'WIDTH' */
    cpy_r_r222 = CPyDict_GetItem(cpy_r_r220, cpy_r_r221);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 315, CPyStatic_globals);
        goto CPyL134;
    } else
        goto CPyL93;
CPyL93: ;
    if (likely(PyLong_Check(cpy_r_r222)))
        cpy_r_r223 = CPyTagged_FromObject(cpy_r_r222);
    else {
        CPy_TypeError("int", cpy_r_r222);
        cpy_r_r223 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r222);
    if (unlikely(cpy_r_r223 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "<module>", 315, CPyStatic_globals);
        goto CPyL134;
    } else
        goto CPyL94;
CPyL94: ;
    cpy_r_r224 = CPyStatic_globals;
    cpy_r_r225 = CPyStatic_unicode_18; /* 'HEIGHT' */
    cpy_r_r226 = CPyDict_GetItem(cpy_r_r224, cpy_r_r225);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 315, CPyStatic_globals);
        goto CPyL135;
    } else
        goto CPyL95;
CPyL95: ;
    if (likely(PyLong_Check(cpy_r_r226)))
        cpy_r_r227 = CPyTagged_FromObject(cpy_r_r226);
    else {
        CPy_TypeError("int", cpy_r_r226);
        cpy_r_r227 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r226);
    if (unlikely(cpy_r_r227 == CPY_INT_TAG)) {
        CPy_AddTraceback("sudoku.py", "<module>", 315, CPyStatic_globals);
        goto CPyL135;
    } else
        goto CPyL96;
CPyL96: ;
    cpy_r_r228 = 80;
    cpy_r_r229 = CPyTagged_Add(cpy_r_r227, cpy_r_r228);
    CPyTagged_DecRef(cpy_r_r227);
    cpy_r_r230.f0 = cpy_r_r223;
    cpy_r_r230.f1 = cpy_r_r229;
    CPyTagged_IncRef(cpy_r_r230.f0);
    CPyTagged_IncRef(cpy_r_r230.f1);
    CPyTagged_DecRef(cpy_r_r223);
    CPyTagged_DecRef(cpy_r_r229);
    cpy_r_r231 = PyTuple_New(2);
    if (unlikely(cpy_r_r231 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp79 = CPyTagged_StealAsObject(cpy_r_r230.f0);
    PyTuple_SET_ITEM(cpy_r_r231, 0, __tmp79);
    PyObject *__tmp80 = CPyTagged_StealAsObject(cpy_r_r230.f1);
    PyTuple_SET_ITEM(cpy_r_r231, 1, __tmp80);
    cpy_r_r232 = PyNumber_Remainder(cpy_r_r219, cpy_r_r231);
    CPy_DecRef(cpy_r_r231);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 315, CPyStatic_globals);
        goto CPyL134;
    } else
        goto CPyL97;
CPyL97: ;
    if (likely(PyUnicode_Check(cpy_r_r232)))
        cpy_r_r233 = cpy_r_r232;
    else {
        CPy_TypeError("str", cpy_r_r232);
        cpy_r_r233 = NULL;
    }
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 315, CPyStatic_globals);
        goto CPyL134;
    } else
        goto CPyL98;
CPyL98: ;
    cpy_r_r234 = CPyStatic_unicode_115; /* 'geometry' */
    cpy_r_r235 = PyObject_CallMethodObjArgs(cpy_r_r218, cpy_r_r234, cpy_r_r233, NULL);
    CPy_DecRef(cpy_r_r218);
    CPy_DecRef(cpy_r_r233);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 315, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL136;
CPyL99: ;
    cpy_r_r236 = CPyStatic_globals;
    cpy_r_r237 = CPyStatic_unicode_113; /* 'root' */
    cpy_r_r238 = CPyDict_GetItem(cpy_r_r236, cpy_r_r237);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 316, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL100;
CPyL100: ;
    cpy_r_r239 = CPyStatic_unicode_116; /* 'mainloop' */
    cpy_r_r240 = PyObject_CallMethodObjArgs(cpy_r_r238, cpy_r_r239, NULL);
    CPy_DecRef(cpy_r_r238);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 316, CPyStatic_globals);
        goto CPyL101;
    } else
        goto CPyL137;
CPyL101: ;
    CPy_CatchError(&cpy_r_r241.f0, &cpy_r_r241.f1, &cpy_r_r241.f2);
    cpy_r_r242 = 0;
    cpy_r_r185 = cpy_r_r242;
    CPy_GetExcInfo(&cpy_r_r243.f0, &cpy_r_r243.f1, &cpy_r_r243.f2);
    cpy_r_r244 = cpy_r_r243.f0;
    CPy_INCREF(cpy_r_r244);
    cpy_r_r245 = cpy_r_r243.f1;
    CPy_INCREF(cpy_r_r245);
    cpy_r_r246 = cpy_r_r243.f2;
    CPy_INCREF(cpy_r_r246);
    CPy_DecRef(cpy_r_r243.f0);
    CPy_DecRef(cpy_r_r243.f1);
    CPy_DecRef(cpy_r_r243.f2);
    cpy_r_r247 = PyObject_CallFunctionObjArgs(cpy_r_r180, cpy_r_r177, cpy_r_r244, cpy_r_r245, cpy_r_r246, NULL);
    CPy_DecRef(cpy_r_r244);
    CPy_DecRef(cpy_r_r245);
    CPy_DecRef(cpy_r_r246);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL107;
    } else
        goto CPyL102;
CPyL102: ;
    int __tmp81 = PyObject_IsTrue(cpy_r_r247);
    if (__tmp81 < 0)
        cpy_r_r248 = 2;
    else
        cpy_r_r248 = __tmp81;
    CPy_DecRef(cpy_r_r247);
    if (unlikely(cpy_r_r248 == 2)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL107;
    } else
        goto CPyL103;
CPyL103: ;
    if (cpy_r_r248) {
        goto CPyL106;
    } else
        goto CPyL104;
CPyL104: ;
    CPy_Reraise(); cpy_r_r249 = 0;
    if (!cpy_r_r249) {
        goto CPyL107;
    } else
        goto CPyL138;
CPyL105: ;
    CPy_Unreachable();
CPyL106: ;
    CPy_RestoreExcInfo(cpy_r_r241.f0, cpy_r_r241.f1, cpy_r_r241.f2);
    CPy_DecRef(cpy_r_r241.f0);
    CPy_DecRef(cpy_r_r241.f1);
    CPy_DecRef(cpy_r_r241.f2);
    goto CPyL109;
CPyL107: ;
    CPy_RestoreExcInfo(cpy_r_r241.f0, cpy_r_r241.f1, cpy_r_r241.f2);
    CPy_DecRef(cpy_r_r241.f0);
    CPy_DecRef(cpy_r_r241.f1);
    CPy_DecRef(cpy_r_r241.f2);
    cpy_r_r250 = 0;
    if (!cpy_r_r250) {
        goto CPyL110;
    } else
        goto CPyL139;
CPyL108: ;
    CPy_Unreachable();
CPyL109: ;
    tuple_T3OOO __tmp82 = { NULL, NULL, NULL };
    cpy_r_r252 = __tmp82;
    cpy_r_r251 = cpy_r_r252;
    goto CPyL111;
CPyL110: ;
    CPy_CatchError(&cpy_r_r253.f0, &cpy_r_r253.f1, &cpy_r_r253.f2);
    cpy_r_r251 = cpy_r_r253;
    goto CPyL111;
CPyL111: ;
    if (cpy_r_r185) {
        goto CPyL112;
    } else
        goto CPyL140;
CPyL112: ;
    cpy_r_r254 = Py_None;
    cpy_r_r255 = PyObject_CallFunctionObjArgs(cpy_r_r180, cpy_r_r177, cpy_r_r254, cpy_r_r254, cpy_r_r254, NULL);
    CPy_DecRef(cpy_r_r180);
    CPy_DecRef(cpy_r_r177);
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("sudoku.py", "<module>", 308, CPyStatic_globals);
        goto CPyL116;
    } else
        goto CPyL141;
CPyL113: ;
    if (cpy_r_r251.f0 == NULL) {
        goto CPyL120;
    } else
        goto CPyL114;
CPyL114: ;
    CPy_Reraise(); cpy_r_r256 = 0;
    if (!cpy_r_r256) {
        goto CPyL116;
    } else
        goto CPyL142;
CPyL115: ;
    CPy_Unreachable();
CPyL116: ;
    if (cpy_r_r251.f0 == NULL) {
        goto CPyL118;
    } else
        goto CPyL117;
CPyL117: ;
    CPy_RestoreExcInfo(cpy_r_r251.f0, cpy_r_r251.f1, cpy_r_r251.f2);
    CPy_DecRef(cpy_r_r251.f0);
    CPy_DecRef(cpy_r_r251.f1);
    CPy_DecRef(cpy_r_r251.f2);
    goto CPyL118;
CPyL118: ;
    cpy_r_r257 = 0;
    if (!cpy_r_r257) {
        goto CPyL121;
    } else
        goto CPyL119;
CPyL119: ;
    CPy_Unreachable();
CPyL120: ;
    cpy_r_r258 = 1; /* None */
    return cpy_r_r258;
CPyL121: ;
    cpy_r_r259 = 2;
    return cpy_r_r259;
CPyL122: ;
    CPyTagged_DecRef(cpy_r_r74);
    goto CPyL121;
CPyL123: ;
    CPyTagged_DecRef(cpy_r_r81);
    goto CPyL121;
CPyL124: ;
    CPy_DecRef(cpy_r_r96);
    goto CPyL121;
CPyL125: ;
    CPy_DecRef(cpy_r_r110);
    goto CPyL121;
CPyL126: ;
    CPy_DecRef(cpy_r_r130);
    goto CPyL121;
CPyL127: ;
    CPy_DecRef(cpy_r_r145);
    goto CPyL121;
CPyL128: ;
    CPy_DecRef(cpy_r_r172);
    goto CPyL121;
CPyL129: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r178);
    goto CPyL121;
CPyL130: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r180);
    goto CPyL121;
CPyL131: ;
    CPy_DecRef(cpy_r_r200);
    goto CPyL84;
CPyL132: ;
    CPy_DecRef(cpy_r_r210);
    goto CPyL101;
CPyL133: ;
    CPy_DecRef(cpy_r_r215);
    goto CPyL91;
CPyL134: ;
    CPy_DecRef(cpy_r_r218);
    goto CPyL101;
CPyL135: ;
    CPy_DecRef(cpy_r_r218);
    CPyTagged_DecRef(cpy_r_r223);
    goto CPyL101;
CPyL136: ;
    CPy_DecRef(cpy_r_r235);
    goto CPyL99;
CPyL137: ;
    CPy_DecRef(cpy_r_r240);
    goto CPyL109;
CPyL138: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r180);
    CPy_DecRef(cpy_r_r241.f0);
    CPy_DecRef(cpy_r_r241.f1);
    CPy_DecRef(cpy_r_r241.f2);
    goto CPyL105;
CPyL139: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r180);
    goto CPyL108;
CPyL140: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r180);
    goto CPyL113;
CPyL141: ;
    CPy_DecRef(cpy_r_r255);
    goto CPyL113;
CPyL142: ;
    CPy_DecRef(cpy_r_r251.f0);
    CPy_DecRef(cpy_r_r251.f1);
    CPy_DecRef(cpy_r_r251.f2);
    goto CPyL115;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_sudoku = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_argparse = Py_None;
    CPyModule_tkinter = Py_None;
    CPyStatic_unicode_0 = PyUnicode_FromStringAndSize("builtins", 8);
    if (unlikely(CPyStatic_unicode_0 == NULL))
        return -1;
    CPyStatic_unicode_1 = PyUnicode_FromStringAndSize("argparse", 8);
    if (unlikely(CPyStatic_unicode_1 == NULL))
        return -1;
    CPyStatic_unicode_2 = PyUnicode_FromStringAndSize("tkinter", 7);
    if (unlikely(CPyStatic_unicode_2 == NULL))
        return -1;
    CPyStatic_unicode_3 = PyUnicode_FromStringAndSize("Tk", 2);
    if (unlikely(CPyStatic_unicode_3 == NULL))
        return -1;
    CPyStatic_unicode_4 = PyUnicode_FromStringAndSize("Canvas", 6);
    if (unlikely(CPyStatic_unicode_4 == NULL))
        return -1;
    CPyStatic_unicode_5 = PyUnicode_FromStringAndSize("Frame", 5);
    if (unlikely(CPyStatic_unicode_5 == NULL))
        return -1;
    CPyStatic_unicode_6 = PyUnicode_FromStringAndSize("Button", 6);
    if (unlikely(CPyStatic_unicode_6 == NULL))
        return -1;
    CPyStatic_unicode_7 = PyUnicode_FromStringAndSize("BOTH", 4);
    if (unlikely(CPyStatic_unicode_7 == NULL))
        return -1;
    CPyStatic_unicode_8 = PyUnicode_FromStringAndSize("TOP", 3);
    if (unlikely(CPyStatic_unicode_8 == NULL))
        return -1;
    CPyStatic_unicode_9 = PyUnicode_FromStringAndSize("BOTTOM", 6);
    if (unlikely(CPyStatic_unicode_9 == NULL))
        return -1;
    CPyStatic_unicode_10 = PyUnicode_FromStringAndSize("debug", 5);
    if (unlikely(CPyStatic_unicode_10 == NULL))
        return -1;
    CPyStatic_unicode_11 = PyUnicode_FromStringAndSize("n00b", 4);
    if (unlikely(CPyStatic_unicode_11 == NULL))
        return -1;
    CPyStatic_unicode_12 = PyUnicode_FromStringAndSize("l33t", 4);
    if (unlikely(CPyStatic_unicode_12 == NULL))
        return -1;
    CPyStatic_unicode_13 = PyUnicode_FromStringAndSize("error", 5);
    if (unlikely(CPyStatic_unicode_13 == NULL))
        return -1;
    CPyStatic_unicode_14 = PyUnicode_FromStringAndSize("BOARDS", 6);
    if (unlikely(CPyStatic_unicode_14 == NULL))
        return -1;
    CPyStatic_unicode_15 = PyUnicode_FromStringAndSize("MARGIN", 6);
    if (unlikely(CPyStatic_unicode_15 == NULL))
        return -1;
    CPyStatic_unicode_16 = PyUnicode_FromStringAndSize("SIDE", 4);
    if (unlikely(CPyStatic_unicode_16 == NULL))
        return -1;
    CPyStatic_unicode_17 = PyUnicode_FromStringAndSize("WIDTH", 5);
    if (unlikely(CPyStatic_unicode_17 == NULL))
        return -1;
    CPyStatic_unicode_18 = PyUnicode_FromStringAndSize("HEIGHT", 6);
    if (unlikely(CPyStatic_unicode_18 == NULL))
        return -1;
    CPyStatic_unicode_19 = PyUnicode_FromStringAndSize("Exception", 9);
    if (unlikely(CPyStatic_unicode_19 == NULL))
        return -1;
    CPyStatic_unicode_20 = PyUnicode_FromStringAndSize("sudoku", 6);
    if (unlikely(CPyStatic_unicode_20 == NULL))
        return -1;
    CPyStatic_unicode_21 = PyUnicode_FromStringAndSize("__mypyc_attrs__", 15);
    if (unlikely(CPyStatic_unicode_21 == NULL))
        return -1;
    CPyStatic_unicode_22 = PyUnicode_FromStringAndSize("__dict__", 8);
    if (unlikely(CPyStatic_unicode_22 == NULL))
        return -1;
    CPyStatic_unicode_23 = PyUnicode_FromStringAndSize("SudokuError", 11);
    if (unlikely(CPyStatic_unicode_23 == NULL))
        return -1;
    CPyStatic_unicode_24 = PyUnicode_FromStringAndSize("ArgumentParser", 14);
    if (unlikely(CPyStatic_unicode_24 == NULL))
        return -1;
    CPyStatic_unicode_25 = PyUnicode_FromStringAndSize("--board", 7);
    if (unlikely(CPyStatic_unicode_25 == NULL))
        return -1;
    CPyStatic_unicode_26 = PyUnicode_FromStringAndSize("Desired board name", 18);
    if (unlikely(CPyStatic_unicode_26 == NULL))
        return -1;
    CPyStatic_unicode_27 = PyUnicode_FromStringAndSize("add_argument", 12);
    if (unlikely(CPyStatic_unicode_27 == NULL))
        return -1;
    CPyStatic_unicode_28 = PyUnicode_FromStringAndSize("help", 4);
    if (unlikely(CPyStatic_unicode_28 == NULL))
        return -1;
    CPyStatic_unicode_29 = PyUnicode_FromStringAndSize("type", 4);
    if (unlikely(CPyStatic_unicode_29 == NULL))
        return -1;
    CPyStatic_unicode_30 = PyUnicode_FromStringAndSize("choices", 7);
    if (unlikely(CPyStatic_unicode_30 == NULL))
        return -1;
    CPyStatic_unicode_31 = PyUnicode_FromStringAndSize("required", 8);
    if (unlikely(CPyStatic_unicode_31 == NULL))
        return -1;
    CPyStatic_unicode_32 = PyUnicode_FromStringAndSize("parse_args", 10);
    if (unlikely(CPyStatic_unicode_32 == NULL))
        return -1;
    CPyStatic_unicode_33 = PyUnicode_FromStringAndSize("vars", 4);
    if (unlikely(CPyStatic_unicode_33 == NULL))
        return -1;
    CPyStatic_unicode_34 = PyUnicode_FromStringAndSize("board", 5);
    if (unlikely(CPyStatic_unicode_34 == NULL))
        return -1;
    CPyStatic_unicode_35 = PyUnicode_FromStringAndSize("canvas", 6);
    if (unlikely(CPyStatic_unicode_35 == NULL))
        return -1;
    CPyStatic_unicode_36 = PyUnicode_FromStringAndSize("col", 3);
    if (unlikely(CPyStatic_unicode_36 == NULL))
        return -1;
    CPyStatic_unicode_37 = PyUnicode_FromStringAndSize("game", 4);
    if (unlikely(CPyStatic_unicode_37 == NULL))
        return -1;
    CPyStatic_unicode_38 = PyUnicode_FromStringAndSize("parent", 6);
    if (unlikely(CPyStatic_unicode_38 == NULL))
        return -1;
    CPyStatic_unicode_39 = PyUnicode_FromStringAndSize("row", 3);
    if (unlikely(CPyStatic_unicode_39 == NULL))
        return -1;
    CPyStatic_unicode_40 = PyUnicode_FromStringAndSize("SudokuUI", 8);
    if (unlikely(CPyStatic_unicode_40 == NULL))
        return -1;
    CPyStatic_unicode_41 = PyUnicode_FromStringAndSize("__init__", 8);
    if (unlikely(CPyStatic_unicode_41 == NULL))
        return -1;
    CPyStatic_unicode_42 = PyUnicode_FromStringAndSize("Sudoku", 6);
    if (unlikely(CPyStatic_unicode_42 == NULL))
        return -1;
    CPyStatic_unicode_43 = PyUnicode_FromStringAndSize("title", 5);
    if (unlikely(CPyStatic_unicode_43 == NULL))
        return -1;
    CPyStatic_unicode_44 = PyUnicode_FromStringAndSize("pack", 4);
    if (unlikely(CPyStatic_unicode_44 == NULL))
        return -1;
    CPyStatic_unicode_45 = PyUnicode_FromStringAndSize("fill", 4);
    if (unlikely(CPyStatic_unicode_45 == NULL))
        return -1;
    CPyStatic_unicode_46 = PyUnicode_FromStringAndSize("expand", 6);
    if (unlikely(CPyStatic_unicode_46 == NULL))
        return -1;
    CPyStatic_unicode_47 = PyUnicode_FromStringAndSize("width", 5);
    if (unlikely(CPyStatic_unicode_47 == NULL))
        return -1;
    CPyStatic_unicode_48 = PyUnicode_FromStringAndSize("height", 6);
    if (unlikely(CPyStatic_unicode_48 == NULL))
        return -1;
    CPyStatic_unicode_49 = PyUnicode_FromStringAndSize("side", 4);
    if (unlikely(CPyStatic_unicode_49 == NULL))
        return -1;
    CPyStatic_unicode_50 = PyUnicode_FromStringAndSize("Clear answers", 13);
    if (unlikely(CPyStatic_unicode_50 == NULL))
        return -1;
    CPyStatic_unicode_51 = PyUnicode_FromStringAndSize("_clear_answers", 14);
    if (unlikely(CPyStatic_unicode_51 == NULL))
        return -1;
    CPyStatic_unicode_52 = PyUnicode_FromStringAndSize("text", 4);
    if (unlikely(CPyStatic_unicode_52 == NULL))
        return -1;
    CPyStatic_unicode_53 = PyUnicode_FromStringAndSize("command", 7);
    if (unlikely(CPyStatic_unicode_53 == NULL))
        return -1;
    CPyStatic_unicode_54 = PyUnicode_FromStringAndSize("<Button-1>", 10);
    if (unlikely(CPyStatic_unicode_54 == NULL))
        return -1;
    CPyStatic_unicode_55 = PyUnicode_FromStringAndSize("_cell_clicked", 13);
    if (unlikely(CPyStatic_unicode_55 == NULL))
        return -1;
    CPyStatic_unicode_56 = PyUnicode_FromStringAndSize("bind", 4);
    if (unlikely(CPyStatic_unicode_56 == NULL))
        return -1;
    CPyStatic_unicode_57 = PyUnicode_FromStringAndSize("<Key>", 5);
    if (unlikely(CPyStatic_unicode_57 == NULL))
        return -1;
    CPyStatic_unicode_58 = PyUnicode_FromStringAndSize("_key_pressed", 12);
    if (unlikely(CPyStatic_unicode_58 == NULL))
        return -1;
    CPyStatic_unicode_59 = PyUnicode_FromStringAndSize("blue", 4);
    if (unlikely(CPyStatic_unicode_59 == NULL))
        return -1;
    CPyStatic_unicode_60 = PyUnicode_FromStringAndSize("gray", 4);
    if (unlikely(CPyStatic_unicode_60 == NULL))
        return -1;
    CPyStatic_unicode_61 = PyUnicode_FromStringAndSize("create_line", 11);
    if (unlikely(CPyStatic_unicode_61 == NULL))
        return -1;
    CPyStatic_unicode_62 = PyUnicode_FromStringAndSize("puzzle", 6);
    if (unlikely(CPyStatic_unicode_62 == NULL))
        return -1;
    CPyStatic_unicode_63 = PyUnicode_FromStringAndSize("count", 5);
    if (unlikely(CPyStatic_unicode_63 == NULL))
        return -1;
    CPyStatic_unicode_64 = PyUnicode_FromStringAndSize("numbers", 7);
    if (unlikely(CPyStatic_unicode_64 == NULL))
        return -1;
    CPyStatic_unicode_65 = PyUnicode_FromStringAndSize("delete", 6);
    if (unlikely(CPyStatic_unicode_65 == NULL))
        return -1;
    CPyStatic_unicode_66 = PyUnicode_FromStringAndSize("start_puzzle", 12);
    if (unlikely(CPyStatic_unicode_66 == NULL))
        return -1;
    CPyStatic_unicode_67 = PyUnicode_FromStringAndSize("print", 5);
    if (unlikely(CPyStatic_unicode_67 == NULL))
        return -1;
    CPyStatic_unicode_68 = PyUnicode_FromStringAndSize("black", 5);
    if (unlikely(CPyStatic_unicode_68 == NULL))
        return -1;
    CPyStatic_unicode_69 = PyUnicode_FromStringAndSize("red", 3);
    if (unlikely(CPyStatic_unicode_69 == NULL))
        return -1;
    CPyStatic_unicode_70 = PyUnicode_FromStringAndSize("sea green", 9);
    if (unlikely(CPyStatic_unicode_70 == NULL))
        return -1;
    CPyStatic_unicode_71 = PyUnicode_FromStringAndSize("create_text", 11);
    if (unlikely(CPyStatic_unicode_71 == NULL))
        return -1;
    CPyStatic_unicode_72 = PyUnicode_FromStringAndSize("tags", 4);
    if (unlikely(CPyStatic_unicode_72 == NULL))
        return -1;
    CPyStatic_unicode_73 = PyUnicode_FromStringAndSize("start", 5);
    if (unlikely(CPyStatic_unicode_73 == NULL))
        return -1;
    CPyStatic_unicode_74 = PyUnicode_FromStringAndSize("victory", 7);
    if (unlikely(CPyStatic_unicode_74 == NULL))
        return -1;
    CPyStatic_unicode_75 = PyUnicode_FromStringAndSize("game_over", 9);
    if (unlikely(CPyStatic_unicode_75 == NULL))
        return -1;
    CPyStatic_unicode_76 = PyUnicode_FromStringAndSize("x", 1);
    if (unlikely(CPyStatic_unicode_76 == NULL))
        return -1;
    CPyStatic_unicode_77 = PyUnicode_FromStringAndSize("y", 1);
    if (unlikely(CPyStatic_unicode_77 == NULL))
        return -1;
    CPyStatic_unicode_78 = PyUnicode_FromStringAndSize("focus_set", 9);
    if (unlikely(CPyStatic_unicode_78 == NULL))
        return -1;
    CPyStatic_unicode_79 = PyUnicode_FromStringAndSize("cursor", 6);
    if (unlikely(CPyStatic_unicode_79 == NULL))
        return -1;
    CPyStatic_unicode_80 = PyUnicode_FromStringAndSize("create_rectangle", 16);
    if (unlikely(CPyStatic_unicode_80 == NULL))
        return -1;
    CPyStatic_unicode_81 = PyUnicode_FromStringAndSize("outline", 7);
    if (unlikely(CPyStatic_unicode_81 == NULL))
        return -1;
    CPyStatic_unicode_82 = PyUnicode_FromStringAndSize("char", 4);
    if (unlikely(CPyStatic_unicode_82 == NULL))
        return -1;
    CPyStatic_unicode_83 = PyUnicode_FromStringAndSize("1234567890", 10);
    if (unlikely(CPyStatic_unicode_83 == NULL))
        return -1;
    CPyStatic_unicode_84 = PyUnicode_FromStringAndSize("check_win", 9);
    if (unlikely(CPyStatic_unicode_84 == NULL))
        return -1;
    CPyStatic_unicode_85 = PyUnicode_FromStringAndSize("dark orange", 11);
    if (unlikely(CPyStatic_unicode_85 == NULL))
        return -1;
    CPyStatic_unicode_86 = PyUnicode_FromStringAndSize("orange", 6);
    if (unlikely(CPyStatic_unicode_86 == NULL))
        return -1;
    CPyStatic_unicode_87 = PyUnicode_FromStringAndSize("create_oval", 11);
    if (unlikely(CPyStatic_unicode_87 == NULL))
        return -1;
    CPyStatic_unicode_88 = PyUnicode_FromStringAndSize("color", 5);
    if (unlikely(CPyStatic_unicode_88 == NULL))
        return -1;
    CPyStatic_unicode_89 = PyUnicode_FromStringAndSize("You win!", 8);
    if (unlikely(CPyStatic_unicode_89 == NULL))
        return -1;
    CPyStatic_unicode_90 = PyUnicode_FromStringAndSize("winner", 6);
    if (unlikely(CPyStatic_unicode_90 == NULL))
        return -1;
    CPyStatic_unicode_91 = PyUnicode_FromStringAndSize("white", 5);
    if (unlikely(CPyStatic_unicode_91 == NULL))
        return -1;
    CPyStatic_unicode_92 = PyUnicode_FromStringAndSize("Arial", 5);
    if (unlikely(CPyStatic_unicode_92 == NULL))
        return -1;
    CPyStatic_unicode_93 = PyUnicode_FromStringAndSize("font", 4);
    if (unlikely(CPyStatic_unicode_93 == NULL))
        return -1;
    CPyStatic_unicode_94 = PyUnicode_FromStringAndSize("object", 6);
    if (unlikely(CPyStatic_unicode_94 == NULL))
        return -1;
    CPyStatic_unicode_95 = PyUnicode_FromStringAndSize("SudokuBoard", 11);
    if (unlikely(CPyStatic_unicode_95 == NULL))
        return -1;
    CPyStatic_unicode_96 = PyUnicode_FromStringAndSize("strip", 5);
    if (unlikely(CPyStatic_unicode_96 == NULL))
        return -1;
    CPyStatic_unicode_97 = PyUnicode_FromStringAndSize("Each line in the Sudoku puzzle must be 9 chars long", 51);
    if (unlikely(CPyStatic_unicode_97 == NULL))
        return -1;
    CPyStatic_unicode_98 = PyUnicode_FromStringAndSize("append", 6);
    if (unlikely(CPyStatic_unicode_98 == NULL))
        return -1;
    CPyStatic_unicode_99 = PyUnicode_FromStringAndSize("Character must be an integer", 28);
    if (unlikely(CPyStatic_unicode_99 == NULL))
        return -1;
    CPyStatic_unicode_100 = PyUnicode_FromStringAndSize("Each Sudoku puzzle must be 9 lines long ", 40);
    if (unlikely(CPyStatic_unicode_100 == NULL))
        return -1;
    CPyStatic_unicode_101 = PyUnicode_FromStringAndSize("board_file", 10);
    if (unlikely(CPyStatic_unicode_101 == NULL))
        return -1;
    CPyStatic_unicode_102 = PyUnicode_FromStringAndSize("SudokuGame", 10);
    if (unlikely(CPyStatic_unicode_102 == NULL))
        return -1;
    CPyStatic_unicode_103 = PyUnicode_FromStringAndSize("range", 5);
    if (unlikely(CPyStatic_unicode_103 == NULL))
        return -1;
    CPyStatic_unicode_104 = PyUnicode_FromStringAndSize("__name__", 8);
    if (unlikely(CPyStatic_unicode_104 == NULL))
        return -1;
    CPyStatic_unicode_105 = PyUnicode_FromStringAndSize("__main__", 8);
    if (unlikely(CPyStatic_unicode_105 == NULL))
        return -1;
    CPyStatic_unicode_106 = PyUnicode_FromStringAndSize("board_name", 10);
    if (unlikely(CPyStatic_unicode_106 == NULL))
        return -1;
    CPyStatic_unicode_107 = PyUnicode_FromStringAndSize("%s.sudoku", 9);
    if (unlikely(CPyStatic_unicode_107 == NULL))
        return -1;
    CPyStatic_unicode_108 = PyUnicode_FromStringAndSize("r", 1);
    if (unlikely(CPyStatic_unicode_108 == NULL))
        return -1;
    CPyStatic_unicode_109 = PyUnicode_FromStringAndSize("open", 4);
    if (unlikely(CPyStatic_unicode_109 == NULL))
        return -1;
    CPyStatic_unicode_110 = PyUnicode_FromStringAndSize("__exit__", 8);
    if (unlikely(CPyStatic_unicode_110 == NULL))
        return -1;
    CPyStatic_unicode_111 = PyUnicode_FromStringAndSize("__enter__", 9);
    if (unlikely(CPyStatic_unicode_111 == NULL))
        return -1;
    CPyStatic_unicode_112 = PyUnicode_FromStringAndSize("boards_file", 11);
    if (unlikely(CPyStatic_unicode_112 == NULL))
        return -1;
    CPyStatic_unicode_113 = PyUnicode_FromStringAndSize("root", 4);
    if (unlikely(CPyStatic_unicode_113 == NULL))
        return -1;
    CPyStatic_unicode_114 = PyUnicode_FromStringAndSize("%dx%d", 5);
    if (unlikely(CPyStatic_unicode_114 == NULL))
        return -1;
    CPyStatic_unicode_115 = PyUnicode_FromStringAndSize("geometry", 8);
    if (unlikely(CPyStatic_unicode_115 == NULL))
        return -1;
    CPyStatic_unicode_116 = PyUnicode_FromStringAndSize("mainloop", 8);
    if (unlikely(CPyStatic_unicode_116 == NULL))
        return -1;
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatic_unicode_0;
PyObject *CPyStatic_unicode_1;
PyObject *CPyStatic_unicode_2;
PyObject *CPyStatic_unicode_3;
PyObject *CPyStatic_unicode_4;
PyObject *CPyStatic_unicode_5;
PyObject *CPyStatic_unicode_6;
PyObject *CPyStatic_unicode_7;
PyObject *CPyStatic_unicode_8;
PyObject *CPyStatic_unicode_9;
PyObject *CPyStatic_unicode_10;
PyObject *CPyStatic_unicode_11;
PyObject *CPyStatic_unicode_12;
PyObject *CPyStatic_unicode_13;
PyObject *CPyStatic_unicode_14;
PyObject *CPyStatic_unicode_15;
PyObject *CPyStatic_unicode_16;
PyObject *CPyStatic_unicode_17;
PyObject *CPyStatic_unicode_18;
PyObject *CPyStatic_unicode_19;
PyObject *CPyStatic_unicode_20;
PyObject *CPyStatic_unicode_21;
PyObject *CPyStatic_unicode_22;
PyObject *CPyStatic_unicode_23;
PyObject *CPyStatic_unicode_24;
PyObject *CPyStatic_unicode_25;
PyObject *CPyStatic_unicode_26;
PyObject *CPyStatic_unicode_27;
PyObject *CPyStatic_unicode_28;
PyObject *CPyStatic_unicode_29;
PyObject *CPyStatic_unicode_30;
PyObject *CPyStatic_unicode_31;
PyObject *CPyStatic_unicode_32;
PyObject *CPyStatic_unicode_33;
PyObject *CPyStatic_unicode_34;
PyObject *CPyStatic_unicode_35;
PyObject *CPyStatic_unicode_36;
PyObject *CPyStatic_unicode_37;
PyObject *CPyStatic_unicode_38;
PyObject *CPyStatic_unicode_39;
PyObject *CPyStatic_unicode_40;
PyObject *CPyStatic_unicode_41;
PyObject *CPyStatic_unicode_42;
PyObject *CPyStatic_unicode_43;
PyObject *CPyStatic_unicode_44;
PyObject *CPyStatic_unicode_45;
PyObject *CPyStatic_unicode_46;
PyObject *CPyStatic_unicode_47;
PyObject *CPyStatic_unicode_48;
PyObject *CPyStatic_unicode_49;
PyObject *CPyStatic_unicode_50;
PyObject *CPyStatic_unicode_51;
PyObject *CPyStatic_unicode_52;
PyObject *CPyStatic_unicode_53;
PyObject *CPyStatic_unicode_54;
PyObject *CPyStatic_unicode_55;
PyObject *CPyStatic_unicode_56;
PyObject *CPyStatic_unicode_57;
PyObject *CPyStatic_unicode_58;
PyObject *CPyStatic_unicode_59;
PyObject *CPyStatic_unicode_60;
PyObject *CPyStatic_unicode_61;
PyObject *CPyStatic_unicode_62;
PyObject *CPyStatic_unicode_63;
PyObject *CPyStatic_unicode_64;
PyObject *CPyStatic_unicode_65;
PyObject *CPyStatic_unicode_66;
PyObject *CPyStatic_unicode_67;
PyObject *CPyStatic_unicode_68;
PyObject *CPyStatic_unicode_69;
PyObject *CPyStatic_unicode_70;
PyObject *CPyStatic_unicode_71;
PyObject *CPyStatic_unicode_72;
PyObject *CPyStatic_unicode_73;
PyObject *CPyStatic_unicode_74;
PyObject *CPyStatic_unicode_75;
PyObject *CPyStatic_unicode_76;
PyObject *CPyStatic_unicode_77;
PyObject *CPyStatic_unicode_78;
PyObject *CPyStatic_unicode_79;
PyObject *CPyStatic_unicode_80;
PyObject *CPyStatic_unicode_81;
PyObject *CPyStatic_unicode_82;
PyObject *CPyStatic_unicode_83;
PyObject *CPyStatic_unicode_84;
PyObject *CPyStatic_unicode_85;
PyObject *CPyStatic_unicode_86;
PyObject *CPyStatic_unicode_87;
PyObject *CPyStatic_unicode_88;
PyObject *CPyStatic_unicode_89;
PyObject *CPyStatic_unicode_90;
PyObject *CPyStatic_unicode_91;
PyObject *CPyStatic_unicode_92;
PyObject *CPyStatic_unicode_93;
PyObject *CPyStatic_unicode_94;
PyObject *CPyStatic_unicode_95;
PyObject *CPyStatic_unicode_96;
PyObject *CPyStatic_unicode_97;
PyObject *CPyStatic_unicode_98;
PyObject *CPyStatic_unicode_99;
PyObject *CPyStatic_unicode_100;
PyObject *CPyStatic_unicode_101;
PyObject *CPyStatic_unicode_102;
PyObject *CPyStatic_unicode_103;
PyObject *CPyStatic_unicode_104;
PyObject *CPyStatic_unicode_105;
PyObject *CPyStatic_unicode_106;
PyObject *CPyStatic_unicode_107;
PyObject *CPyStatic_unicode_108;
PyObject *CPyStatic_unicode_109;
PyObject *CPyStatic_unicode_110;
PyObject *CPyStatic_unicode_111;
PyObject *CPyStatic_unicode_112;
PyObject *CPyStatic_unicode_113;
PyObject *CPyStatic_unicode_114;
PyObject *CPyStatic_unicode_115;
PyObject *CPyStatic_unicode_116;
CPyModule *CPyModule_sudoku_internal = NULL;
CPyModule *CPyModule_sudoku;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins_internal = NULL;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_argparse_internal = NULL;
CPyModule *CPyModule_argparse;
CPyModule *CPyModule_tkinter_internal = NULL;
CPyModule *CPyModule_tkinter;
PyTypeObject *CPyType_SudokuError;
PyTypeObject *CPyType_SudokuUI;
PyObject *native_SudokuUI_getcanvas(sudoku___SudokuUIObject *self);
bool native_SudokuUI_setcanvas(sudoku___SudokuUIObject *self, PyObject *value);
CPyTagged native_SudokuUI_getcol(sudoku___SudokuUIObject *self);
bool native_SudokuUI_setcol(sudoku___SudokuUIObject *self, CPyTagged value);
PyObject *native_SudokuUI_getgame(sudoku___SudokuUIObject *self);
bool native_SudokuUI_setgame(sudoku___SudokuUIObject *self, PyObject *value);
PyObject *native_SudokuUI_getparent(sudoku___SudokuUIObject *self);
bool native_SudokuUI_setparent(sudoku___SudokuUIObject *self, PyObject *value);
CPyTagged native_SudokuUI_getrow(sudoku___SudokuUIObject *self);
bool native_SudokuUI_setrow(sudoku___SudokuUIObject *self, CPyTagged value);
PyObject *CPyDef_SudokuUI(PyObject *cpy_r_parent, PyObject *cpy_r_game);
PyTypeObject *CPyType_SudokuBoard;
PyObject *native_SudokuBoard_getboard(sudoku___SudokuBoardObject *self);
bool native_SudokuBoard_setboard(sudoku___SudokuBoardObject *self, PyObject *value);
PyObject *CPyDef_SudokuBoard(PyObject *cpy_r_board_file);
PyTypeObject *CPyType_SudokuGame;
PyObject *native_SudokuGame_getboard_file(sudoku___SudokuGameObject *self);
bool native_SudokuGame_setboard_file(sudoku___SudokuGameObject *self, PyObject *value);
PyObject *native_SudokuGame_getgame_over(sudoku___SudokuGameObject *self);
bool native_SudokuGame_setgame_over(sudoku___SudokuGameObject *self, PyObject *value);
PyObject *native_SudokuGame_getpuzzle(sudoku___SudokuGameObject *self);
bool native_SudokuGame_setpuzzle(sudoku___SudokuGameObject *self, PyObject *value);
PyObject *native_SudokuGame_getstart_puzzle(sudoku___SudokuGameObject *self);
bool native_SudokuGame_setstart_puzzle(sudoku___SudokuGameObject *self, PyObject *value);
PyObject *CPyDef_SudokuGame(PyObject *cpy_r_board_file);
PyObject *CPyDef_parse_arguments(void);
PyObject *CPyPy_parse_arguments(PyObject *self, PyObject *args, PyObject *kw);
char CPyDef_SudokuUI_____init__(PyObject *cpy_r_self, PyObject *cpy_r_parent, PyObject *cpy_r_game);
PyObject *CPyPy_SudokuUI_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuUI____init_ui(PyObject *cpy_r_self);
PyObject *CPyPy_SudokuUI____init_ui(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuUI____draw_grid(PyObject *cpy_r_self);
PyObject *CPyPy_SudokuUI____draw_grid(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuUI___find_square(PyObject *cpy_r_self, PyObject *cpy_r_row, PyObject *cpy_r_col);
PyObject *CPyPy_SudokuUI___find_square(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuUI___check_conflict(PyObject *cpy_r_self, PyObject *cpy_r_i, PyObject *cpy_r_j, PyObject *cpy_r_row, PyObject *cpy_r_col, PyObject *cpy_r_square);
PyObject *CPyPy_SudokuUI___check_conflict(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuUI____draw_puzzle(PyObject *cpy_r_self);
PyObject *CPyPy_SudokuUI____draw_puzzle(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuUI____clear_answers(PyObject *cpy_r_self);
PyObject *CPyPy_SudokuUI____clear_answers(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuUI____cell_clicked(PyObject *cpy_r_self, PyObject *cpy_r_event);
PyObject *CPyPy_SudokuUI____cell_clicked(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuUI____draw_cursor(PyObject *cpy_r_self);
PyObject *CPyPy_SudokuUI____draw_cursor(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuUI____key_pressed(PyObject *cpy_r_self, PyObject *cpy_r_event);
PyObject *CPyPy_SudokuUI____key_pressed(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuUI____draw_victory(PyObject *cpy_r_self);
PyObject *CPyPy_SudokuUI____draw_victory(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuBoard_____init__(PyObject *cpy_r_self, PyObject *cpy_r_board_file);
PyObject *CPyPy_SudokuBoard_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuBoard____create_board(PyObject *cpy_r_self, PyObject *cpy_r_board_file);
PyObject *CPyPy_SudokuBoard____create_board(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuGame_____init__(PyObject *cpy_r_self, PyObject *cpy_r_board_file);
PyObject *CPyPy_SudokuGame_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuGame___start(PyObject *cpy_r_self);
PyObject *CPyPy_SudokuGame___start(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuGame___check_win(PyObject *cpy_r_self);
PyObject *CPyPy_SudokuGame___check_win(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuGame____check_block(PyObject *cpy_r_self, PyObject *cpy_r_block);
PyObject *CPyPy_SudokuGame____check_block(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuGame____check_row(PyObject *cpy_r_self, PyObject *cpy_r_row);
PyObject *CPyPy_SudokuGame____check_row(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuGame____check_col(PyObject *cpy_r_self, PyObject *cpy_r_col);
PyObject *CPyPy_SudokuGame____check_col(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_SudokuGame____check_square(PyObject *cpy_r_self, PyObject *cpy_r_row, PyObject *cpy_r_col);
PyObject *CPyPy_SudokuGame____check_square(PyObject *self, PyObject *args, PyObject *kw);
char CPyDef___top_level__(void);
