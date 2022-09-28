_default:
######################################################################
#>> Vesion 4.2.1
#>> Date: 2022/9/7
#>> DESCRIPTION: 
#>> 1. Its function is to compile Verilog files through verilator and 
#>>    observe waveform by GTKwave.
######################################################################
ifneq ($(words $(CURDIR)),1)
	$(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

#######################################################################
SHA1_HOME = .
SHA1_V = $(SHA1_HOME)/v
#SHA1_C = $(SHA1_HOME)/c  //软件

#######################################################################
#DIFINE
# Default test verilog file name
TOP =	sha1_con
VERILOG_NAME  = $(TOP)
SRC_DIR = $(SHA1_V)/src
CPP_DIR = $(SHA1_V)/cpp

#######################################################################
VSRC += $(SRC_DIR)/sha1_con.v
#VSRC += $(shell find $(SRC_DIR) -name *.v)
#CSRC += $(CPP_DIR)/
CSRC += $(shell find $(CPP_DIR) -name *.cpp)
VERILATOR_INPUT =  $(VSRC) $(CSRC)

GTK_DIR = $(SHA1_V)/build/dump.vcd
OBJ_DIR = $(SHA1_V)/obj_dir
#######################################################################
# Verliater option-- Generate C++ in executable form and coverage analysis               
VERILATOR_FLAGS += --cc --exe -Wall --trace --coverage \
	--build --top-module $(VERILOG_NAME)
# Optimize                                 
VERILATOR_FLAGS += -Os -x-assign 0

####################### npc compile ##################################
# Table
run:
# Modify run 
	@echo "--------------------------- VERILATE COMPILE----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	./obj_dir/V$(VERILOG_NAME)

sim:
	@echo "-------------------------- Open GTKwave ------------------------"
	gtkwave -f $(GTK_DIR)

clean:
	@-rm -rf $(GTK_DIR) $(OBJ_DIR)
	
######################################################################
show-config:
	$(VERILATOR) -V

#######################################################################
# Table
.PHONY : run sim clean

#######################################################################