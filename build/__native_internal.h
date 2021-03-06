#ifndef MYPYC_NATIVE_INTERNAL_H
#define MYPYC_NATIVE_INTERNAL_H
#include <Python.h>
#include <CPy.h>
#include "__native.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatic_unicode_0;
extern PyObject *CPyStatic_unicode_1;
extern PyObject *CPyStatic_unicode_2;
extern PyObject *CPyStatic_unicode_3;
extern PyObject *CPyStatic_unicode_4;
extern PyObject *CPyStatic_unicode_5;
extern PyObject *CPyStatic_unicode_6;
extern PyObject *CPyStatic_unicode_7;
extern PyObject *CPyStatic_unicode_8;
extern PyObject *CPyStatic_unicode_9;
extern PyObject *CPyStatic_unicode_10;
extern PyObject *CPyStatic_unicode_11;
extern PyObject *CPyStatic_unicode_12;
extern PyObject *CPyStatic_unicode_13;
extern PyObject *CPyStatic_unicode_14;
extern PyObject *CPyStatic_unicode_15;
extern PyObject *CPyStatic_unicode_16;
extern PyObject *CPyStatic_unicode_17;
extern PyObject *CPyStatic_unicode_18;
extern PyObject *CPyStatic_unicode_19;
extern PyObject *CPyStatic_unicode_20;
extern PyObject *CPyStatic_unicode_21;
extern PyObject *CPyStatic_unicode_22;
extern PyObject *CPyStatic_unicode_23;
extern PyObject *CPyStatic_unicode_24;
extern PyObject *CPyStatic_unicode_25;
extern PyObject *CPyStatic_unicode_26;
extern PyObject *CPyStatic_unicode_27;
extern PyObject *CPyStatic_unicode_28;
extern PyObject *CPyStatic_unicode_29;
extern PyObject *CPyStatic_unicode_30;
extern PyObject *CPyStatic_unicode_31;
extern PyObject *CPyStatic_unicode_32;
extern PyObject *CPyStatic_unicode_33;
extern PyObject *CPyStatic_unicode_34;
extern PyObject *CPyStatic_unicode_35;
extern PyObject *CPyStatic_unicode_36;
extern PyObject *CPyStatic_unicode_37;
extern PyObject *CPyStatic_unicode_38;
extern PyObject *CPyStatic_unicode_39;
extern PyObject *CPyStatic_unicode_40;
extern PyObject *CPyStatic_unicode_41;
extern PyObject *CPyStatic_unicode_42;
extern PyObject *CPyStatic_unicode_43;
extern PyObject *CPyStatic_unicode_44;
extern PyObject *CPyStatic_unicode_45;
extern PyObject *CPyStatic_unicode_46;
extern PyObject *CPyStatic_unicode_47;
extern PyObject *CPyStatic_unicode_48;
extern PyObject *CPyStatic_unicode_49;
extern PyObject *CPyStatic_unicode_50;
extern PyObject *CPyStatic_unicode_51;
extern PyObject *CPyStatic_unicode_52;
extern PyObject *CPyStatic_unicode_53;
extern PyObject *CPyStatic_unicode_54;
extern PyObject *CPyStatic_unicode_55;
extern PyObject *CPyStatic_unicode_56;
extern PyObject *CPyStatic_unicode_57;
extern PyObject *CPyStatic_unicode_58;
extern PyObject *CPyStatic_unicode_59;
extern PyObject *CPyStatic_unicode_60;
extern PyObject *CPyStatic_unicode_61;
extern PyObject *CPyStatic_unicode_62;
extern PyObject *CPyStatic_unicode_63;
extern PyObject *CPyStatic_unicode_64;
extern PyObject *CPyStatic_unicode_65;
extern PyObject *CPyStatic_unicode_66;
extern PyObject *CPyStatic_unicode_67;
extern PyObject *CPyStatic_unicode_68;
extern PyObject *CPyStatic_unicode_69;
extern PyObject *CPyStatic_unicode_70;
extern PyObject *CPyStatic_unicode_71;
extern PyObject *CPyStatic_unicode_72;
extern PyObject *CPyStatic_unicode_73;
extern PyObject *CPyStatic_unicode_74;
extern PyObject *CPyStatic_unicode_75;
extern PyObject *CPyStatic_unicode_76;
extern PyObject *CPyStatic_unicode_77;
extern PyObject *CPyStatic_unicode_78;
extern PyObject *CPyStatic_unicode_79;
extern PyObject *CPyStatic_unicode_80;
extern PyObject *CPyStatic_unicode_81;
extern PyObject *CPyStatic_unicode_82;
extern PyObject *CPyStatic_unicode_83;
extern PyObject *CPyStatic_unicode_84;
extern PyObject *CPyStatic_unicode_85;
extern PyObject *CPyStatic_unicode_86;
extern PyObject *CPyStatic_unicode_87;
extern PyObject *CPyStatic_unicode_88;
extern PyObject *CPyStatic_unicode_89;
extern PyObject *CPyStatic_unicode_90;
extern PyObject *CPyStatic_unicode_91;
extern PyObject *CPyStatic_unicode_92;
extern PyObject *CPyStatic_unicode_93;
extern PyObject *CPyStatic_unicode_94;
extern PyObject *CPyStatic_unicode_95;
extern PyObject *CPyStatic_unicode_96;
extern PyObject *CPyStatic_unicode_97;
extern PyObject *CPyStatic_unicode_98;
extern PyObject *CPyStatic_unicode_99;
extern PyObject *CPyStatic_unicode_100;
extern PyObject *CPyStatic_unicode_101;
extern PyObject *CPyStatic_unicode_102;
extern PyObject *CPyStatic_unicode_103;
extern PyObject *CPyStatic_unicode_104;
extern PyObject *CPyStatic_unicode_105;
extern PyObject *CPyStatic_unicode_106;
extern PyObject *CPyStatic_unicode_107;
extern PyObject *CPyStatic_unicode_108;
extern PyObject *CPyStatic_unicode_109;
extern PyObject *CPyStatic_unicode_110;
extern PyObject *CPyStatic_unicode_111;
extern PyObject *CPyStatic_unicode_112;
extern PyObject *CPyStatic_unicode_113;
extern PyObject *CPyStatic_unicode_114;
extern PyObject *CPyStatic_unicode_115;
extern PyObject *CPyStatic_unicode_116;
extern CPyModule *CPyModule_sudoku_internal;
extern CPyModule *CPyModule_sudoku;
extern PyObject *CPyStatic_globals;
extern CPyModule *CPyModule_builtins_internal;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_argparse_internal;
extern CPyModule *CPyModule_argparse;
extern CPyModule *CPyModule_tkinter_internal;
extern CPyModule *CPyModule_tkinter;
extern PyTypeObject *CPyType_SudokuError;
extern PyTypeObject *CPyType_SudokuUI;
extern PyObject *native_SudokuUI_getcanvas(sudoku___SudokuUIObject *self);
extern bool native_SudokuUI_setcanvas(sudoku___SudokuUIObject *self, PyObject *value);
extern CPyTagged native_SudokuUI_getcol(sudoku___SudokuUIObject *self);
extern bool native_SudokuUI_setcol(sudoku___SudokuUIObject *self, CPyTagged value);
extern PyObject *native_SudokuUI_getgame(sudoku___SudokuUIObject *self);
extern bool native_SudokuUI_setgame(sudoku___SudokuUIObject *self, PyObject *value);
extern PyObject *native_SudokuUI_getparent(sudoku___SudokuUIObject *self);
extern bool native_SudokuUI_setparent(sudoku___SudokuUIObject *self, PyObject *value);
extern CPyTagged native_SudokuUI_getrow(sudoku___SudokuUIObject *self);
extern bool native_SudokuUI_setrow(sudoku___SudokuUIObject *self, CPyTagged value);
extern PyObject *CPyDef_SudokuUI(PyObject *cpy_r_parent, PyObject *cpy_r_game);
extern PyTypeObject *CPyType_SudokuBoard;
extern PyObject *native_SudokuBoard_getboard(sudoku___SudokuBoardObject *self);
extern bool native_SudokuBoard_setboard(sudoku___SudokuBoardObject *self, PyObject *value);
extern PyObject *CPyDef_SudokuBoard(PyObject *cpy_r_board_file);
extern PyTypeObject *CPyType_SudokuGame;
extern PyObject *native_SudokuGame_getboard_file(sudoku___SudokuGameObject *self);
extern bool native_SudokuGame_setboard_file(sudoku___SudokuGameObject *self, PyObject *value);
extern PyObject *native_SudokuGame_getgame_over(sudoku___SudokuGameObject *self);
extern bool native_SudokuGame_setgame_over(sudoku___SudokuGameObject *self, PyObject *value);
extern PyObject *native_SudokuGame_getpuzzle(sudoku___SudokuGameObject *self);
extern bool native_SudokuGame_setpuzzle(sudoku___SudokuGameObject *self, PyObject *value);
extern PyObject *native_SudokuGame_getstart_puzzle(sudoku___SudokuGameObject *self);
extern bool native_SudokuGame_setstart_puzzle(sudoku___SudokuGameObject *self, PyObject *value);
extern PyObject *CPyDef_SudokuGame(PyObject *cpy_r_board_file);
extern PyObject *CPyDef_parse_arguments(void);
extern PyObject *CPyPy_parse_arguments(PyObject *self, PyObject *args, PyObject *kw);
extern char CPyDef_SudokuUI_____init__(PyObject *cpy_r_self, PyObject *cpy_r_parent, PyObject *cpy_r_game);
extern PyObject *CPyPy_SudokuUI_____init__(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuUI____init_ui(PyObject *cpy_r_self);
extern PyObject *CPyPy_SudokuUI____init_ui(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuUI____draw_grid(PyObject *cpy_r_self);
extern PyObject *CPyPy_SudokuUI____draw_grid(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuUI___find_square(PyObject *cpy_r_self, PyObject *cpy_r_row, PyObject *cpy_r_col);
extern PyObject *CPyPy_SudokuUI___find_square(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuUI___check_conflict(PyObject *cpy_r_self, PyObject *cpy_r_i, PyObject *cpy_r_j, PyObject *cpy_r_row, PyObject *cpy_r_col, PyObject *cpy_r_square);
extern PyObject *CPyPy_SudokuUI___check_conflict(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuUI____draw_puzzle(PyObject *cpy_r_self);
extern PyObject *CPyPy_SudokuUI____draw_puzzle(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuUI____clear_answers(PyObject *cpy_r_self);
extern PyObject *CPyPy_SudokuUI____clear_answers(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuUI____cell_clicked(PyObject *cpy_r_self, PyObject *cpy_r_event);
extern PyObject *CPyPy_SudokuUI____cell_clicked(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuUI____draw_cursor(PyObject *cpy_r_self);
extern PyObject *CPyPy_SudokuUI____draw_cursor(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuUI____key_pressed(PyObject *cpy_r_self, PyObject *cpy_r_event);
extern PyObject *CPyPy_SudokuUI____key_pressed(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuUI____draw_victory(PyObject *cpy_r_self);
extern PyObject *CPyPy_SudokuUI____draw_victory(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuBoard_____init__(PyObject *cpy_r_self, PyObject *cpy_r_board_file);
extern PyObject *CPyPy_SudokuBoard_____init__(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuBoard____create_board(PyObject *cpy_r_self, PyObject *cpy_r_board_file);
extern PyObject *CPyPy_SudokuBoard____create_board(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuGame_____init__(PyObject *cpy_r_self, PyObject *cpy_r_board_file);
extern PyObject *CPyPy_SudokuGame_____init__(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuGame___start(PyObject *cpy_r_self);
extern PyObject *CPyPy_SudokuGame___start(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuGame___check_win(PyObject *cpy_r_self);
extern PyObject *CPyPy_SudokuGame___check_win(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuGame____check_block(PyObject *cpy_r_self, PyObject *cpy_r_block);
extern PyObject *CPyPy_SudokuGame____check_block(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuGame____check_row(PyObject *cpy_r_self, PyObject *cpy_r_row);
extern PyObject *CPyPy_SudokuGame____check_row(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuGame____check_col(PyObject *cpy_r_self, PyObject *cpy_r_col);
extern PyObject *CPyPy_SudokuGame____check_col(PyObject *self, PyObject *args, PyObject *kw);
extern PyObject *CPyDef_SudokuGame____check_square(PyObject *cpy_r_self, PyObject *cpy_r_row, PyObject *cpy_r_col);
extern PyObject *CPyPy_SudokuGame____check_square(PyObject *self, PyObject *args, PyObject *kw);
extern char CPyDef___top_level__(void);
#endif
