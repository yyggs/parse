// This file was generated by qlalr - DO NOT EDIT!
#include "parsertable_p.h"

const char *const ParserTable::spell [] = {
    "end of file", "{", "}", "(", ")", 0, 0, "=", "+", "-",
    0, 0
};

const short ParserTable::lhs [] = {
    12, 12, 14, 13, 16, 16, 16, 18, 16, 17,
    15, 21, 21, 20, 20, 20, 22, 22, 19, 19,
    23
};

const short ParserTable::rhs [] = {
    1, 2, 4, 3, 2, 2, 2, 4, 1, 3,
    4, 2, 1, 1, 1, 3, 1, 1, 1, 1,
    2
};

const short ParserTable::action_default [] = {
    0, 0, 0, 0, 0, 1, 0, 0, 0, 9,
    0, 0, 0, 19, 20, 0, 0, 8, 7, 5,
    4, 0, 0, 10, 15, 14, 17, 0, 18, 16,
    0, 13, 11, 12, 6, 0, 0, 3, 21, 2
};

const short ParserTable::goto_default [] = {
    4, 5, 6, 12, 10, 9, 8, 15, 23, 30,
    27, 0
};

const short ParserTable::action_index [] = {
    18, 4, -3, 6, 1, -12, 17, 7, 5, 10,
    0, 14, 16, -12, -12, 23, -8, -12, -12, -12,
    -12, 30, -1, 19, -12, -12, -12, 30, -12, 22,
    2, -2, -12, -12, -12, 23, 3, -12, -12, -12,

    2, -12, -12, -12, -12, -12, 16, -12, -4, 4,
    -12, -12, -3, -12, -12, -2, -12, -12, -12, -12,
    -12, -12, -12, -12, -12, -12, -12, -1, -12, -12,
    -12, -6, -12, -12, -12, 0, -12, -12, -12, -12
};

const short ParserTable::action_info [] = {
    22, 38, 20, 17, 31, 31, 32, 37, 0, 35,
    11, 11, 13, 14, 7, 7, 11, 22, 1, 1,
    7, 21, 11, 2, 2, 0, 7, 26, 28, 11,
    26, 28, 0, 7, 0, 24, 25, 0, 0, 0,
    0, 0,

    18, 34, 16, 33, 36, 3, 0, 29, 19, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0
};

const short ParserTable::action_check [] = {
    3, 0, 2, 11, 6, 6, 4, 4, -1, 3,
    6, 6, 5, 6, 10, 10, 6, 3, 1, 1,
    10, 7, 6, 6, 6, -1, 10, 8, 9, 6,
    8, 9, -1, 10, -1, 5, 6, -1, -1, -1,
    -1, -1,

    4, 4, 4, 9, 4, 3, -1, 8, 4, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, 3,
    -1, -1, -1, -1, -1, -1, -1, -1
};
