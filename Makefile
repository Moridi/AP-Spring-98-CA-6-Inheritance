CC = g++
BUILD_DIR = build
SRC_DIR = src
INCLUDE_DIR = include
CFLAGS = -std=c++11 -Wall -Werror -I$(INCLUDE_DIR)

EXECUTABLE_FILE = FileSystem.out

OBJECTS = \
	$(BUILD_DIR)/Element.o \
	$(BUILD_DIR)/File.o \
	$(BUILD_DIR)/Link.o \
	$(BUILD_DIR)/Directory.o \
	$(BUILD_DIR)/FileSystem.o \
	$(BUILD_DIR)/Main.o \

ElementSensitivityList = \
	$(SRC_DIR)/Element.cpp \
	$(INCLUDE_DIR)/Element.h \
	$(INCLUDE_DIR)/Element-inl.h \

FileSensitivityList = \
	$(SRC_DIR)/File.cpp \
	$(INCLUDE_DIR)/File.h \
	$(INCLUDE_DIR)/File-inl.h \

DirectorySensitivityList = \
	$(SRC_DIR)/Directory.cpp \
	$(INCLUDE_DIR)/Directory.h \
	$(INCLUDE_DIR)/Directory-inl.h \

LinkSensitivityList = \
	$(SRC_DIR)/Link.cpp \
	$(INCLUDE_DIR)/Link.h \
	$(INCLUDE_DIR)/Link-inl.h \

FileSystemSensitivityList = \
	$(SRC_DIR)/FileSystem.cpp \
	$(INCLUDE_DIR)/FileSystem.h \
	$(INCLUDE_DIR)/FileSystem-inl.h \
	$(INCLUDE_DIR)/Exception.h \
	$(INCLUDE_DIR)/Exception-inl.h

MainSensitivityList = \
	$(SRC_DIR)/Main.cpp \
	$(INCLUDE_DIR)/FileSystem.h \

all: $(BUILD_DIR) $(EXECUTABLE_FILE)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/Element.o: $(ElementSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/Element.cpp -o $(BUILD_DIR)/Element.o

$(BUILD_DIR)/File.o: $(FileSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/File.cpp -o $(BUILD_DIR)/File.o

$(BUILD_DIR)/Directory.o: $(DirectorySensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/Directory.cpp -o $(BUILD_DIR)/Directory.o

$(BUILD_DIR)/Link.o: $(LinkSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/Link.cpp -o $(BUILD_DIR)/Link.o

$(BUILD_DIR)/FileSystem.o: $(FileSystemSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/FileSystem.cpp -o $(BUILD_DIR)/FileSystem.o

$(BUILD_DIR)/Main.o: $(MainSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/Main.cpp -o $(BUILD_DIR)/Main.o

$(EXECUTABLE_FILE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE_FILE)

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) *.o *.out