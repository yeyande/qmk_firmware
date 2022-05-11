#pragma once

#include "quantum.h"

// clang-format off

// layout with all the switches supported by the PCB
#define LAYOUT_all( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                   K410, K411, K412, K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  K412,  K413,  K414,  K415 }  \
}

// Ansi layout with bottom row 1.25,1.25,1,25,6.25,1.5,1.5,<-,v,->
#define LAYOUT_65_all_noblocker( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                   K410,       K412, K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  KC_NO, K412, K413,  K414,  K415 }  \
}

#define LAYOUT_65_ansi_noblocker( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                   K410,       K412, K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  KC_NO, K412, K413,  K414,  K415 }  \
}

#define LAYOUT_65_ansi_noblocker_splitbs( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                   K410,       K412, K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  KC_NO, K412, K413,  K414,  K415 }  \
}

#define LAYOUT_65_iso_noblocker( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K114, K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                   K410,       K412, K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  KC_NO, K412, K413,  K414,  K415 }  \
}

// Ansi layout with bottom row 1.25,1.25,1,25,6.25,1.25,1.25 blocker <-,v,->
#define LAYOUT_65_all_blocker( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                   K410, K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_ansi_blocker( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                   K410, K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_ansi_blocker_splitbs( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                   K410, K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_iso_blocker( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K114, K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                   K410, K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  KC_NO, K413,  K414,  K415 }  \
}

// ANSI layout with bottom row 1.5,1.5,7,1.5,1.5,<-,v,->
#define LAYOUT_65_all_7u_noblocker( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,                         K406,                   K410,       K412, K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  KC_NO, K412, K413,  K414,  K415 }  \
}

#define LAYOUT_65_ansi_7u_noblocker( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,                         K406,                   K410,       K412, K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  KC_NO, K412, K413,  K414,  K415 }  \
}


#define LAYOUT_65_ansi_7u_noblocker_splitbs( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,                         K406,                   K410,       K412, K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  KC_NO, K412, K413,  K414,  K415 }  \
}

#define LAYOUT_65_iso_7u_noblocker( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K114, K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,                         K406,                   K410,       K412, K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  KC_NO, K412, K413,  K414,  K415 }  \
}

// ANSI layout with bottom row 1.5,1,1.5,7,1.5, blocker, <-,v,->
#define LAYOUT_65_all_7u_wk( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                         K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, KC_NO, K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_ansi_7u_wk( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                         K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, KC_NO, K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_ansi_7u_wk_splitbs( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                         K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, KC_NO, K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_iso_7u_wk( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K114, K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400, K401,       K403,             K406,                         K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401,  KC_NO, K403,  KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, KC_NO, K411,  KC_NO, K413,  K414,  K415 }  \
}

// layout with bottom row 1.5,blocker,1.5,7,1.5, blocker, <-,v,->
#define LAYOUT_65_all_7u_wkl( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400,       K402,                   K406,                         K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  KC_NO, K402,  KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, KC_NO, K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_ansi_7u_wkl( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
     K400,       K402,                   K406,                         K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  KC_NO, K402,  KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, KC_NO, K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_ansi_7u_wkl_splitbs( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
    K400,        K402,                   K406,                         K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  KC_NO, K402,  KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, KC_NO, K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_iso_7u_wkl( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K114, K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
    K400,        K402,                   K406,                         K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  KC_NO, K402,  KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, KC_NO, K411,  KC_NO, K413,  K414,  K415 }  \
}

// layout with bottom row blocker,1,1.5,7,1.5,1, blocker, <-,v,->
#define LAYOUT_65_all_7u_hhkb( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
    K400, K401,                         K406,                   K410, K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401, KC_NO,  KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_ansi_7u_hhkb( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
    K400, K401,                         K406,                   K410, K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401, KC_NO,  KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_ansi_7u_hhkb_splitbs( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
     K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
    K400, K401,                         K406,                   K410, K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  KC_NO,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401, KC_NO,  KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  KC_NO, K413,  K414,  K415 }  \
}

#define LAYOUT_65_iso_7u_hhkb( \
     K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       K015, \
     K100,       K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K115, \
     K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K114, K214, K215, \
     K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, K315, \
    K400, K401,                         K406,                   K410, K411,       K413, K414, K415  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO,  K015 }, \
     { K100,  KC_NO, K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
     { K200,  KC_NO, K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
     { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  K314,  K315 }, \
     { K400,  K401, KC_NO,  KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  KC_NO, K413,  K414,  K415 }  \
}

// clang-format on
