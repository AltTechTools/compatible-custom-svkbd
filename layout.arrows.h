#define KEYS 8

static Key keys_arrows[KEYS] = {
        { 0, 0, XK_Shift_L, 2, -1  }, 
        { "←", 0, XK_Left, 1, -1  }, 
        { "↓", 0, XK_Down, 1, -1  }, 
        { "↑", 0, XK_Up, 1, -1  }, 
        { "→", 0, XK_Right, 1, -1  }, 
        { "Alt", 0, XK_Alt_L, 2, -1  }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

#define OVERLAYS 1
static Key overlay[OVERLAYS] = {
{ 0, 0, XK_Cancel },
};


#define LAYERS 1
static char* layer_names[LAYERS] = {
       "arrows",
};

static Key* available_layers[LAYERS] = {
        keys_arrows,
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
