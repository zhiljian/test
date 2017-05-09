TARGET:=ut_run

GXX:=g++
SRC_DIRS:=.
C_SRCS:=$(foreach d, $(SRC_DIRS), $(wildcard $d/*.c))
CXX_SRCS:=$(foreach d,$(SRC_DIRS), $(wildcard $d/*.cpp))
SUBDIRS=$(shell ls -l | grep ^d | awk '{if($$9 != "debug") print $$9}')
export TARGET GXX
$(dirs):  
	@for dir in $(dirs); do \  
		$(MAKE) -C $$dir; \  
	done  
