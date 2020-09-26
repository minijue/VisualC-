#include <afxwin.h>
#include "resource.h"

class MyFrameWindow : public CFrameWnd {
public:
	afx_msg void OnPaint() {
		CPaintDC paintDC(this);
		paintDC.TextOut(0, 0, "这是我的第一个窗口程序");
	}

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(MyFrameWindow, CFrameWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()

class HelloApp : public CWinApp {
public:
	HelloApp() : CWinApp("Hello world!") {
	}

	BOOL InitInstance() {
		CFrameWnd* MyFrame = new MyFrameWindow;
		m_pMainWnd = MyFrame;
		MyFrame->Create(NULL, (LPCTSTR)"Hello");
		HICON maincion = LoadIcon(IDI_MAINICON);
		MyFrame->SetIcon(maincion, TRUE);
		MyFrame->ShowWindow(SW_SHOW);
		return TRUE;
	}
} HelloWorld;