TARGET:=ut_run

GXX:=g++
SRC_DIRS:=.
C_SRCS:=$(foreach d, $(SRC_DIRS), $(wildcard $d/*.c))
CXX_SRCS:=$(foreach d,$(SRC_DIRS), $(wildcard $d/*.cpp))
GTEST_DIR:=../googletest/googletest
FLAGS:=-I$(GTEST_DIR)/include -I . -I ./testForBuild/inc
LDFLAGS:=-L$(GTEST_DIR)/build -L. -lgtest -lstdc++ -lpthread

exclude_dirs := debug
dirs := $(shell find . -maxdepth 1 -type d)
dirs := $(basename $(patsubst ./%,%,$(dirs)))
dirs := $(filter-out $(exclude_dirs),$(dirs))
SUBDIRS := $(dirs)
clean_dirs := $(addprefix _clean_,$(SUBDIRS) )
all:$(SUBDIRS) $(TARGET)
.PHONY: subdirs $(SUBDIRS) clean
$(SUBDIRS):
	$(MAKE) -C $@
subdirs: $(SUBDIRS)

CXX_OBJS:=$(CXX_SRCS:.cpp=.o)
OBJ_DIR:=./debug
#ALL_OBJS:=$(wildcard $(OBJ_DIR)/*.o)
ALL_OBJS:= $(foreach x,${OBJ_DIR},$(wildcard $(addprefix ${x}/*,.o)))

$(TARGET) : $(ALL_OBJS)
	echo $(ALL_OBJS)
	$(GXX) -o $@ $^ $(LDFLAGS)
$(CXX_OBJS) : %.o : %.cpp
	echo $(CXX_OBJS)
	$(GXX) -c -o $(OBJ_DIR)/$(CXX_OBJS) $(CXX_SRCS) $(FLAGS)
clean:
	-rm ./debug/*.o
