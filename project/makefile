TARGET:=ut_run

GXX:=g++
SRC_DIRS:=.
C_SRCS:=$(foreach d, $(SRC_DIRS), $(wildcard $d/*.c))
CXX_SRCS:=$(foreach d,$(SRC_DIRS), $(wildcard $d/*.cpp))
GTEST_DIR:=../googletest/googletest
FLAGS:=-I$(GTEST_DIR)/include -I . -I ./testForBuild/inc
LDFLAGS:=-L$(GTEST_DIR)/build -L. -lgtest -lstdc++ -lpthread

exclude_dirs := debug GlobalFile
dirs := $(shell find . -maxdepth 1 -type d)
dirs := $(basename $(patsubst ./%,%,$(dirs)))
dirs := $(filter-out $(exclude_dirs),$(dirs))
SUBDIRS := $(dirs)
clean_dirs := $(addprefix _clean_,$(SUBDIRS) )

CXX_OBJS:=$(CXX_SRCS:.cpp=.o)
OBJ_DIR:=./debug
DEBUG=$(shell ls -l | grep ^d | awk '{if($$9 == "debug") print $$9}')
export GXX LDFLAGS

all:$(CXX_OBJS) $(SUBDIRS) DEBUG
.PHONY: subdirs $(SUBDIRS) clean


$(SUBDIRS):
	$(MAKE) -C $@
subdirs: $(SUBDIRS)

ALL_OBJS:= $(foreach x,${OBJ_DIR},$(wildcard $(addprefix ${x}/*,.o)))

$(CXX_OBJS)  :%.o: %.cpp
	$(GXX) -c -o $(OBJ_DIR)/$(CXX_OBJS) $(CXX_SRCS) $(FLAGS)


DEBUG:
	$(MAKE) -C $(DEBUG)
clean:
	-rm ./debug/*.o ./debug/$(TARGET)
