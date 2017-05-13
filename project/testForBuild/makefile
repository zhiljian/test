GXX:=g++
CUR_SRC_DIR:=./src
CUR_TST_DIR:=./tst
CUR_INC_DIR:=./inc
CUR_SRCS:=$(foreach d,$(CUR_SRC_DIR), $(wildcard $d/*.cpp))
CUR_OBJS:=$(notdir $(CUR_SRCS:%.cpp=%.o))

CUR_TST_SRCS:=$(foreach d,$(CUR_TST_DIR), $(wildcard $d/*.cpp))
CUR_TST_OBJS:=$(notdir $(CUR_TST_SRCS:%.cpp=%.o))

OBJS_DIR:=../debug
GTEST_DIR:=../../googletest/googletest
CFLAG:=-I ./inc -I ../GlobalFile
CFLAG+=-I$(GTEST_DIR)/include

all:$(CUR_OBJS) $(CUR_TST_OBJS)
#$(CUR_OBJS):%.o:%.cpp
$(CUR_OBJS):$(CUR_SRCS)
	$(GXX) -c $^ -o $(OBJS_DIR)/$@ $(CFLAG)

$(CUR_TST_OBJS):$(CUR_TST_SRCS)
	$(GXX) -c $^ -o $(OBJS_DIR)/$@ $(CFLAG)

