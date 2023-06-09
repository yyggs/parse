// This file was generated by qlalr - DO NOT EDIT!
#ifndef PARSERTABLE_P_H
#define PARSERTABLE_P_H

class ParserTable
{
public:
    enum VariousConstants {
        EOF_SYMBOL = 0,
        T_ADD = 8,
        T_EQUAL = 7,
        T_LEFT = 1,
        T_LOOP = 10,
        T_LOOPEND = 11,
        T_NUM = 5,
        T_RIGHT = 2,
        T_SLEFT = 3,
        T_SRIGHT = 4,
        T_SUB = 9,
        T_VAR = 6,

        ACCEPT_STATE = 38,
        RULE_COUNT = 21,
        STATE_COUNT = 40,
        TERMINAL_COUNT = 12,
        NON_TERMINAL_COUNT = 12,

        GOTO_INDEX_OFFSET = 40,
        GOTO_INFO_OFFSET = 42,
        GOTO_CHECK_OFFSET = 42
    };

    static const char *const     spell[];
    static const short             lhs[];
    static const short             rhs[];
    static const short    goto_default[];
    static const short  action_default[];
    static const short    action_index[];
    static const short     action_info[];
    static const short    action_check[];

    static inline int nt_action (int state, int nt)
    {
        const int yyn = action_index [GOTO_INDEX_OFFSET + state] + nt;
        if (yyn < 0 || action_check [GOTO_CHECK_OFFSET + yyn] != nt)
            return goto_default [nt];

        return action_info [GOTO_INFO_OFFSET + yyn];
    }

    static inline int t_action (int state, int token)
    {
        const int yyn = action_index [state] + token;

        if (yyn < 0 || action_check [yyn] != token)
            return - action_default [state];

        return action_info [yyn];
    }
};


#endif // PARSERTABLE_P_H

