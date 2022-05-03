CXX?=g++ 
CXXFLAGS+= --std=c++17 -O3 -Wall -Wextra -I.
SOURCES=$(wildcard src/*.cpp)

-static-libgcc -static-libstdc++ -static
src/%.o: src/%.cpp 
	$(CXX) $(CXXFLAGS) -c -o $@ $<

persegipanjang: $(SOURCES:.cpp=.o)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	del src\*.o persegipanjang.exe
