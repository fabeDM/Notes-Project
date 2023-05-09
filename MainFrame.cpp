#include "MainFrame.hpp"
#include <wx/wx.h>
#include <vector>
#include <string>
#include "Task.hpp"

class MainFrame : public wxFrame {
public:MainFrame(const wxString& title);
};

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
    
}