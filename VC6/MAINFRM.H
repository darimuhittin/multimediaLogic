// mainfrm.h : interface of the CMainFrame class
//
// Copyright (C) 1993-1994 George Mills and Softronics, Inc. Corporation
// All rights reserved.
//

class CMainFrame : public CMDIFrameWnd
   {
   DECLARE_DYNAMIC(CMainFrame)
   public:
   CMainFrame();

   // Attributes
   public:

   // Operations
   public:

   // Overrides
   // ClassWizard generated virtual function overrides
   //{{AFX_VIRTUAL(CMainFrame)
   virtual BOOL DestroyWindow();
   //}}AFX_VIRTUAL

   // Implementation
   public:
   virtual ~CMainFrame();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

   // control bar embedded members
   CPaletteBar m_wndPaletteBar;
   //   CRobotWnd foo;
   CMDIChildWnd *bar;

   protected:
   afx_msg void OnInitMenu(CMenu* pMenu);
   // control bar embedded members
   CStatusBar m_wndStatusBar;
   CToolBarEx m_wndToolBar;

   // Generated message map functions
   protected:
   //{{AFX_MSG(CMainFrame)
   afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
   afx_msg void OnHelpTutorial();
   afx_msg void OnHelpExamples();
   afx_msg void OnHelpReleasenotes();
   afx_msg void OnHelpOrderform();
   //}}AFX_MSG
   DECLARE_MESSAGE_MAP()
   }
;

/////////////////////////////////////////////////////////////////////////////
