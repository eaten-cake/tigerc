#ifndef TIGER_UTILS_H_
#define TIGER_UTILS_H_

typedef char *string;
typedef struct A_stm_ *A_stm;
typedef struct A_exp_ *A_exp;
typedef struct A_expList_ *A_expList;
typedef enum {A_plus, A_minus, A_times, A_div} A_binop;

struct A_stm_ {
    enum {A_compundStm, A_assignStm, A_printStm} kind;
    union {
        struct {A_stm stm1, stm2;} compound;
        struct {string id; A_exp exp;} assign;
        struct {A_expList exps;} print;
    } u;
};



#endif // TIGER_UTILS_H