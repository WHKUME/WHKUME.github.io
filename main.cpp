#include <bits/stdc++.h>
#include <windows.h>
#include "tchar.h"
#include <io.h>
#define doo 523
#define re 578
#define mi 659
using namespace std;
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
  MessageBox(NULL,"NULL","NULL",MB_ICONERROR);
  POINT point;
  HWND hwnd=GetDesktopWindow();
  HDC hdc=GetWindowDC(hwnd);
  for(int  i=1; i<=500; i++)
  {
    if(i%20==0)
    {
      Beep(mi,300);
      Beep(re,300);
      Beep(doo,300);
      Beep(re,300);
    }
    GetCursorPos(&point);
    DrawIcon(hdc,point.x,point.y,LoadIcon(NULL,IDI_ERROR));
    if(i>150&&i<=300)
      StretchBlt(hdc, 0, 0,GetSystemMetrics(SM_CXSCREEN)+1000,GetSystemMetrics(SM_CYSCREEN)+500,hdc, 100, 100,GetSystemMetrics(SM_CXSCREEN),GetSystemMetrics(SM_CYSCREEN),SRCINVERT);
    if(i<=140)
      StretchBlt (hdc, 0, 30, GetSystemMetrics(SM_CXSCREEN)-100,GetSystemMetrics(SM_CYSCREEN)-60,hdc, 30, 50, GetSystemMetrics(SM_CXSCREEN)-100 ,GetSystemMetrics(SM_CYSCREEN)-80 ,SRCCOPY);
    if(i<=140&&i>=40)
      StretchBlt (hdc, 0,
                  GetSystemMetrics(SM_CYSCREEN),GetSystemMetrics(SM_CXSCREEN),-GetSystemMetrics(SM_CYSCREEN),hdc, 0, 0,GetSystemMetrics(SM_CXSCREEN),GetSystemMetrics(SM_CYSCREEN),SRCAND);
    if(i<=150)
      BitBlt( hdc, 0 ,0, GetSystemMetrics(SM_CXSCREEN),GetSystemMetrics(SM_CYSCREEN),hdc,  0,  0 ,  DSTINVERT);
    if(i>20)
      DrawIcon(hdc,rand()%1000,rand()%1000,LoadIcon(NULL,IDI_WARNING));
    if(i>100)
      DrawIcon(hdc,rand()%1000,rand()%1000,LoadIcon(NULL,IDI_INFORMATION));
    if(i>120)
      DrawIcon(hdc,rand()%1000,rand()%1000,LoadIcon(NULL,IDI_QUESTION));
    Sleep(200);
  }
  return 0;
}
