#include "TXLib.h"
void dom(int x,int y, double r)
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_RED);
    txRectangle (x, y-300*r, x+220, y);
    POINT tri[3] = {{x, y-300*r}, {x+110, y-410*r}, {x+220,y-300*r}};
    txPolygon (tri, 3);

    txSetColor (TX_BLACK);
    txSetFillColor(RGB(139,85,58));
    txRectangle(x+200,y-140*r,x+140,y);

    txSetColor (TX_BLACK);
    txSetFillColor(TX_BLUE);
    txRectangle(x+30,y-200*r,x+80,y-120*r);
}
void FON(COLORREF Col)
{
    txSetColor(RGB(6,6,6));
    txSetFillColor(Col);
    txRectangle(0,0,800,600);
}

void raketazuzuzuzu(int x)
{
    txSetColor(RGB(6,6,6));
    txSetFillColor(RGB(6,6,6));
    txEllipse(x+430-430,210,x+730-430,420);
    txRectangle(x+730-430,220,x+800-430,420);
}

void drawLegs(int x, int y1, int y2)
{
    txSetColor(RGB(6,6,6));
    txSetFillColor(RGB(6,6,6));
    txRectangle(x+200-200,y1+480-550, x+250-200, y1+550-550);
    txRectangle(x+290-200,y2+480-550, x+340-200, y2+550-550);
}


int main()
{
    txCreateWindow (800, 600);
    int raketa=800;
    int drrem;
    int xDom = 160;
    int yDom = 550;
    double rDom = 1;
    int yLegs1 = 550;
    int yLegs2 = 550;
    int xLegs = 200;
    while(raketa>-500)
    {   txBegin();
        FON(TX_WHITE);
        raketazuzuzuzu(raketa);

        raketa=raketa-10;
        txSleep(1);
txEnd();
    }


    while(yDom>480)
    { txBegin();
        FON(TX_WHITE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        yDom-=5;
        txSleep(10);
  txEnd();  }

    while(yLegs1>515)
    { txBegin();
        FON(TX_WHITE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        yLegs1-=5;
        txSleep(10);
    txEnd();}

    while(yLegs1<550)
    { txBegin();
        FON(TX_WHITE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        yLegs1+=5;
        txSleep(10);
    txEnd();}

    while(yLegs2>515)
    { txBegin();
        FON(TX_WHITE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        yLegs2-=5;
        txSleep(10);
    txEnd();}

    while(yLegs2<550)
    { txBegin();
        FON(TX_WHITE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        yLegs2+=5;
        txSleep(10);
    txEnd();}

    while(rDom>0.5)
    { txBegin();
        FON(TX_WHITE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        rDom-=0.05;
        txSleep(10);
txEnd();    }

    while(yDom>-500)
    { txBegin();
        FON(TX_WHITE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, 1);
        yDom-=15;
        txSleep(10);
    txEnd();}


    while(yDom<-499)
    { FON(TX_WHITE);
     drawLegs(xLegs, yLegs1, yLegs2);
     xLegs=xLegs+10;
 txSleep(1);   }
txTextCursor (false);
return 0;
}
