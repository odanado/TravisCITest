CXXFLAGS = -g -Wall -Wextra -std=c++11

OBJS = test.o
TARGET = a.out

$(TARGET):$(OBJS)
	$(CXX) -v $(CXXFLAGS) $(INCLUDE) $(LIBS) $(OBJS) -o $(TARGET)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $<

clean:
	rm $(OBJS) $(TARGET)
