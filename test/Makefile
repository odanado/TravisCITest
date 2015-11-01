CXXFLAGS = -Wall -Wextra -std=c++11
OPTFLAGS = -O3 -march=native -flto -fno-rtti -fno-stack-protector -DNDEBUG

OBJS = test.o
TARGET = a.out

$(TARGET):$(OBJS)
	$(CXX) -v $(CXXFLAGS) $(INCLUDE) $(OPTFLAGS) $(LIBS) $(OBJS) -o $(TARGET)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDE) $(OPTFLAGS) -c $<

clean:
	rm $(OBJS) $(TARGET)
