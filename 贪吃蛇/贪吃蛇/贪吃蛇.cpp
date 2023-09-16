#include <windows.h>   //windows头文件
#include <time.h>      //日期与时间头文件
#include <stdlib.h>    //标准函数库

//相关常量定义
#define    UP         1         //向上，蛇头y的坐标不断减小
#define    DOWN       2        //向下，蛇头y的坐标不断增大
#define    LEFT       3        //向左，蛇头x的坐标不断减小
#define    RIGHT      4         //向右，蛇头x坐标不断增大
#define    SNAKEWIDTH  10       //单节蛇的大小
#define    XWIDTH   20        //游戏区的宽度
#define    YHEIGHT   20       //游戏区的高度
#define    ID_TIMER    1         //定时器id
#define    TIMERSET    600     //定时间隔
#define    FALSE     0
#define    TRUE      1
//定义Windows窗口名字
#define  APP_NAME  "Snake"
#define  APP_TITLE  TEXT("贪吃蛇")
//键盘监控事件中，P，R键分别用80,82表示
#define P   80
#define R   82

struct Snake
{
	POINT point;      //定义在windef.h，point表示该节点的相对坐标
	struct  Snake *next, *before;  
}stSnake;    //定义蛇头


//全局变量
static int iDirect = RIGHT;
static int iScore;     
int iIsOver = FALSE;
int aiPointExist[XWIDTH][YHEIGHT];
struct Snake* pstLast = NULL;
struct Snakr* pstFood = NULL;


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdshow)
{
	MSG msg;
	WNDCLASS wndcls;//WNDCLASS 结构变量，包含窗口类全部信息
	wndcls.cbClsExtra = 0;
	wndcls.cbWndExtra = 0;
	wndcls.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndcls.hCursor = LoadCursor(hInstance, IDC_ARROW);
	wndcls.hIcon = LoadIcon(hInstance, IDI_APPLICATION);
	wndcls.hInstance = hInstance;
	wndcls.lpfnWndProc = WndProc;
	wndcls.lpszMenuName = NULL;
	wndcls.lpszClassName = APP_NAME;
	wndcls.style = CS_HREDRAW | CS_VREDRAW;

}