#include <stdio.h>

union formas
{
    struct
    {
        unsigned x, y, ancho, alto;
    } forma1;
    struct Eje
    {
        struct
        {
            unsigned x1, y1;
        };
        struct
        {
            unsigned x2, y2;
        };

    } forma2;

    struct Eje
    {
        struct
        {
            unsigned x, y, ancho, alto;
        };
    } forma3;
};
