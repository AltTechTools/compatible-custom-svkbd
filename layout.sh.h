#define KEYS 68

static Key keys_sh[KEYS] = {
        { "`", "~", XK_quoteleft, 1, -1  }, 
        { "1", "!~", XK_1, 1, -1  }, 
        { "2", "\"ˇ", XK_2, 1, -1  }, 
        { "3", "#^", XK_3, 1, -1  }, 
        { "4", "$˘", XK_4, 1, -1  }, 
        { "5", "%°", XK_5, 1, -1  }, 
        { "6", "&˛", XK_6, 1, -1  }, 
        { "7", "/`", XK_7, 1, -1  }, 
        { "8", "(˙", XK_8, 1, -1  }, 
        { "9", ")'", XK_9, 1, -1  }, 
        { "0", "=˝", XK_0, 1, -1  }, 
        { "'", "?¨", XK_apostrophe, 1, -1  }, 
        { "+", "*¸", XK_plus, 1, -1  }, 
        { "<", "-", XK_BackSpace, 2, -1  }, 
        { "Del", 0, XK_Delete, 1, -1  }, 

        { 0 }, /* New row */

        { "->|", 0, XK_Tab, 1, -1  }, 
        { "q", "Q\\", XK_q, 1, -1  }, 
        { "w", "W|", XK_w, 1, -1  }, 
        { "e", "E", XK_e, 1, -1  }, 
        { "r", "R", XK_r, 1, -1  }, 
        { "t", "T", XK_t, 1, -1  }, 
        { "z", "Z", XK_z, 1, -1  }, 
        { "u", "U", XK_u, 1, -1  }, 
        { "i", "I", XK_i, 1, -1  }, 
        { "o", "O", XK_o, 1, -1  }, 
        { "p", "P", XK_p, 1, -1  }, 
        { "š", "Š÷", XK_scaron, 1, -1  }, 
        { "đ", "Đ×", XK_dstroke, 1, -1  }, 
        { "Enter", 0, XK_Return, 3, -1  }, 

        { 0 }, /* New row */

        { 0, 0, XK_Caps_Lock, 2, -1  }, 
        { "a", "A", XK_a, 1, -1  }, 
        { "s", "S", XK_s, 1, -1  }, 
        { "d", "D", XK_d, 1, -1  }, 
        { "f", "F[", XK_f, 1, -1  }, 
        { "g", "G]", XK_g, 1, -1  }, 
        { "h", "H", XK_h, 1, -1  }, 
        { "j", "J̣̣", XK_j, 1, -1  }, 
        { "k", "Kł", XK_k, 1, -1  }, 
        { "l", "LŁ", XK_l, 1, -1  }, 
        { "č", "Č", XK_ccaron, 1, -1  }, 
        { "ć", "Ćß", XK_cacute, 1, -1  }, 
        { "ž", "Ž¤", XK_zcaron, 1, -1  }, 

        { 0 }, /* New row */

        { 0, 0, XK_Shift_L, 2, -1  }, 
        { "<", ">«»", XK_less, 1, -1  }, 
        { "y", "Y", XK_y, 1, -1  }, 
        { "x", "X", XK_x, 1, -1  }, 
        { "c", "C", XK_c, 1, -1  }, 
        { "v", "V@", XK_v, 1, -1  }, 
        { "b", "B{", XK_b, 1, -1  }, 
        { "n", "N}", XK_n, 1, -1  }, 
        { "m", "M§", XK_m, 1, -1  }, 
        { ",", ";", XK_comma, 1, -1  }, 
        { ".", ":", XK_period, 1, -1  }, 
        { "-", "_", XK_minus, 1, -1  }, 
        { 0, 0, XK_Shift_R, 2, -1  }, 

        { 0 }, /* New row */

        { "Ctrl", 0, XK_Control_L, 2, -1  }, 
        { "Win", 0, XK_Super_L, 2, -1  }, 
        { "Alt", 0, XK_Alt_L, 2, -1  }, 
        { "", 0, XK_space, 5, -1  }, 
        { "AltGr", 0, XK_ISO_Level3_Shift, 2, -1  }, 
        { "Menu", 0, XK_Menu, 2, -1  }, 
        { "Ctrl", 0, XK_Control_R, 2, -1  }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

#define OVERLAYS 1
static Key overlay[OVERLAYS] = {
{ 0, 0, XK_Cancel },
};


#define LAYERS 1
static char* layer_names[LAYERS] = {
       "sh",
};

static Key* available_layers[LAYERS] = {
        keys_sh,
};

static int autojumpto[LAYERS] = {
        -1,
};

Buttonmod buttonmods[] = {
        { XK_Shift_L, Button2 },
        { XK_Alt_L, Button3 },
};

Keyaction keyactions[] = {
        { XK_Cancel, "cycle" },
        { XK_script_switch, "togglelayer" },
        { XK_Mode_switch, "togglelayer" },
        { XK_KP_Insert, "overlaytoggle" },
        { XK_Break, "break" },
};
