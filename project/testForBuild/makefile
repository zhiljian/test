GXX:=g++
CUR_SRC_DIR:=./src
CUR_INC_DIR:=./inc
CUR_SRCS:=$(foreach d,$(CUR_SRC_DIR), $(wildcard $d/*.cpp))
BASE_NAME:=$(basename $(CUR_SRCS))
#CUR_OBJS=${patsubst %.cpp, %.o, $(BASE_NAME)}
CUR_OBJS:=$(notdir $(CUR_SRCS:%.cpp=%.o))
OBJS_DIR:=../debug
CFLAG:=-I ./inc

#all:$(CUR_OBJS)
#$(CUR_OBJS):%.o:%.cpp
$(CUR_OBJS):$(CUR_SRCS)
	$(GXX) -c $^ -o $(OBJS_DIR)/$(CUR_OBJS) $(CFLAG)
