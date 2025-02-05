#pragma once
#include <SDL2/SDL.h>

class KeyEvent
{
public:
    enum Key {
        K0 = SDLK_0,
        K1 = SDLK_1,
        K2 = SDLK_2,
        K3 = SDLK_3,
        K4 = SDLK_4,
        K5 = SDLK_5,
        K6 = SDLK_6,
        K7 = SDLK_7,
        K8 = SDLK_8,
        K9 = SDLK_9,
        KA = SDLK_a,
        KAcBack = SDLK_AC_BACK, // the Back key (application control keypad)
        KAcBookmarks = SDLK_AC_BOOKMARKS, // the Bookmarks key (application control keypad)
        KAcForward = SDLK_AC_FORWARD, // the Forward key (application control keypad)
        KAcHome = SDLK_AC_HOME, // the Home key (application control keypad)
        KAcRefresh = SDLK_AC_REFRESH,// the Refresh key (application control keypad)
        KAcSearch = SDLK_AC_SEARCH, // the Search key (application control keypad)
        KAcStop = SDLK_AC_STOP, // the Stop key (application control keypad)
        KAgain = SDLK_AGAIN, // the Again key (Redo)
        KAltErase = SDLK_ALTERASE, // Erase-Eaze
        KQuote = SDLK_QUOTE,
        KApplication = SDLK_APPLICATION, // the Application / Compose / Context Menu (Windows) key
        KAudioMute = SDLK_AUDIOMUTE, // the Mute volume key
        KAudioNext = SDLK_AUDIONEXT, // the Next Track media key
        KAudioPlay = SDLK_AUDIOPLAY, // the Play media key
        KAudioPrev = SDLK_AUDIOPREV, // the Previous Track media key
        KAudioStop = SDLK_AUDIOSTOP, // the Stop media key
        KB = SDLK_b,
        KBackslash = SDLK_BACKSLASH,
        KBackspace = SDLK_BACKSPACE,
        KBrightnessDown = SDLK_BRIGHTNESSDOWN,
        KBrightnessUp = SDLK_BRIGHTNESSUP,
        KC = SDLK_c,
        KCalculator = SDLK_CALCULATOR,
        KCancel = SDLK_CANCEL,
        KCapsLock = SDLK_CAPSLOCK,
        KClear = SDLK_CLEAR,
        KClearAgain = SDLK_CLEARAGAIN,
        KComma = SDLK_COMMA,
        KComputer = SDLK_COMPUTER,
        KCopy = SDLK_COPY,
        KCrSel = SDLK_CRSEL,
        KCurrencySubUnit = SDLK_CURRENCYSUBUNIT,
        KCurrencyUnit = SDLK_CURRENCYUNIT,
        KCut = SDLK_CUT,
        KD = SDLK_d,
        KDecimalSeparator = SDLK_DECIMALSEPARATOR,
        KDelete = SDLK_DELETE,
        KDisplaySwitch = SDLK_DISPLAYSWITCH,
        KDown = SDLK_DOWN,
        KE = SDLK_e,
        KEject = SDLK_EJECT,
        KEnd = SDLK_END,
        KEquals = SDLK_EQUALS,
        KEscape = SDLK_ESCAPE,
        KExecute = SDLK_EXECUTE,
        KExSel = SDLK_EXSEL,
        KF = SDLK_f,
        KF1 = SDLK_F1,
        KF10 = SDLK_F10,
        KF11 = SDLK_F11,
        KF12 = SDLK_F12,
        KF13 = SDLK_F13,
        KF14 = SDLK_F14,
        KF15 = SDLK_F15,
        KF16 = SDLK_F16,
        KF17 = SDLK_F17,
        KF18 = SDLK_F18,
        KF19 = SDLK_F19,
        KF2 = SDLK_F2,
        KF20 = SDLK_F20,
        KF21 = SDLK_F21,
        KF22 = SDLK_F22,
        KF23 = SDLK_F23,
        KF24 = SDLK_F24,
        KF3 = SDLK_F3,
        KF4 = SDLK_F4,
        KF5 = SDLK_F5,
        KF6 = SDLK_F6,
        KF7 = SDLK_F7,
        KF8 = SDLK_F8,
        KF9 = SDLK_F9,
        KFind = SDLK_FIND,
        KG = SDLK_g,
        KBackquate = SDLK_BACKQUOTE,
        KH = SDLK_h,
        KHelp = SDLK_HELP,
        KHome = SDLK_HOME,
        KI = SDLK_i,
        KInsert = SDLK_INSERT,
        KJ = SDLK_j,
        KK = SDLK_k,
        KKbdIllumDown = SDLK_KBDILLUMDOWN, // the Keyboard Illumination Down key
        KKbdIllumToggle = SDLK_KBDILLUMTOGGLE, // the Keyboard Illumination Toggle key
        KKbdIllumUp = SDLK_KBDILLUMUP, // the Keyboard Illumination Up key
        KKeypad0 = SDLK_KP_0,
        KKeypad00 = SDLK_KP_00,
        KKeypad000 = SDLK_KP_000,
        KKeypad1 = SDLK_KP_1,
        KKeypad2 = SDLK_KP_2,
        KKeypad3 = SDLK_KP_3,
        KKeypad4 = SDLK_KP_4,
        KKeypad5 = SDLK_KP_5,
        KKeypad6 = SDLK_KP_6,
        KKeypad7 = SDLK_KP_7,
        KKeypad8 = SDLK_KP_8,
        KKeypad9 = SDLK_KP_9,
        KKeypadA = SDLK_KP_A,
        KKeypadAmpersand = SDLK_KP_AMPERSAND,
        KKeypadAt = SDLK_KP_AT,
        KKeypadB = SDLK_KP_B,
        KKeypadBackspace = SDLK_KP_BACKSPACE,
        KKeypadBinary = SDLK_KP_BINARY,
        KKeypadC = SDLK_KP_C,
        KKeypadClear = SDLK_KP_CLEAR,
        KKeypadClearEntry = SDLK_KP_CLEARENTRY,
        KKeypadColon = SDLK_KP_COLON,
        KKeypadComma = SDLK_KP_COMMA,
        KKeypadD = SDLK_KP_D,
        KKeypadDblAmpersand = SDLK_KP_DBLAMPERSAND,
        KKeypadDblVerticalBar = SDLK_KP_DBLVERTICALBAR,
        KKeypadDecimal = SDLK_KP_DECIMAL,
        KKeypadDivide = SDLK_KP_DIVIDE,
        KKeypadE = SDLK_KP_E,
        KKeypadEnter = SDLK_KP_ENTER,
        KKeypadEquals = SDLK_KP_EQUALS,
        KKeypadEqualsAs400 = SDLK_KP_EQUALSAS400,
        KKeypadExclam = SDLK_KP_EXCLAM,
        KKeypadF = SDLK_KP_F,
        KKeypadFreater = SDLK_KP_GREATER,
        KKeypadHash = SDLK_KP_HASH,
        KKeypadHexadecimal = SDLK_KP_HEXADECIMAL,
        KKeypadLeftBrace = SDLK_KP_LEFTBRACE,
        KKeypadLeftParen = SDLK_KP_LEFTPAREN,
        KKeypadLess = SDLK_KP_LESS,
        KKeypadMemAdd = SDLK_KP_MEMADD,
        KKeypadMemClear = SDLK_KP_MEMCLEAR,
        KKeypadMemDivide = SDLK_KP_MEMDIVIDE,
        KKeypadMemMultiply = SDLK_KP_MEMMULTIPLY,
        KKeypadMemRecall = SDLK_KP_MEMRECALL,
        KKeypadMemStore = SDLK_KP_MEMSTORE,
        KKeypadMemSubtract = SDLK_KP_MEMSUBTRACT,
        KKeypadMinus = SDLK_KP_MINUS,
        KKeypadMultiply = SDLK_KP_MULTIPLY,
        KKeypadOctal = SDLK_KP_OCTAL,
        KKeypadPercent = SDLK_KP_PERCENT,
        KKeypadPeriod = SDLK_KP_PERIOD,
        KKeypadPlus = SDLK_KP_PLUS,
        KKeypadPlusMinus = SDLK_KP_PLUSMINUS,
        KKeypadPower = SDLK_KP_POWER,
        KKeypadRightBrace = SDLK_KP_RIGHTBRACE,
        KKeypadRightParen = SDLK_KP_RIGHTPAREN,
        KKeypadSpace = SDLK_KP_SPACE,
        KKeypadTab = SDLK_KP_TAB,
        KKeypadVerticalBar = SDLK_KP_VERTICALBAR,
        KKeypadXor = SDLK_KP_XOR,
        KL = SDLK_l,
        KLeftAlt = SDLK_LALT,
        KLeftCtrl = SDLK_LCTRL,
        KLeft = SDLK_LEFT,
        KLeftBracket = SDLK_LEFTBRACKET,
        KLeftGui = SDLK_LGUI,
        KLeftShift = SDLK_LSHIFT,
        KM = SDLK_m,
        KMail = SDLK_MAIL,
        KMediaSelect = SDLK_MEDIASELECT,
        KMenu = SDLK_MENU,
        KMinus = SDLK_MINUS,
        KModeSwitch = SDLK_MODE,
        KMute = SDLK_MUTE,
        KN = SDLK_n,
        KNumlock = SDLK_NUMLOCKCLEAR,
        KO = SDLK_o,
        KOper = SDLK_OPER,
        KOut = SDLK_OUT,
        KP = SDLK_p,
        KPageDown = SDLK_PAGEDOWN,
        KPageUp = SDLK_PAGEUP,
        KPaste = SDLK_PASTE,
        KPause = SDLK_PAUSE,
        KPeriod = SDLK_PERIOD,
        KPower = SDLK_POWER, // The USB document says this is a status flag, not a physical key - but some Mac keyboards do have a power key.
        KPrintScreen = SDLK_PRINTSCREEN,
        KPrior = SDLK_PRIOR,
        KQ = SDLK_q,
        KR = SDLK_r,
        KRightAlt = SDLK_RALT,
        KRightCtrl = SDLK_RCTRL,
        KReturn = SDLK_RETURN,
        KReturn2 = SDLK_RETURN2,
        KRightGUI = SDLK_RGUI, // windows, command (apple), meta
        KRight = SDLK_RIGHT,
        KRightBracket = SDLK_RIGHTBRACKET,
        KRightShift = SDLK_RSHIFT,
        KS = SDLK_s,
        KScrollLock = SDLK_SCROLLLOCK,
        KSelect = SDLK_SELECT,
        KSemicolon = SDLK_SEMICOLON,
        KSeparator = SDLK_SEPARATOR,
        KSlash = SDLK_SLASH,
        KSleep = SDLK_SLEEP,
        KSpace = SDLK_SPACE,
        KStop = SDLK_STOP,
        KSysReq = SDLK_SYSREQ,
        KT = SDLK_t,
        KTab = SDLK_TAB,
        KThousandsSeparator = SDLK_THOUSANDSSEPARATOR,
        KU = SDLK_u,
        KUndo = SDLK_UNDO,
        KUnknown = SDLK_UNKNOWN,
        KUp = SDLK_UP,
        KV = SDLK_v,
        KVolumeDown = SDLK_VOLUMEDOWN,
        KVolumeUp = SDLK_VOLUMEUP,
        KW = SDLK_w,
        KWww = SDLK_WWW,
        KX = SDLK_x,
        KY = SDLK_y,
        KZ = SDLK_z,
        KAmpersand = SDLK_AMPERSAND,
        KAsterisk = SDLK_ASTERISK,
        KAt = SDLK_AT,
        KCaret = SDLK_CARET,
        KColon = SDLK_COLON,
        KDollar = SDLK_DOLLAR,
        KExclaim = SDLK_EXCLAIM,
        KGreater = SDLK_GREATER,
        KHash = SDLK_HASH,
        KLeftParen = SDLK_LEFTPAREN,
        KLess = SDLK_LESS,
        KPercent = SDLK_PERCENT,
        KPlus = SDLK_PLUS,
        KQuestion = SDLK_QUESTION,
        KQuoteDbl = SDLK_QUOTEDBL,
        KRightParen = SDLK_RIGHTPAREN,
        KUnderscore = SDLK_UNDERSCORE
    };
    enum Modifier { 
        MNone = KMOD_NONE, // 0 (no modifier is applicable)
        MLShift = KMOD_LSHIFT, // the left Shift key is down
        MRShift = KMOD_RSHIFT, // the right Shift key is down
        MLCtrl = KMOD_LCTRL, // the left Ctrl (Control) key is down
        MRCtrl = KMOD_RCTRL, // the right Ctrl (Control) key is down
        MLAlt = KMOD_LALT, // the left Alt key is down
        MRAlt = KMOD_RALT, // the right Alt key is down
        MLGui = KMOD_LGUI, // the left GUI key (often the Windows key) is down
        MRGui = KMOD_RGUI, // the right GUI key (often the Windows key) is down
        MNum = KMOD_NUM, // the Num Lock key (may be located on an extended keypad) is down
        MCaps = KMOD_CAPS, // the Caps Lock key is down
        MMode = KMOD_MODE, // the AltGr key is down
        MCtrl = KMOD_CTRL, // (KMOD_LCTRL|KMOD_RCTRL)
        MShift = KMOD_SHIFT, // (KMOD_LSHIFT|KMOD_RSHIFT)
        MAlt = KMOD_ALT, // (KMOD_LALT|KMOD_RALT)
        MGui = KMOD_GUI, // (KMOD_LGUI|KMOD_RGUI)
        MRESERVED = KMOD_RESERVED, // reserved for future use
    };
    KeyEvent(Key, unsigned modifiers = MNone, bool autoRepeat = false);
    bool isAutoRepeat() const;
    Key key() const;
    unsigned modifiers() const;
private:
    bool autoRepeat_;
    Key key_;
    unsigned modifiers_;
};
