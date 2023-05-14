# Sample Makefile for wx applications
WX_CONFIG := wx-config
WX_CXXFLAGS := $(shell $(WX_CONFIG) --cxxflags)
WX_LIBS := $(shell $(WX_CONFIG) --libs)

SQLITE_LIB_DIR := /usr/lib/x86_64-linux-gnu
SQLITE_INCLUDE_DIR := /usr/include

LDFLAGS += -L$(SQLITE_LIB_DIR) -lsqlite3
WX_CXXFLAGS += -I$(SQLITE_INCLUDE_DIR)

APPLICATION := notiz  # adjust name to your desired application name
OBJECTS := MyApp.o DashboardFrame.o EditNoteFrame.o Note.o  # enter the .o files or generate this list

all: $(APPLICATION)

$(APPLICATION): $(OBJECTS)
	$(CXX) -o $@ $(OBJECTS) $(LDFLAGS) $(WX_LIBS) $(LIBS)

$(OBJECTS): %.o: %.cpp
	$(CXX) -c -o $@ $(WX_CXXFLAGS) $(CXXFLAGS) $<

.PHONY: all tests clean
clean:
	find . -name '*~' -o -name '*.o' -o -name $(APPLICATION) | xargs rm
