#ifndef MAINFRAME_HPP
#define MAINFRAME_HPP

#include <wx/wx.h>


class MainFrame : public wxFrame 

{
    public: 
      MainFrame(const wxString& title);

      private:
      void CreateControls();
      void BindEventHandlers();
      void AddSavedTasks();

      void OnAddButtonClicked(wxCommandEvent& event);
      void OnInputEnter(wxCommandEvent& event);
      void OnListKeyDown(wxKeyEvent& event);
      void OnClearButtonClicked(wxCommandEvent& event);  
      void OnWindowClosed(wxCloseEvent& event); 



      // helper method
      void AddTaskFromInput();
      void DeleteSelectedTask();
      void MoveSelectedTask(int offset);  
      void SwapTasks(int i, int j);  


      wxPanel* panel;
      wxStaticText* headlineText;
      wxTextCtrl* inputField;
      wxCheckListBox* checkListBox;
      wxButton* clearButton;
      wxButton* addButton;

        

};


#endif  // MAINFRAME_HPP