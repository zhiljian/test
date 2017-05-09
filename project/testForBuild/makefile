SUBDIRS=$(shell ls -l | grep ^d | awk '{print $$9}')
CUR_SRC_DIR:=./src
CUR_INC_DIR:=./inc
CUR_SRCS:=$(foreach d,$(CUR_SRC_DIR), $(wildcard $d/*.cpp))
CUR_OBJS=${patsubst %.c, %.o, $(CUR_SRCS)}
OBJS_DIR:=./debug
$(CUR_OBJS):%.o:%.cpp
	$(CC) -c $^ -o $(ROOT_DIR)/$(OBJS_DIR)/$@
