CC = g++
INCLUDE = -I./ -I./fastjet/include
CFLAGS = -Wall -g $(shell root-config --cflags) $(INCLUDE)
LINKER = g++

LINKERFLAGS = -undefined dynamic_lookup $(shell root-config --libs) -lEG -lGenVector -lMinuit -lPhysics -headerpad_max_install_names

SRCDIR = src
OBJDIR = obj
BINDIR = bin
LNKDIR = links

SOURCES = $(wildcard $(SRCDIR)/*.cxx) $(patsubst $(LNKDIR)/%_linkdef.h,$(SRCDIR)/%_dict.cxx,$(wildcard $(LNKDIR)/*.h))
BINARIES = $(wildcard $(BINDIR)/*.cc)
OBJECTS = $(patsubst %,$(OBJDIR)/%.o,$(basename $(notdir $(SOURCES)))) 
LIBS = -Wl,-rpath ./fastjet/lib -L./fastjet/lib/ -lfastjet -lfastjettools -lfastjetplugins -lsiscone -lsiscone_spherical -lNsubjettiness -lRecursiveTools -lSubjetCounting
EXE = analysis.exe

.PRECIOUS: $(OBJDIR)/%.o $(SRCDIR)/%_dict.cxx

.PHONY: all

all: $(EXE)

# General rule for making object files
$(SRCDIR)/%_dict.cxx: $(LNKDIR)/%_linkdef.h
	@rootcling -f $@ -c $^

$(OBJDIR)/%.o: $(BINDIR)/%.cc 
	$(CC) $(CFLAGS) $< -c -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cxx
	$(CC) $(CFLAGS) $< -c -o $@

%.exe: $(OBJECTS) $(OBJDIR)/%.o
	$(CC) -Wall -o $@ $(LINKERFLAGS) $(LIBS) $^

clean:  
	rm -v -f \
        $(OBJDIR)/*.o *.exe \
	$(SRCDIR)/*_dict.cxx \
	*.pcm
	@echo "Done"
