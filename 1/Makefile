CC = g++
BUILD_DIR = build
SRC_DIR = src
INCLUDE_DIR = header
CFLAGS = -std=c++11 -Wall -Werror -I$(INCLUDE_DIR)

EXECUTABLE_FILE = shape.out

OBJECTS = \
	$(BUILD_DIR)/shape.o \
	$(BUILD_DIR)/sphere.o \
	$(BUILD_DIR)/cone.o \
	$(BUILD_DIR)/cuboid.o \
	$(BUILD_DIR)/main.o \

ShapeSensitivityList = \
	$(SRC_DIR)/shape.cpp \
	$(INCLUDE_DIR)/shape.h \

SphereSensitivityList = \
	$(SRC_DIR)/sphere.cpp \
	$(INCLUDE_DIR)/shape.h \
	$(INCLUDE_DIR)/sphere.h \
	$(INCLUDE_DIR)/constant.h \

CuboidSensitivityList = \
	$(SRC_DIR)/cuboid.cpp \
	$(INCLUDE_DIR)/shape.h \
	$(INCLUDE_DIR)/cuboid.h \

ConeSensitivityList = \
	$(SRC_DIR)/cone.cpp \
	$(INCLUDE_DIR)/shape.h \
	$(INCLUDE_DIR)/cone.h \
	$(INCLUDE_DIR)/constant.h \

MainSensitivityList = \
	$(SRC_DIR)/main.cpp \
	$(INCLUDE_DIR)/shape.h \
	$(INCLUDE_DIR)/sphere.h \
	$(INCLUDE_DIR)/cuboid.h \
	$(INCLUDE_DIR)/cone.h \

all: $(BUILD_DIR) $(EXECUTABLE_FILE)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/shape.o: $(ShapeSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/shape.cpp -o $(BUILD_DIR)/shape.o

$(BUILD_DIR)/sphere.o: $(SphereSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/sphere.cpp -o $(BUILD_DIR)/sphere.o

$(BUILD_DIR)/cuboid.o: $(CuboidSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/cuboid.cpp -o $(BUILD_DIR)/cuboid.o

$(BUILD_DIR)/cone.o: $(ConeSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/cone.cpp -o $(BUILD_DIR)/cone.o

$(BUILD_DIR)/main.o: $(MainSensitivityList)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

$(EXECUTABLE_FILE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE_FILE)

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) *.o *.out