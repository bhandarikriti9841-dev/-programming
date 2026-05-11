

#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    line(100, 100, 300, 100);

    circle(200, 200, 50);

    outtextxy(150, 300, "Graphics Demonstration");

    getch();
    closegraph();

    return 0;
}
