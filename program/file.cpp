#include <Windows.h>
#include <math.h>

int main()
{
    HDC hDC = GetDC(GetConsoleWindow());
    HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
    SelectObject(hDC, Pen);
    float z;
    for(z = -10.0; z <= 10.0; z += 0.01)
    {
        MoveToEx(hDC, -10 * z + 100, -10 * z + 100, NULL);//10 - scale
        LineTo(hDC, 10 * z + 100, -10 * z + 100);
        MoveToEx(hDC, -10 * z + 100, -10 * z + 300, NULL);//10 - scale
        LineTo(hDC, 10 * z + 100, -10 * z + 300);
        MoveToEx(hDC, -10 * z + 100, -10 * z + 500, NULL);//10 - scale
        LineTo(hDC, 10 * z + 100, -10 * z + 500);
        MoveToEx(hDC, -10 * z + 300, -10 * z + 100, NULL);//10 - scale
        LineTo(hDC, 10 * z + 300, -10 * z + 100);
        MoveToEx(hDC, -10 * z + 300, -10 * z + 300, NULL);//10 - scale
        LineTo(hDC, 10 * z + 300, -10 * z + 300);
        MoveToEx(hDC, -10 * z + 300, -10 * z + 500, NULL);//10 - scale
        LineTo(hDC, 10 * z + 300, -10 * z + 500);
        MoveToEx(hDC, -10 * z + 500, -10 * z + 100, NULL);//10 - scale
        LineTo(hDC, 10 * z + 500, -10 * z + 100);
        MoveToEx(hDC, -10 * z + 500, -10 * z + 300, NULL);//10 - scale
        LineTo(hDC, 10 * z + 500, -10 * z + 300);
        MoveToEx(hDC, -10 * z + 500, -10 * z + 500, NULL);//10 - scale
        LineTo(hDC, 10 * z + 500, -10 * z + 500);
        MoveToEx(hDC, -10 * z + 700, -10 * z + 100, NULL);//10 - scale
        LineTo(hDC, 10 * z + 700, -10 * z + 100);
        MoveToEx(hDC, -10 * z + 700, -10 * z + 300, NULL);//10 - scale
        LineTo(hDC, 10 * z + 700, -10 * z + 300);
        MoveToEx(hDC, -10 * z + 700, -10 * z + 500, NULL);//10 - scale
        LineTo(hDC, 10 * z + 700, -10 * z + 500);
        MoveToEx(hDC, -10 * z + 900, -10 * z + 100, NULL);//10 - scale
        LineTo(hDC, 10 * z + 900, -10 * z + 100);
        MoveToEx(hDC, -10 * z + 900, -10 * z + 300, NULL);//10 - scale
        LineTo(hDC, 10 * z + 900, -10 * z + 300);
        MoveToEx(hDC, -10 * z + 900, -10 * z + 500, NULL);//10 - scale
        LineTo(hDC, 10 * z + 900, -10 * z + 500);
    }
    HPEN pepe = CreatePen(PS_SOLID, 2, RGB(254, 0, 0));
    SelectObject(hDC, pepe);
    float x;
    for (x = -8.0f; x <= 80.0f; x += 0.001f) // O(100,85) - center
    {
        MoveToEx(hDC, 110 * x + 100, -110 * sin(x) + 200, NULL);//10 - scale
        LineTo(hDC, 110 * x + 10, -110* sin(x) + 200);
    }
    Sleep(60000);
    return 0;
}