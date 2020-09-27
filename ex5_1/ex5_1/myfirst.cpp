#include <afxwin.h>
#include "resource.h"

class MyFrameWindow : public CFrameWnd {
public:
	BOOL PreCreateWindow(CREATESTRUCT& cs) {
		cs.hMenu = ::LoadMenu(NULL, MAKEINTRESOURCE(IDR_MAINMENU));
		return CFrameWnd::PreCreateWindow(cs);
	}

	afx_msg void OnPaint() {
		CPaintDC paintDC(this);
		paintDC.TextOut(0, 0, "这是我的第一个窗口程序");
	}

	afx_msg void OnFileExit() {
		PostMessage(WM_CLOSE);
	}

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(MyFrameWindow, CFrameWnd)
	ON_WM_PAINT()
	ON_COMMAND(ID_FILE_EXIT, OnFileExit)
END_MESSAGE_MAP()

class HelloApp : public CWinApp {
public:
	HelloApp() : CWinApp("Hello world!") {
	}

	BOOL InitInstance() {
		CFrameWnd* MyFrame = new MyFrameWindow;
		m_pMainWnd = MyFrame;
		MyFrame->Create(NULL, (LPCTSTR)"Hello");
		MyFrame->SetIcon(LoadIcon(IDI_MAINICON), TRUE);
		MyFrame->ShowWindow(SW_SHOW);
		return TRUE;
	}
} HelloWorld;