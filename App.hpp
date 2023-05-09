

#ifndef APP_HPP
#define APP_HPP

#include <wx/wx.h>   // need for ineritance App from wxApp

class App : public wxApp {
public:
  bool OnInit();
};

#endif  // APP_HPP
