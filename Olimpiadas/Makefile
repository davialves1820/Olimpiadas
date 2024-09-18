CXX = g++
CXXFLAGS = -Wall -g
TARGET = meu_programa
SRC = main.cpp Medalha.cpp Atleta.cpp Pais.cpp Modalidade.cpp
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)(OBJ) $(TARGET)(OBJ) $(TARGET)