SRC := $(wildcard *.cc)

ifneq ($(words $(SRC)), 1)
    $(error Se debe encontrar exactamente un archivo .cc en el directorio)
endif

TARGET := $(basename $(SRC))

CXX := g++
CXXFLAGS := -Wall -g

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

