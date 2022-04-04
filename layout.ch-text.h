#define KEYS 58

static Key keys_ch[KEYS] = {
        { "1", "!|", XK_1, 1, -1  }, 
        { "2", "\"@", XK_2, 1, -1  }, 
        { "3", "*#", XK_3, 1, -1  }, 
        { "4", "ç¼", XK_4, 1, -1  }, 
        { "5", "%½", XK_5, 1, -1  }, 
        { "6", "&¬", XK_6, 1, -1  }, 
        { "7", "/|", XK_7, 1, -1  }, 
        { "8", "(¢", XK_8, 1, -1  }, 
        { "9", ")]", XK_9, 1, -1  }, 
        { "0", "=}", XK_0, 1, -1  }, 
        { "⌫", 0, XK_BackSpace, 1.5, -1  }, 

        { 0 }, /* New row */

        { "↹", 0, XK_Tab, 0.75, -1  }, 
        { "q", "Q@", XK_q, 1, -1  }, 
        { "w", "Wł", XK_w, 1, -1  }, 
        { "e", "E€", XK_e, 1, -1  }, 
        { "r", "R¶", XK_r, 1, -1  }, 
        { "t", "Tŧ", XK_t, 1, -1  }, 
        { "z", "Z←", XK_z, 1, -1  }, 
        { "u", "U↓", XK_u, 1, -1  }, 
        { "i", "I→", XK_i, 1, -1  }, 
        { "o", "Oœ", XK_o, 1, -1  }, 
        { "p", "Pþ", XK_p, 1, -1  }, 

        { 0 }, /* New row */

        { "⬆", 0, XK_Shift_L, 0.75, -1  }, 
        { "a", "Aæ", XK_a, 1, -1  }, 
        { "s", "Sß", XK_s, 1, -1  }, 
        { "d", "Dð", XK_d, 1, -1  }, 
        { "f", "Fđ", XK_f, 1, -1  }, 
        { "g", "Gŋ", XK_g, 1, -1  }, 
        { "h", "Hħ", XK_h, 1, -1  }, 
        { "j", "J̣̣̉̉", XK_j, 1, -1  }, 
        { "k", "Kĸ", XK_k, 1, -1  }, 
        { "l", "Lł", XK_l, 1, -1  }, 
        { "ü", "Ü[", 0xfc, 1, -1  }, 

        { 0 }, /* New row */

        { "↵", 0, XK_Return, 0.75, -1  }, 
        { "y", "Y«", XK_y, 1, -1  }, 
        { "x", "X»", XK_x, 1, -1  }, 
        { "c", "C¢", XK_c, 1, -1  }, 
        { "v", "V“", XK_v, 1, -1  }, 
        { "b", "B”", XK_b, 1, -1  }, 
        { "n", "Nn", XK_n, 1, -1  }, 
        { "m", "Mµ", XK_m, 1, -1  }, 
        { "ö", "Ö", 0xf6, 1, -1  }, 
        { "ä", "Ä{", 0xe4, 1, -1  }, 
        { "$", "£}", 0x24, 1, -1  }, 

        { 0 }, /* New row */

        { "Ctrl", 0, XK_Control_L, 0.75, -1  }, 
        { "Win", 0, XK_Super_L, 0.75, -1  }, 
        { "AltGr", 0, XK_ISO_Level3_Shift, 0.75, -1  }, 
        { "", 0, XK_space, 5.5, -1  }, 
        { ",", ";", XK_comma, 0.75, -1  }, 
        { ".", ":·", XK_period, 0.75, -1  }, 
        { "-", "_", XK_minus, 0.75, -1  }, 
        { "¨", "!]", 0xfe57, 0.75, -1  }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

#define OVERLAYS 1
static Key overlay[OVERLAYS] = {
{ 0, 0, XK_Cancel },
};


#define LAYERS 1
static char* layer_names[LAYERS] = {
       "ch",
};

static Key* available_layers[LAYERS] = {
        keys_ch,
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
