SRC_DIR = src
OBJ_DIR = obj
BUILD_DIR = build
INC_DIR = include  # Diretório onde os arquivos de cabeçalho estão

SOURCES = $(SRC_DIR)/main.cpp  $(SRC_DIR)/Atleta.cpp $(SRC_DIR)/Pais.cpp $(SRC_DIR)/Medalha.cpp $(SRC_DIR)/Modalidade.cpp
OBJECTS = $(addprefix $(OBJ_DIR)/, $(SOURCES:$(SRC_DIR)/%.cpp=%.o))
EXECUTABLE = $(BUILD_DIR)/meu_programa

# Flags de compilação
CXXFLAGS = -I$(INC_DIR)  # Incluindo o diretório de cabeçalhos

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
