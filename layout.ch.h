#define KEYS 66

static Key keys_ch[KEYS] = {
        { "1", "+|", XK_1, 1, SchemeOverlay  }, 
        { "2", "\"@", XK_2, 1, SchemeOverlay  }, 
        { "3", "*#", XK_3, 1, SchemeOverlay  }, 
        { "4", "ç¼", XK_4, 1, SchemeOverlay  }, 
        { "5", "%½", XK_5, 1, SchemeOverlay  }, 
        { "6", "&¬", XK_6, 1, SchemeOverlay  }, 
        { "7", "/|", XK_7, 1, SchemeOverlay  }, 
        { "8", "(¢", XK_8, 1, SchemeOverlay  }, 
        { "9", ")]", XK_9, 1, SchemeOverlay  }, 
        { "0", "=}", XK_0, 1, SchemeOverlay  }, 
        { "'", "?´", XK_question, 1, SchemeOverlay  }, 
        { "^", "`~", XK_dead_circumflex, 1, SchemeOverlay  }, 
        { "⌫", 0, XK_BackSpace, 1.5, -1  }, 

        { 0 }, /* New row */

        { "↹", 0, XK_Tab, 0.75, -1  }, 
        { "q", "Q@", XK_q, 1, SchemeNormABC  }, 
        { "w", "Wł", XK_w, 1, SchemeNormABC  }, 
        { "e", "E€", XK_e, 1, SchemeNormABC  }, 
        { "r", "R¶", XK_r, 1, SchemeNormABC  }, 
        { "t", "Tŧ", XK_t, 1, SchemeNormABC  }, 
        { "z", "Z←", XK_z, 1, SchemeNormABC  }, 
        { "u", "U↓", XK_u, 1, SchemeNormABC  }, 
        { "i", "I→", XK_i, 1, SchemeNormABC  }, 
        { "o", "Oœ", XK_o, 1, SchemeNormABC  }, 
        { "p", "Pþ", XK_p, 1, SchemeNormABC  }, 
        { "ü", "Ü[", 0xfc, 0.75, SchemeNormABC  }, 
        { "¨", "!]", 0xfe57, 0.75, -1  }, 

        { 0 }, /* New row */

        { "️⇪", 0, XK_Caps_Lock, 1.75, Scheme1Cust  }, 
        { "a", "Aæ", XK_a, 1, Scheme2Cust  }, 
        { "s", "Sß", XK_s, 1, Scheme2Cust  }, 
        { "d", "Dð", XK_d, 1, Scheme2Cust  }, 
        { "f", "Fđ", XK_f, 1, Scheme2Cust  }, 
        { "g", "Gŋ", XK_g, 1, Scheme2Cust  }, 
        { "h", "Hħ", XK_h, 1, Scheme2Cust  }, 
        { "j", "J̣̣̉̉", XK_j, 1, Scheme2Cust  }, 
        { "k", "Kĸ", XK_k, 1, Scheme2Cust  }, 
        { "l", "Lł", XK_l, 1, Scheme2Cust  }, 
        { "ö", "Ö", 0xf6, 1, Scheme2Cust  }, 
        { "ä", "Ä{", 0xe4, 0.75, Scheme2Cust  }, 
        { "$", "£}", 0x24, 0.75, -1  }, 

        { 0 }, /* New row */

        { "⬆", 0, XK_Shift_L, 1.75, -1  }, 
        { "<", ">\\", XK_less, 1, SchemeNormABC  }, 
        { "y", "Y«", XK_y, 1, SchemeNormABC  }, 
        { "x", "X»", XK_x, 1, SchemeNormABC  }, 
        { "c", "C¢", XK_c, 1, SchemeNormABC  }, 
        { "v", "V“", XK_v, 1, SchemeNormABC  }, 
        { "b", "B”", XK_b, 1, SchemeNormABC  }, 
        { "n", "Nn", XK_n, 1, SchemeNormABC  }, 
        { "m", "Mµ", XK_m, 1, SchemeNormABC  }, 
        { ",", ";", XK_comma, 1, SchemeNormABC  }, 
        { ".", ":·", XK_period, 1, SchemeNormABC  }, 
        { "-", "_", XK_minus, 0.75, SchemeNormABC  }, 
        { "Del", 0, XK_Delete, 1, -1  }, 

        { 0 }, /* New row */

        { "Ctrl", 0, XK_Control_L, 2, -1  }, 
        { "⌘", 0, XK_Super_L, 2, SchemeHighlight  }, 
        { "A", 0, XK_Alt_L, 2, -1  }, 
        { "", 0, XK_space, 5, SchemeHighlight  }, 
        { "AGr", 0, XK_ISO_Level3_Shift, 2, -1  }, 
        { "↺", 0, XK_Cancel, 1, SchemeHighlight  }, 
        { "M", 0, XK_Menu, 2, -1  }, 
        { "↵", 0, XK_Return, 2, SchemePress  }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

static Key keys_functions[KEYS] = {
        { "F1", 0, XK_F1, 1, -1  }, 
        { "F2", 0, XK_F2, 1, -1  }, 
        { "F3", 0, XK_F3, 1, -1  }, 
        { "F4", 0, XK_F4, 1, -1  }, 
        { "F5", 0, XK_F5, 1, -1  }, 
        { "F6", 0, XK_F6, 1, -1  }, 
        { "F7", 0, XK_F7, 1, -1  }, 
        { "F8", 0, XK_F8, 1, -1  }, 
        { "F9", 0, XK_F9, 1, -1  }, 
        { "F10", 0, XK_F10, 1, -1  }, 

        { 0 }, /* New row */

        { "▶", 0, XF86XK_AudioPlay, 1, -1  }, 
        { "●", 0, XF86XK_AudioRecord, 1, -1  }, 
        { "■", 0, XF86XK_AudioStop, 1, -1  }, 
        { "◂◂", 0, XF86XK_AudioPrev, 1, -1  }, 
        { "▸▸", 0, XF86XK_AudioNext, 1, -1  }, 
        { "♫M", 0, XF86XK_AudioMute, 1, -1  }, 
        { "♫-", 0, XF86XK_AudioLowerVolume, 1, -1  }, 
        { "♫+", 0, XF86XK_AudioRaiseVolume, 1, -1  }, 
        { "☀-", 0, XF86XK_MonBrightnessDown, 1, -1  }, 
        { "☀+", 0, XF86XK_MonBrightnessUp, 1, -1  }, 

        { 0 }, /* New row */

        { "↺", 0, XK_Cancel, 1, -1  }, 
        { "Shift", 0, XK_Shift_L, 2, -1  }, 
        { "Ctrl", 0, XK_Control_L, 1, -1  }, 
        { "Alt", 0, XK_Alt_L, 1, -1  }, 
        { "", 0, XK_space, 2, -1  }, 
        { "↓", 0, XK_Down, 1, -1  }, 
        { "↑", 0, XK_Up, 1, -1  }, 
        { "Esc", 0, XK_Escape, 1, -1  }, 
        { "↲Enter", 0, XK_Return, 2, -1  }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

static Key keys_navigation[KEYS] = {
        { "Esc", 0, XK_Escape, 1, -1  }, 
        { "⇤", 0, XK_Home, 1, -1  }, 
        { "↑", 0, XK_Up, 1, SchemeOverlay  }, 
        { "⇥", 0, XK_End, 1, -1  }, 
        { "⇈", 0, XK_Prior, 1, -1  }, 

        { 0 }, /* New row */

        { "Shift", 0, XK_Shift_L, 1, -1  }, 
        { "←", 0, XK_Left, 1, SchemeOverlay  }, 
        { "", 0, XK_space, 1, SchemeNormABC  }, 
        { "→", 0, XK_Right, 1, SchemeOverlay  }, 
        { "⇊", 0, XK_Next, 1, -1  }, 

        { 0 }, /* New row */

        { "↺", 0, XK_Cancel, 1, -1  }, 
        { "⌫Bksp", 0, XK_BackSpace, 1, -1  }, 
        { "↓", 0, XK_Down, 1, SchemeOverlay  }, 
        { "Tab", 0, XK_Tab, 1, -1  }, 
        { "↲Enter", 0, XK_Return, 1, SchemePress  }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

#define OVERLAYS 29
static Key overlay[OVERLAYS] = {
        { 0, 0, XK_q }, /* New Definition */
        { "😀", 0, 0x101f600 }, 
        { "😁", 0, 0x101f601 }, 
        { "😂", 0, 0x101f602 }, 
        { "😃", 0, 0x101f603 }, 
        { "😄", 0, 0x101f604 }, 
        { "😅", 0, 0x101f605 }, 
        { "😆", 0, 0x101f606 }, 
        { "😇", 0, 0x101f607 }, 
        { "😈", 0, 0x101f608 }, 
        { "😉", 0, 0x101f609 }, 
        { "😊", 0, 0x101f60a }, 
        { "😋", 0, 0x101f60b }, 
        { "😌", 0, 0x101f60c }, 
        { "😍", 0, 0x101f60d }, 
        { "😎", 0, 0x101f60e }, 
        { "😏", 0, 0x101f60f }, 
        { "😐", 0, 0x101f610 }, 
        { "😒", 0, 0x101f612 }, 
        { "😓", 0, 0x101f613 }, 
        { "😛", 0, 0x101f61b }, 
        { "😮", 0, 0x101f62e }, 
        { "😟", 0, 0x101f61f }, 
        { "😟", 0, 0x101f620 }, 
        { "😢", 0, 0x101f622 }, 
        { "😭", 0, 0x101f62d }, 
        { "😳", 0, 0x101f633 }, 
        { "😴", 0, 0x101f634 }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
};


#define LAYERS 3
static char* layer_names[LAYERS] = {
       "ch",
       "nav",
       "function",
};

static Key* available_layers[LAYERS] = {
        keys_ch,
        keys_navigation,
        keys_functions,
};

static int autojumpto[LAYERS] = {
        -1,
        -1,
        0,
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
