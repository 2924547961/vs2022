#include <windows.h>   //windowsͷ�ļ�
#include <time.h>      //������ʱ��ͷ�ļ�
#include <stdlib.h>    //��׼������

//��س�������
#define    UP         1         //���ϣ���ͷy�����겻�ϼ�С
#define    DOWN       2        //���£���ͷy�����겻������
#define    LEFT       3        //������ͷx�����겻�ϼ�С
#define    RIGHT      4         //���ң���ͷx���겻������
#define    SNAKEWIDTH  10       //�����ߵĴ�С
#define    XWIDTH   20        //��Ϸ���Ŀ��
#define    YHEIGHT   20       //��Ϸ���ĸ߶�
#define    ID_TIMER    1         //��ʱ��id
#define    TIMERSET    600     //��ʱ���
#define    FALSE     0
#define    TRUE      1
//����Windows��������
#define  APP_NAME  "Snake"
#define  APP_TITLE  TEXT("̰����")
//���̼���¼��У�P��R���ֱ���80,82��ʾ
#define P   80
#define R   82

struct Snake
{
	POINT point;      //������windef.h��point��ʾ�ýڵ���������
	struct  Snake *next, *before;  
}stSnake;    //������ͷ


//ȫ�ֱ���
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
	WNDCLASS wndcls;//WNDCLASS �ṹ����������������ȫ����Ϣ
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