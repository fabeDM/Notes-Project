# Notes-Project
by Fabian Habjanovic and Alvin Kazaz

QuickNotiz - Quick Notes

QuickNotiz, also known as Quick Notes, is a small application designed for taking notes. It is built using the C++ application framework called wxWidgets.

The application is organized into 8 logical files:

    MyApp.cpp
    MyApp.hpp
    DashboardFrame.hpp
    DashboardFrame.cpp
    Note.hpp
    Note.cpp
    EditNoteFrame.cpp
    EditNoteFrame.hpp

To compile the application, follow these steps:

    Run the command "make" in the Terminal to build the necessary dependencies.
    Execute the application by typing "./notiz" in the Terminal.

The application consists of two dashboards. On the main dashboard, users can create new notes by entering a title in the empty field on the left. After entering the title, they need to click the "Add Note" button on the right side of the input field. The note will then appear underneath on the dashboard.

All created notes on the dashboard are clickable. When a user clicks on a note, a new layer for editing the note is generated. Users can enter the necessary information in the description field. Once they are done, they have the option to save or delete the note by clicking one of the two offered buttons. A separate information window will inform the user whether the data was successfully saved or not.

All data is saved in an SQLite database. This means that when the user returns to use the QuickNotiz application, all their notes will be retrieved from the database.



![image](https://github.com/fabeDM/Notes-Project/assets/91656344/8cdc909d-4022-4627-9ed6-0e138b0b5e06)
