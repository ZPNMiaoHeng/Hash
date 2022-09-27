_default:
######################################################################
#>> Vesion 4.2.1
#>> Date: 2022/9/7
#>> DESCRIPTION: 
#>> 1. Example
######################################################################
# Check for sanity to avoid later confusion

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

########################################################################
#---------------------- File ------------------------------------------
VSRC += $(shell find . -name *.v)
#---------------------- CSRC ------------------------------------------
CSRC += $(shell find . -name *.cpp)
########################################################################
VERILATOR_INPUT =  $(VSRC) $(CSRC)

BUILD_DIR = ./build
OBJ_DIR = ./obj_dir
VERILOG_NAME = top
OBJ = ./obj_dir/V$(VERILOG_NAME)
#######################################################################
# Verliater option-- Generate C++ in executable form and coverage analysis  
VERILATOR_FLAGS += --cc --exe -Wall --trace --coverage \
	--build --top-module $(VERILOG_NAME)
# Optimize                                 
VERILATOR_FLAGS += -Os -x-assign 0
####################### compile ##################################
# Table

run:
# Modify run 
	@echo "--------------------------- VERILATE COMPILE----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	$(OBJ)
sim:
	@echo "-------------------------- Open GTKwave ------------------------"
	gtkwave -f $(BUILD_DIR)/*.vcd

clean:
	@-rm -rf $(BUILD_DIR)/*.vcd $(OBJ_DIR)
######################################################################
show-config:
	$(VERILATOR) -V

#######################################################################
# Table
.PHONY : run sim clean