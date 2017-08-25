CXX=`root-config --cxx`
CXXFLAGS=`root-config --cflags`
LDFLAGS=`root-config --ldflags`
LDLIBS=`root-config --glibs`
ROOTLIBS='-lMinuit'


# Assumes that the script is in MyScript.C
# and it must contain a main() function

all: align2d

% : %.cpp
	g++ -g -Wall `root-config --cflags --libs` -L$(ROOTSYS)/lib $(ROOTLIBS) $? -o $@
fit: fit.cpp
	g++ -std=c++0x -g -Wall `root-config --cflags --libs` -lSpectrum  fit.cpp -o fit
