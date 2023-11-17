# Nome do arquivo executável
TARGET = Number System Converter

# Arquivos-fonte
SRC = src/main.c

# Compilador
CC = gcc

# Opções do compilador
CFLAGS = -fdiagnostics-color=always -g

# Opções do linker
LDFLAGS = -I /home/aldair/Dev/Learning_C/Converter/src/include -lm

# Regra para gerar o arquivo executável
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

# Regra para limpar os arquivos gerados
clean:
	rm -f $(TARGET)