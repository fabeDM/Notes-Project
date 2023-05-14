#ifndef NOTE_HPP
#define NOTE_HPP

#include <wx/string.h>

class Note
{
public:
    wxString title;
    wxString content;

    Note(const wxString& _title = "", const wxString& _content = "");
};



#endif // NOTE_HPP