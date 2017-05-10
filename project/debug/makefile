GXX:=g++
GTEST_DIR:=../../googletest/googletest
TOP_DIR:=..
LDFLAGS:=-L$(GTEST_DIR)/build -L. -L $(TOP_DIR) -lgtest -lstdc++ -lpthread
TARGET:=ut_run

$(TARGET): *.o
	$(GXX) -o $@ $^ $(LDFLAGS)
