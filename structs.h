#include <X11/X.h>
#include <X11/Xft/Xft.h>
#include <stdint.h>

// INTERNAL -- IGNORE
typedef struct {
    XftFont* font;
    XftColor color;
    XftDraw* draw;
} FontStruct;

typedef struct {
    uint32_t width, height;
} Monitor;
typedef struct {
    const char* cmd;
    float refresh_time;
    float timer;
    char text[512];
    bool init;
} BarCommand;

typedef struct {
    const char* cmd;
    const char* icon;
    Window win;
    FontStruct font;
    uint32_t color;
} BarButton;

typedef enum {
    DESIGN_STRAIGHT = 0,
    DESIGN_SHARP_LEFT_UP,         
    DESIGN_SHARP_RIGHT_UP,
    DESIGN_SHARP_LEFT_DOWN,
    DESIGN_SHARP_RIGHT_DOWN,
    DESIGN_ARROW_LEFT,                        
    DESIGN_ARROW_RIGHT,
    DESIGN_ROUND_LEFT,
    DESIGN_ROUND_RIGHT,
} BarLabelDesign;

typedef struct {
    const char* cmd;
    uint8_t key;
    bool spawned, hidden;
    Window win, frame;
} ScratchpadDef;
