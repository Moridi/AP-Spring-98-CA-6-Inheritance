CC = g++
BUILD_DIR = build
SRC_DIR = src
INCLUDE_DIR = include
CFLAGS = -std=c++11 -Wall -Werror -I$(INCLUDE_DIR)

EXECUTABLE_FILE = file_system_interface.out

OBJECTS = \
	$(BUILD_DIR)/File.o \
	$(BUILD_DIR)/Link.o \
	$(BUILD_DIR)/Directory.o \
	$(BUILD_DIR)/file_system_interface.o \
	$(BUILD_DIR)/main.o \

FileSensitivityList = \
	$(SRC_DIR)/File.cpp \
	$(INCLUDE_DIR)/File.h \
	$(INCLUDE_DIR)/File-inl.h \
	$(INCLUDE_DIR)/Element.h \
	$(INCLUDE_DIR)/Element-inl.h \

DirectorySensitivityList = \
	$(SRC_DIR)/Directory.cpp \
	$(INCLUDE_DIR)/Directory.h \
	$(INCLUDE_DIR)/Directory-inl.h \
	$(INCLUDE_DIR)/Element.h \
	$(INCLUDE_DIR)/Element-inl.h \

LinkSensitivityList = \
	$(SRC_DIR)/Link.cpp \
	$(INCLUDE_DIR)/Link.h \
	$(INCLUDE_DIR)/Link-inl.h \
	$(INCLUDE_DIR)/Element.h \
	$(INCLUDE_DIR)/Element-inl.h \

FileSystemInterfaceSensitivityList = \
	$(SRC_DIR)/file_system_interface.cpp \
	$(INCLUDE_DIR)/file_system_interface.h \
	$(INCLUDE_DIR)/file_system_interface-inl.h \
	$(INCLUDE_DIR)/Exception.h \
	$(INCLUDE_DIR)/Exception-inl.h\
	$(INCLUDE_DIR)/Element.h \
	$(INCLUDE_DIR)/Element-inl.h \

MainSensitivityList = \
	$(SRC_DIR)/main.cpp \
	$(INCLUDE_DIR)/file_system_interface.h \

all: $(BUILD_DIR) $(EXECUTABLE_FILE)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/File.o: $(FileSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/File.cpp -o $(BUILD_DIR)/File.o

$(BUILD_DIR)/Directory.o: $(DirectorySensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/Directory.cpp -o $(BUILD_DIR)/Directory.o

$(BUILD_DIR)/Link.o: $(LinkSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/Link.cpp -o $(BUILD_DIR)/Link.o

$(BUILD_DIR)/file_system_interface.o: $(FileSystemInterfaceSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/file_system_interface.cpp -o $(BUILD_DIR)/file_system_interface.o

$(BUILD_DIR)/main.o: $(MainSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

$(EXECUTABLE_FILE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE_FILE)

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) *.o *.out