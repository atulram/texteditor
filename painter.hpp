#pragma once
#include "color.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>

class PaintDevice;

class Painter
{
public:
    Painter(PaintDevice *);
    ~Painter();
    void drawLine(int x1, int y1, int x2, int y2);
    void drawPoint(int x, int y);
    void drawRect(int x1, int y1, int x2, int y2);
    void setColor(Color);
    void renderGlyph(wchar_t ch, int x, int y, Color fg, Color bg);
    int glyphWidth() const;
    int glyphHeight() const;
private:
    SDL_Renderer *renderer_;
    int gLeft_;
    int gTop_;
    TTF_Font *font_;
};
