CXX?=g++ 
CXXFLAGS+= --std=c++17 -O3 -Wall -Wextra -I. -static-libgcc -static-libstdc++ -static
SOURCES=$(wildcard src/*.cpp)

src/%.o: src/%.cpp 
	$(CXX) $(CXXFLAGS) -c -o $@ $<

persegipanjang: $(SOURCES:.cpp=.o)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	del src\*.o persegipanjang.exe

